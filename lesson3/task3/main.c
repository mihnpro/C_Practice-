#include <stdio.h>
#include "ship.h"

int main(){
    float speed, time;
    printf("Enter a speed of your ship ");
    scanf("%f", &speed);
    // printf("\n");
    printf("Enter time pls ");
    scanf("%f", &time);
    // printf("\n");
    printf("Result %f\n\n", calculate_distance(speed, time));


    int fuel_level, max;
    printf("Enter a fuel_level of your ship ");
    scanf("%d", &fuel_level);
    // printf("\n");
    printf("Enter max fuel_level of your ship pls ");
    scanf("%d", &max);
    // printf("\n");
    float res = check_fuel(fuel_level, max);
    if (res < 10){
        printf("Time to refuel");
    }else{
        printf("Everething is fine");
    }
    return 0;

}