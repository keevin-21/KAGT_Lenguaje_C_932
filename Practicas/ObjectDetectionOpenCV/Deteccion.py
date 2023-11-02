import numpy as np
import cv2

# objeto
cap = cv2.VideoCapture(1)
while(True):
    ret,frame = cap.read()                      # leer video
    cv2.imshow('Obtener objeto',frame)          # leer video
    if cv2.waitKey(1) == 27:
        break
cv2.imwrite('objeto.jpg',frame)                 # capura/frame para objeto
cap.release()                                   # cerrar
cv2.destroyAllWindows()

obj = cv2.imread('objeto.jpg',0)                # leer la imagen
recorte = obj[160:300, 230:380]                 # recortar la imagen
cv2.imshow('aaaa',recorte)                      # mostrar objeto

# deteccion
cap = cv2.VideoCapture(1)
while(True):
    ret2,frame2 = cap.read()                    # leer video
    cv2.imshow('Deteccion del objeto',frame2)   # leer video
    if cv2.waitKey(1) == 27:
        break
cv2.imwrite('deteccion.jpg',frame2)             # capura/frame para deteccion
cap.release()
cv2.destroyAllWindows()

#mostrar imagen
img = cv2.imread('Deteccion.jpg',3)
gris = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)    # escala de grises
cv2.imshow('Deteccion',img)

# deteccion de objetos
w, h = recorte.shape[::-1]                      # extraemos el ancho y el alto del recorte del objeto
deteccion  = cv2.matchTemplate(gris, recorte, cv2.TM_CCOEFF_NORMED)     # realizamos la deteccion por patrones
print(deteccion)
# umbral por defecto en 0.75
# umbral = 0.0001                                    # asignar un umbral para filtrar objetos parecidos
location = np.where(deteccion) # >= umbral           # location se guarda cuando supera el umbral
for pt in zip (*location[::-1]):
    cv2.rectangle(img, pt, (pt[0]+w, pt[1]+h), (0,0,255), 1)

cv2.imshow('Deteccion',img)
