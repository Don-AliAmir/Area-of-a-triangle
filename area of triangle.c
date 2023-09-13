#include<stdio.h>
int main()
{
    int b, h;
    float area;
    printf("enter base ");
    scanf("%i", &b);
    printf("enter height ");
    scanf("%i", &h);
    area=0.5*b*h;
    printf("A= %.2f cm^3 \n", area);
    return 0;

}
