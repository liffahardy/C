#include <stdio.h>

int main(){

    // Format specifier = Special tokens that begin with a % symbol,
    //                    followed by a character that specifies the data type
    //                    and optional modifiers (width, precision, flags).
    //                    They control how data is displayed or interpreted.

    int age = 25;
    float price = 19.99;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "Liffah Ardy";

    printf("%d\n", age);
    printf("%f\n", price);
    printf("%lf\n", pi);
    printf("%c\n", currency);
    printf("%s\n", name);

    // width

    int num1 = 1;
    int num2 = 10;
    int num3 = -100;

    printf("%+d\n", num1);
    printf("%+d\n", num2);
    printf("%+d\n", num3);


    // precision

    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    printf("%.1f\n", price1);
    printf("%.1f\n", price2);
    printf("%.1f\n", price3);

    // width precision flags 

    float price4 = 19.99;
    float price5 = 1.50;
    float price6 = -100.00;

    printf("%+7.1f\n", price1);
    printf("%+7.1f\n", price2);
    printf("%+7.1f\n", price3);

    return 0;
}