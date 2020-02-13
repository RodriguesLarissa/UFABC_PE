#include <stdio.h>
#include <math.h>

int main () {

    int coef1;
    int coef2;
    int coef3;
    int delta;
    float raiz1;
    float raiz2;

    scanf("%d", &coef1);
    scanf("%d", &coef2);
    scanf("%d", &coef3);

    delta = ((pow(coef2, 2))- (4*coef1*coef3));

    raiz1 = ((-coef2) + sqrt(delta))/(2*coef1);
    raiz2 = ((-coef2) - sqrt(delta))/(2*coef1);

    printf("%.4f %.4f\n", raiz1, raiz2);

    return 0;

}