#include<stdio.h>
void main()
{
    double length, breadth,radius,base,height;
    const double PI =3.14159;
    printf("enter rectangle length and breadth:");
    scanf("%lf %lf",&length, &breadth);
    printf("rectangle area= %.2lf \n",length*breadth);
    printf("rectangular area= %.2lf\n",2*(length+breadth));
    printf("enter cricle radius:");
    scanf("%lf",&radius);
    printf("cricle area= %.2lf\n",PI*radius*radius);
    printf("cricle circumference=%.2lf\n",2*PI*radius);
    printf("enter triangle base and height:");
    scanf("%2lf %2lf",&base,&height);
    printf("traingle area= %.2lf\n",0.5*base*height);
    
}