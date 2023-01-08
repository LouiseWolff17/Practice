#include <stdio.h>

/**
 * Simple math in C.
 */

int main(void){
double i, j, perimeter, area;

printf("Enter height and width:\n");
scanf("%lf%lf", &i, &j);

perimeter = (i*2)+(j*2);
area = i*j;

printf("The perimeter is %lf\nThe area is %lf", perimeter, area);
}