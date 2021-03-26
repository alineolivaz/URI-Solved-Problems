#include <stdio.h>

int main() {

    int num;

    scanf("%d", &num);

    while(num != 0){

        if(num == 1000){
            num %= 1000;
            printf("M");
        }
        else if(num >= 100){
            if(num >= 900){
                printf("CM");
                num %= 900;
            }
            if(num >= 800){
                printf("DCCC");
                num %= 800;
            }
            if(num >= 700){
                printf("DCC");
                num %= 700;
            }
            if(num >= 600){
                printf("DC");
                num %= 600;
            }
            if(num >= 500){
                printf("D");
                num %= 500;
            }
            if(num >= 400){
                printf("CD");
                num %= 400;
            }
            if(num >= 300){
                printf("CCC");
                num %= 300;
            }
            if(num >= 200){
                printf("CC");
                num %= 200;
            }
            if(num >= 100){
                printf("C");
                num %= 100;
            }
        }
        else if(num >= 10){
            if(num >= 90){
                printf("XC");
                num %= 90;
            }
            if(num >= 80){
                printf("LXXX");
                num %= 80;
            }
            if(num >= 70){
                printf("LXX");
                num %= 70;
            }
            if(num >= 60){
                printf("LX");
                num %= 60;
            }
            if(num >= 50){
                printf("L");
                num %= 50;
            }
            if(num >= 40){
                printf("XL");
                num %= 40;
            }
            if(num >= 30){
                printf("XXX");
                num %= 30;
            }
            if(num >= 20){
                printf("XX");
                num %= 20;
            }
            if(num >= 10){
                printf("X");
                num %= 10;
            }
        }
        else if(num >= 1){
            if(num >= 9){
                printf("IX");
                num %= 9;
            }
            if(num >= 8){
                printf("VIII");
                num %= 8;
            }
            if(num >= 7){
                printf("VII");
                num %= 7;
            }
            if(num >= 6){
                printf("VI");
                num %= 6;
            }
            if(num >= 5){
                printf("V");
                num %= 5;
            }
            if(num >= 4){
                printf("IV");
                num %= 4;
            }
            if(num >= 3){
                printf("III");
                num %= 3;
            }
            if(num >= 2){
                printf("II");
                num %= 2;
            }
            if(num >= 1){
                printf("I");
                num %= 1;
            }
        }
    }
    printf("\n");

    return 0;
}
