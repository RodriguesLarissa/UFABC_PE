#include <stdio.h>

int main () {

    int segundos;
    int horas;
    int minutos;
    int segundosRest;

    scanf("%d", &segundos);

    horas = segundos/3600;
    minutos = (segundos - (horas*3600))/60;
    segundosRest = segundos - ((horas*3600) + (minutos*60));

    printf("%d:%d:%d\n", horas, minutos, segundosRest);

    return 0;

}