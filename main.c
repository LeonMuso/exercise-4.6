#include <stdio.h>

int main(void) {
        float area, raggio, circoferenza;
        raggio = 1;
        while (raggio<=20) {
            circoferenza= (2*3.14)*raggio;
            printf("la circonferenza e': %.2f || ", circoferenza);
            area = raggio*raggio*(3.14);
            printf("l'area del cerchio e': %.2f \n", area);

            raggio++;
        }

    }

