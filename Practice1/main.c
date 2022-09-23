#include <stdio.h>

/* Ejercicio 1

void main() {
    int a, b = 0;
    a = b * b + 1;
    printf("Si b=%d, entonces a=%d\n", b, a);
    b = 2;
    a = b * b + 1;
    printf("Si b=%d, entonces a=%d\n", b, a);
    b = -2;
    a = b * b + 1;
    printf("Si b=%d, entonces a=%d\n", b, a);
}
 */


int main(void) {
    /* Declaración de variables. */
    int num1, num2;
    /* Elimina los comentarios y sustituye los
    interrogantes por el tipo de datos correspondiente. */
    int sum;
    int res;
    int prod;
    int div_e;

    /* Cuerpo de programa */
    printf("------------------------------------------\n");
    printf("Bienvenido/a a \"Calculadora v1.0\" by Fares.\n");
    printf("------------------------------------------\n");
    printf("\n");
    printf("Introduce Primer operando:");
    scanf("%d", &num1);
    printf("\nIntroduce Segundo operando:");
    scanf("%d", &num2);

    // Añade un salto de linea más.
    printf("\n...calculando resultados...\n");

    // Calcula suma (éste te lo damos hecho)
    sum = num1 + num2;
    // Calcula resta (no te olvides de sustituir los interrogantes...)
    res = num1 - num2;
    // Calcula producto (completa el código)
    prod = num1 * num2;
    // Calcula división entera
    div_e = num1 / num2;

    //División real
    float div_real = (float) num1 / num2;

    //Módulo
    int modulo = num1 % num2;

    //Media
    float media = (num1 + num2) / 2;

    //Truncar un numero real a entero
    int trunc = (int) media;

    //Obtener la mitad de la suma del primero más el doble del segundo
    float mitad_suma = ((float) num1 + (num2 * 2)) / 2;

    //Muestra los resultados
    printf("\nSuma:  %d", sum);
    printf("\nResta:  %d  ", res);
    printf("\nProducto:  %d  ", prod);
    printf("\nCociente:  %d  ", div_e);
    printf("\nCociente real:  %.2f  ", div_real);
    printf("\nModulo:  %d  ", modulo);
    printf("\nPorcentaje:  %d %%  ", num1);
    printf("\nMedia de los numeros:  %.2f  ", media);
    printf("\nMedia Truncad:  %d  ", trunc);
    printf("\nMitad suma:  %.2f  ", mitad_suma);

    printf("\n\nBye\n");
    return 0;
}

