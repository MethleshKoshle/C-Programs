#include <stdio.h>

int main(){
    int dist;
    float fuel_burned;
	
    printf("Input total distance in km: ");
    scanf("%d", &dist);
    printf("Input total fuel spent in liters: ");
    scanf("%f", &fuel_burned);

    float mileage = dist/fuel_burned;	
    printf("Average consumption (km/lt) %.3f\n", mileage);
    
    return 0;
}
