#include <stdio.h>

struct trabajador{
    char nombre[20];
    char apellido_paterno[20];
    char apellido_materno[20];
    char curp[18];
    int edad;
    char puesto[20];
    float salario;
};

struct trabajador n1;

void main(){
    printf("Nombre: ");
    scanf("%s",n1.nombre);
    printf("Apellido_paterno: ");
    scanf("%s",n1.apellido_paterno);
    printf("Apellido_materno: ");
    scanf("%s",n1.apellido_materno);
    printf("CURP: ");
    scanf("%s",n1.curp);
    printf("Edad: ");
    scanf("%d",&n1.edad);
    printf("Puesto: ");
    scanf("%s",n1.puesto);
    printf("Salario: ");
    scanf("%f",&n1.salario);

    printf("\n %s",n1.nombre);
    printf("\n %s",n1.apellido_paterno);
    printf("\n %s",n1.apellido_materno);
    printf("\n %s",n1.curp);
    printf("\n %d",n1.edad);
    printf("\n %s",n1.puesto);
    printf("\n %f",n1.salario);
}
