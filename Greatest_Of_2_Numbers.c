#include <stdio.h>

void main() {
int i = 0;
while (i==0){
    double num1,num2,t;
    printf("Enter 2 Numbers with a gap in between: \n");
    scanf("%lf %lf",&num1,&num2);
    if(num1>num2){t=num1;}
    else{t=num2;}
    printf("The Greatest Is: %lf\n\n",t);
}}