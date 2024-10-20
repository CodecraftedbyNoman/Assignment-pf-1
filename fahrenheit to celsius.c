#include <stdio.h>

int main(){

    int fr;

printf("Enter Fahrenheit value to convert into celcius   ");

scanf("%d",&fr);


float cel=(fr - 32) * 5.0 /9.0;


printf("Value of celcius is %.2f \n",cel);

return 0;

}