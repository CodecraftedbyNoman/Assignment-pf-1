#include <stdio.h>

int main(){

    int celcius;

printf("Enter Celcius value to convert into Fahrenheit : ");

scanf("%d",&celcius);

float fr=(celcius*9.0/5.0 ) + 32;

printf("Value of fahrenheit is %.2f \n",fr);

return 0;   

}