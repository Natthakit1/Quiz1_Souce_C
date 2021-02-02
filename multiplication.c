/* ณัฐกิตติ์, Multiplication */

#include<stdio.h>

void main(){

    system("cls");

    int num1, num2, i, choose_option ,c, n, fact = 1;
    float base;
    float height;
 

    do{
        printf("Choose Your Option\n");
        printf("1. Multiplication\n2. Calculate Triangular area\n3. Calculate factorial\n4. Exit\n");
        scanf("%d",&choose_option);

        if(choose_option == 4)
                break;
        
        switch (choose_option)
        {
        case 1:
            printf("\nInput num1:");
            scanf("%d",&num1);
            for(i=1;i<13;i++)
                printf("%d x %d = %d\n",num1,i,i*num1);
            break;
        case 2:   
            printf("\nInput value of base : ");
            scanf("%f", &base);
            printf("Input value of height : ");
            scanf("%f", &height);
            printf("\nArea of a Triangle is %.2f \n\n", 0.5 * base * height);
                return 0;
            break;
        case 3:
            printf("Enter a number to calculate it's factorial\n");
            scanf("%d", &n);
            for (c = 1; c <= n; c++)
            fact = fact * c;
            printf("Factorial of %d = %d\n", n, fact);
            break;
        case 4:
            break;
        
        default:
            printf("Invalid Choose Option\n");
            break;
        }

    }while(choose_option != 4);
    

}