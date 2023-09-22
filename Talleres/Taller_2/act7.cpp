#include <stdio.h>

int main() {

    float montoCompra;
    int membresiaPremium;

    printf("Ingrese el monto de compra: ");
    scanf("%f", &montoCompra);
    
    printf("¿Tiene membresia premium? (1 para Sí, 0 para No): ");
    scanf("%d", &membresiaPremium);

    float descuento = (montoCompra >= 1000 && membresiaPremium == 1) ? montoCompra * 0.15 :
                     (montoCompra >= 1000) ? montoCompra * 0.10 :
                     0.0;

    float  totalAPagar = montoCompra - descuento;

    printf("Monto de compra: %.2f\n", montoCompra);
    printf("Descuento aplicado: %.2f\n", descuento);
    printf("Monto total a pagar: %.2f\n", totalAPagar);

    return 0;
}