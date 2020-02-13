#include <stdio.h>
#include <math.h>

int main () {

    float altura;
    float peso;
    float imc;

    scanf("%f", &altura);
    scanf("%f", &peso);

    imc = (peso/pow(altura, 2));

    if(imc < 16){
        printf("Magreza grave\n");
    }
    else if(imc>= 16 && imc<17){
        printf("Magreza moderada\n");
    }
    else if(imc>= 17 && imc<18.5){
        printf("Magreza leve\n");
    }
    else if(imc>=18.5 && imc<25){
        printf("Saudavel\n");
    }
    else if(imc>=25 && imc<30){
        printf("Sobrepeso\n");
    }
    else if(imc>=30 && imc<35){
        printf("Obesidade Grau I\n");
    }
    else if(imc>=35 && imc<40){
        printf("Obesidade Grau II (severa)\n");
    }
    else{
        printf("Obesidade Grau III (morbida)\n");
    }

}