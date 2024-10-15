#include <stdio.h>

int main(void) {
    float area, raggio /*= 1*/, circoferenza;
    /*while (raggio<=20) {
        circoferenza= (2*3.14)*raggio;
        printf("la circonferenza e': %.2f || ", circoferenza);
        area = raggio*raggio*(3.14);
        printf("l'area del cerchio e': %.2f \n", area);

        raggio++;
    }*/
    for(raggio=1;raggio<=20;raggio++) {
        circoferenza= (2*3.14)*raggio;
        printf("la circonferenza e': %.2f || ", circoferenza);
        area = raggio*raggio*(3.14);
        printf("l'area del cerchio e': %.2f \n", area);
    }
}

