/*6. Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).*/

//a.out = calculo
//sqrt = raíz quadrada do math.h (Square root) ;D
//pow = potência do math.h (Power) ;D
//
//gcc -o calculo bhaskara.c -lm
//./calculo

#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, discriminante, x1, x2;

    printf("Digite os coeficientes a, b e c (separados por espaço): ");
    scanf("%f %f %f", &a, &b, &c);

    
    discriminante = b * b - 4 * a * c;

    if (discriminante >= 0) {
        x1 = (-b + sqrt(discriminante)) / (2 * a);
        x2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("As raízes reais são %.2f e %.2f\n", x1, x2);
    } else {
        printf("Não existem raízes reais para esta equação.\n");
    }

    return 0;
}