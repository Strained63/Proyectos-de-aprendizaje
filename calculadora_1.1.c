#include <stdio.h>
#include <windows.h>

void space_between_sentences()
{
    printf("---------------------------------------------");
  printf("\n");
}

int main()
{
  int return_task= 1;
  char comparate_value;
  char positive='n';
  char plus='+';
  char subtraction='-';
  char times='*';
  char divide='/';
  char operator;
  float value_one;
  float value_two;
    while (return_task=1)
    {
        if (comparate_value==positive)//el bucle no termina, logre compensarlo pero no solucionarlo
        {
          break;
        }
        printf("Introduce valor uno:");scanf("%f", &value_one);space_between_sentences();
        printf("Introduce valor dos:");scanf("%f", &value_two);space_between_sentences();
        printf("Operaodor (+|-|*|/):");scanf("%c", &operator);
        scanf("%c", &operator);space_between_sentences();//solucion a porblemas de entrada de usuario
      float plus_result=value_one+value_two;
      float subtraction_result=value_one-value_two;
      float times_result=value_one*value_two;
      float divide_result=value_one/value_two;
        if (operator==plus)
        {
          printf("Resultado: %f\n", plus_result);
        }
        else if (operator==subtraction)
        {
          printf("Resultado: %f\n", subtraction_result);
        }
        else if (operator==times)
        {
          printf("Resultado: %f\n", times_result);
        }
        else if (operator==divide)
        {
          printf("Resultado: %f\n", divide_result);
        }
        else
        {
          printf("ERROR DE OPERADOR/FALLO EN BUCLE\n");
        }
        space_between_sentences();
        printf("¿Desea volver a ejecutar el programa?(y/n):");scanf("%c", &comparate_value);
        scanf("%c", &comparate_value);//solucion respecto a que el bucle no permita ser detenido
        if (comparate_value!=positive)
        {
          space_between_sentences();
        }
        
    }
return 0;
}