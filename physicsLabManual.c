#include<stdio.h> 

void main(){
    

    float t, g, l;
    printf("Enter the Time Period :");
    scanf("%f", &t);
    
    printf("Enter g :");
    scanf("%f", &g);
    
    l = (g * t * t) / 39.4; 

    printf("Length : %f", l);
}