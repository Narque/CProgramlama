#include <stdio.h>

int main(){

    int number;

    printf("Enter a number:");
    scanf("%d",&number);

    if(number % 10 == 0){
        printf("%d can divide to 10",number);
    }
    else{
        printf("%d cannot divide to 10",number);
    }

// Sacma cinsiyet programý .d

    char gender;

    printf("\nPlease enter your gender ex:F/M:");
    scanf(" %c",&gender);

    if(gender == 'M' || gender == 'm'){
        printf("You are Male");
    }
    else if(gender == 'F' ||gender == 'f'){
        printf("You are Famale");
    }
    else{
        printf("Undefined...");
    }


// VEYA yani || kullanmamizin sebebi M m harflerinin ikisinden biri yazildiginda
// gecerli olmasi icin.

// || alt + < tusuna basiyorsun z nin yanindaki bu
// VEYA kapisi oluyor mantiktakinin aynisi
// 1 veya 1 = 1 , 1 veya 0 = 1 , 0 veya 1 = 1, 0 veya 0 =

// && ise VE kapýsý oluyor yani 0 yutan eleman.
// 1 ve 1 = 1, 1 ve 0 = 0, 0 ve 1 = 0, 0 ve 0 = 0

// Milli okul boy zorunluluk uygulamasi.

char gender2;
float height;

    printf("\nPlease enter your gender ex:F/M:");
    scanf(" %c",&gender2);
    printf("Please enter your height ex:154 :");
    scanf("%f",&height);

    if((gender2 == 'M' || gender2 == 'm') && height > 160){
        printf("Conguratulations, You won the audition.");
    }
    else if((gender2 == 'F' || gender2 == 'f') && height > 150){
        printf("Conguratulations, You won the audition.");
    }
    else{
        printf("Sorry, Unfortunately you are eleminated.");
    }










return 0;
}
