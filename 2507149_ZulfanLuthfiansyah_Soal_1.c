#include <stdio.h>
#include <stdlib.h>

int main () {

    //Menentukan Bilangan Positif, Negatif dan Nol
    
    int bilangan;

    printf("Masukkan Bilangan: ");
    scanf(" %d", &bilangan);

    if (bilangan > 0) {
        printf("Bilangan Positif");
    } else if (bilangan < 0) {
        printf("Bilangan Negatif");
    } else {
        printf("Bilangan Nol");
    }
   
    return 0;
}