#include <stdio.h>
#include <math.h>

void radius_form(void);
void diameter_form(void);


int main(void){
int i;
printf("Circle formula for perimeter and area:\nEnter the form you want to use 1 or 2");
scanf("%d", &i);

if(i==1){radius_form();}
else {diameter_form();}

}


void radius_form(void){
    double radius, perimeter, area;
    printf("Enter radius");
    scanf("%lf", &radius);

    perimeter = 2 * 3.14 * radius;
    area = 3.14 * pow(radius,2);

    printf("The perimeter is %lf\nThe area is %lf", perimeter, area);
}


void diameter_form(void){
    double diameter, radius, perimeter, area;
    printf("Enter diameter");
    scanf("%lf", &diameter);

    radius = diameter / 2;
    perimeter = 3.14 * diameter;
    area = 3.14 * pow(radius,2);

    printf("The perimeter is %lf\nThe area is %lf", perimeter, area);
}