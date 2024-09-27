//Mila Gallegos Vazquez 
//ejercicio 4 Calculadora con funciones 
//Practica 7 27/09/2024

#include <stdio.h>
#include <math.h>

int resp;

int suma(int a, int b)
{
    resp = a + b;
    return(resp);
}
int resta(int a, int b)
{
  resp= a - b;
  return(resp);
}
int mult(int a, int b)
{
  resp= a * b;
  return(resp);
}
int div(int a,int b)
{
  resp= a / b;
  return(resp);
}
int expo(int a, int b)
{
  resp=pow(a,b);
  return(resp);
}

int main()
{
  int a=0, b=0;
  int respuesta;

   printf("Dime que operacion deseas realizar: \n");
    printf("1. - Suma\n");
    printf("2 .- Resta\n");
    printf("3 .- Multiplicacion\n");
    printf("4 .- Division\n");
    scanf ("%d", &option);


switch(option)
  {
    default:
      respuesta = 0;
      break;
    case 1:
      respuesta = suma(a,b);
      break;
    case 2:
      respuesta = resta (a,b);
      break;
    case 3:
      respuesta = mult(a,b);
      break;
    case 4:
      respuesta = div(a,b);
      break;
    case 5:
      respuesta = expo(a,b);
      break;
  }

    printf("El resultado de la operacion es: %d\n", respuesta);
    return 0;    
}

