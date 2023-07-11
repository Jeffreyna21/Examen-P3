#include<stdio.h>
#include <string.h>
#define SALA_NORMAL 30
#define SALA_VIP 35
#define SALA_3D 30
#define COSTO_NORMAL 8.00
#define COSTO_VIP 15.00
#define COSTO_3D 12.00



int main(){
    int x=0;
    int peliculas;
    int opcion;
    int sala;
    int asientos;
    int precio;
    float descuentot;
    float descuento;
    char usuario[20]= "usuario";
    char contrasena[20]="contraseña";
     do {
     x=x+1;
      printf("Ingrese el usuario\n");
     scanf("%s", usuario);
      printf("Ingrese la contraseña\n");
     scanf("%s", contrasena);
        if (strcmp(usuario, "usuario")== 0 && strcmp(contrasena, "contraseña")== 0)
        {
           do{
            printf("Bienvenido al programa\n");
            printf("Escoja una opcion\n");
            printf("Venta de entradas = 1\n");
            printf("Estadistica de ventas  = 2\n");
            printf("Salir = 3\n");
            scanf("%d", &opcion);
            switch (opcion){
            case 1:
            printf("Escoje una pelicula\n");
            printf("Trasfomers = 1\n");
            printf("Spiderman = 2\n");
            scanf("%d", &peliculas);
            switch (peliculas)
            {
            case 1: printf("Escoge el tipo de sala que quieras\n");
            printf("sala normal con costo de 8.00$ = 1\n");
            printf("Sala V.I.P. con costo de 15.00$ = 2\n");
            printf("Sala 3D  con costo de 12.00$ = 3\n");
            scanf ("%d", &sala);
            printf("Escoja el numero de asientos\n");
            scanf("%d", &asientos);
            if (sala = 1 && asientos <= SALA_NORMAL){
                asientos=asientos * COSTO_NORMAL;
                printf("El costo total seria %2.f\n", asientos);
            }else {
                printf("Excedio el numero de asientos\n");
            }
             if (sala = 2 && asientos <= SALA_VIP){
                asientos=asientos * COSTO_VIP;
                printf("El costo total seria %2.f\n", asientos);
            }else {
                printf("Excedio el numero de asientos\n");
            }
             if (sala = 3 && asientos <= SALA_3D){
                asientos=asientos * COSTO_3D;
                printf("El costo total seria %2.f\n", asientos);
            }else {
                printf("Excedio el numero de asientos\n");
            }
                break;
            case 2: printf("Escoge el tipo de sala que quieras\n");
            printf("sala normal con costo de 8.00$ = 1 \n");
            printf("Sala V.I.P. con costo de 15.00$ = 2\n");
            printf("Sala 3D con costo de 12.00$ = 3\n");
            scanf("%d", &sala);
            printf("Escoja el numero de asientos\n");
            scanf("%d", &asientos);
            if (sala = 1 && asientos <= SALA_NORMAL){
                asientos=asientos * COSTO_NORMAL;
                printf("El costo total seria %2.f\n", asientos);
            }else {
                printf("Excedio el numero de asientos\n");
            }
             if (sala = 2 && asientos <= SALA_VIP){
                precio=asientos * COSTO_VIP;
                printf("El costo total seria %2.f\n", precio);
            }else {
                printf("Excedio el numero de asientos\n");
            }
             if (sala = 3 && asientos <= SALA_3D){
                precio=asientos * COSTO_3D;
                printf("El costo total seria %2.f\n", precio);
            }else {
                printf("Excedio el numero de asientos\n");
            }
            default:
                printf("Estaopcion no es correcta\n");
                break;
            }
            if (precio <= 40){
                printf("sin descuento\n");
            }else if (precio > 40 && precio <= 80){
                descuento=precio*0.05;
                descuentot=precio-descuento;
                printf("Tiene un descuento del 5 pociento\n");
                printf("Debe pagar: %2.f\n", descuentot);
            }else if (precio > 80 && precio <=120){
                descuento=precio*0.1;
                descuentot=precio-descuento;
                printf("Tiene un descuento del 10 pociento\n");
                printf("Debe pagar: %2.f\n", descuentot);
            }else{
                descuento=precio*0.15;
                descuentot=precio-descuento;
                printf("Tiene un descuento del 15 pociento\n");
                printf("Debe pagar: %2.f\n", descuentot);
            }
            break;
            case 2:
            printf("Estadisticas:\n");
            printf("Se han vendido: %d boletos\n", asientos);
            printf("Se ha recaudado %2.f dolares\n", precio);
            break;
            case 3:printf("Gracias por visitarnos\n");
            break;
            default:
            printf("Esta opcion no es valida\n");
            break;
            }
           } while (opcion!=3);
        }else
        {
            printf("Usuario o contraseña incorrectos, intento %d\n", x);
        }
     } while(x < 3); 
printf("Imposible ingresar\n");
return 0;
}

