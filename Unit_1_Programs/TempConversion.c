/* The temperature of a city in Fahrenheit degrees is input
through the keyboard. Write a program to convert this
temperature into Centigrade degrees. */

#include <stdio.h>
int main(){
    float celcius, fahrenheit; 
    printf("Enter temperature (in fahrenheit): ");
    scanf("%f", & fahrenheit); //input temperature in fahrenheit
    celcius = ((fahrenheit - 32) * 5) / 9; //process temp in degree celcius
    printf("Celcius temperature is: %.2f", celcius); //print temp in degree celcius
    return 0; 
}