#include <stdio.h>
#include <stdlib.h>

void *hexadecimal (long dec, int i, char *hex, int digitos){
    if(dec == 0){
        hex[i] = 48;
        if(digitos ==0){
            printf("%c\n", hex[i]);
        }
    }
    else{
        hexadecimal(dec/16, i-1, hex, digitos);
        hex[i] = (dec%16)+48;
        if(hex[i] > 100){

            hex[i] = (dec%16)+48;
        }
        if(hex[i] > 9){
            if(hex[i] == 58){
                hex[i] = 'A';
            }
            else if(hex[i] == 59){
                hex[i] = 'B';
            }
            else if(hex[i] == 60){
                hex[i] = 'C';
            }
            else if(hex[i] == 61){
                hex[i] = 'D';
            }
            else if(hex[i] == 62){
                hex[i] = 'E';
            }
            else if(hex[i] == 63){
                hex[i] = 'F';
            }
        }

        if(i == digitos){
            printf("%c\n", hex[i]);
        }
        else{
            printf("%c", hex[i]);
        }
    }
}

int main (){
    long dec;
    while(scanf("%ld", &dec) != EOF){
        long t = dec;
        int j;
        int dig = 0;
        while(t){
            dig++;
            t = t/10;
        }
        char *hex = malloc(dig);
        hexadecimal(dec, dig, hex, dig);
    }
    return 0;
}