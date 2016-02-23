//Mark Yost
//email:yost22@gwu.edu
//Lab 5 Homework
//This program is a calculator that can handle basic arithmetic operations
#include <stdio.h>
#define avg_start 0

int addition()
{
    int a;
    int b;
    printf("Please enter a number.\n");
    scanf("%d", &a);
    printf("Please enter another number.\n");
    scanf("%d", &b);
    int sum;
    sum=a+b;
    return sum;
}

int difference()
{
    int a;
    int b;
    printf("Please enter a number.\n");
    scanf("%d", &a);
    printf("Please enter another number.\n");
    scanf("%d", &b);
    int dif;
    dif=a-b;
    return dif;
}

int product()
{
    int a;
    int b;
    printf("Please enter a number.\n");
    scanf("%d", &a);
    printf("Please enter another number.\n");
    scanf("%d", &b);
    int prod=a*b;
    return prod;
}

float division()
{
    float a,b;
    printf("Enter two values to be divided. \n");
    scanf("%f", &a);
    scanf("%f", &b);
    float quotient=a/b;
    while(b==0)
    {
        printf("Fatal error! Cannot divide by 0. Please re-enter a value for b.");
        scanf("%f", &b);
    }
    return quotient;
}

float percentages()
{
    float a;
    float b;
    printf("Enter two values to be used. \n");
    scanf("%f", &a);
    scanf("%f", &b);
    while(b==0)
    {
        printf("Error! Invalid entry for b, please re-enter: \n");
        scanf("%f", &b);
    }
    float percent=(a/b)*100;
    return percent;
}

int get_selection()
{
    int choice;
    printf("Select an arithmetic operation, or press 0 to skip.\n");
    printf("    1. Addition\n");
    printf("    2. Subtraction\n");
    printf("    3. Multiplication\n");
    printf("    4. Division\n");
    printf("    5. Percentages \n");
    printf("    6. Average of all numbers in a range. \n");
    scanf("%d", &choice);

    return choice;
}

float averages()
{
    float a;
    float b;
    printf("Enter two numbers to serve as endpoints for a range. \n");
    scanf("%f", &a);
    scanf("%f", &b);
    float avg;
    if(a<b)
            {
                int range;
                int rangenum=b-a;
                float summation=avg_start;
                    for(range=a; range<=b; range++)
                    {
                        summation=summation+range;
                    }
                    avg=(summation/(rangenum+1));
             }
                else if(a>b)
                {
                    int range2;
                    int range2num=a-b;
                    float summation2=avg_start;
                    for(range2=b; range2<=a; range2++)
                    {
                        summation2=summation2+range2;
                    }
                    avg=((summation2)/(range2num+1));
                }
                return avg;
}
int main(void)
{
    int y=1;
    while(y==1) //This loop keeps going until the user stops it.
    {
    int choice=get_selection(choice);
    switch(choice) //The switch is based off of the value entered for "choice"
    {
    case 0:
        {
            break;
        }
    case 1:
        {
            int sum=addition(sum);
            printf("Sum = %d \n", sum);
            break;
        }
    case 2:
        {
            int dif=difference(dif);
            printf("Difference = %d \n", dif);
            break;
        }
    case 3:
        {
            int prod=product(prod);
            printf("Product = %d \n", prod);
            break;
        }
    case 4:
        {
            float quotient=division(quotient);
            printf("Quotient = %f \n", quotient);
            break;
        }
    case 5:
        {
            float percent=percentages(percent);
            printf("a is %f percent of b. \n", percent);
            break;
        }
    case 6:
        {
            float avg=averages(avg);
            printf("Average = %f", avg);
            break;
        }
    }
    char arr;
    printf("Would you like to continue? \n");
    printf("    1. y=yes \n");
    printf("    2. q=quit \n");
    scanf("%c", &arr);
    scanf("%c", &arr); //I need 2 scanf statements or the program will skip the user input step entirely.
    if(arr=='q')
    {
        y=0; //This stops the while loop
    }
    }

    printf("Thanks for using the program! \n");
    return 0;
}

