#include <stdio.h>

void main() {
int i = 0;
while (i==0){
    double num1,num2,num3,t;
    printf("Enter 3 Numbers with a gap in between: \n");
    scanf("%lf %lf %lf",&num1,&num2,&num3);
    if(num1>num2){t=num1;}
    else{t=num2;}
    if(t>num3){}
    else{t=num3;}
    printf("The Greatest Is: %lf\n\n",t);
}}