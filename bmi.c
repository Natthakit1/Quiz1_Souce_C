/* ณัฐกิตติ์, Bmi */

#include<stdio.h>
main()
{
float h,w,bmi,high;
printf("Find BMI\n");
printf("Please enter High(cm) : ");
scanf("%f",&h);
printf("Plesae enter Weight(kg) : ");
scanf("%f",&w);
high=h/100;
bmi=w/(high*high);
printf("BMI score is : %.2f\n\n",bmi);
if(bmi>=30)
{
printf("You are Fat");
}
else if(bmi>=25)
{
printf("You are Overload");
}
else if(bmi>=20)
{
printf("You are Good");
}
else if(bmi<20)
{
printf("You are lowoverload");
}
else
{
printf("Error Please any key to exit program...");
}

getch();
}