#include "stdio.h"

void calculator() {
    int cal_mode;
    printf("press \n 1 for addition \n 2 for substraction \n 3 for multiplication \n 4 for  division \n");
    scanf("%d",&cal_mode);

    switch (cal_mode)
    {
         case 1:
         {
             printf("enter two numbers \n");
             int num1,num2,sum;
             scanf("%d",&num1);
             scanf("%d",&num2);
             sum=num1+num2;
             printf(" sum of %d +%d = %d \n",num1 , num2, sum);
 
            break;
         }
        case 2:
        {
             printf("enter two numbers \n");
             int num1,num2,diff;
             scanf("%d",&num1);
             scanf("%d",&num2);
             diff=num1-num2;
             printf(" difference  of %d - %d = %d \n",num1 , num2, diff);
 
            break; 
        }
        case 3:
        {
             printf("enter two numbers \n");
             int num1,num2,mul;
             scanf("%d",&num1);
             scanf("%d",&num2);
             mul=num1*num2;
             printf(" product  of %d * %d = %d \n",num1 , num2, mul);
 
            break; 
        }
         default:
         break;
    }

    
}


int main (){
    int type;
    printf("press \n 1 for Calculator \n 2 for trigonometry \n 3 for currency conversion \n 4 for unit conversion \n");
    scanf("%d",&type);

    switch (type)
    {
        case 1:
            // calcultoe code
             printf("code for calculator \n");
             calculator();
             break;

        case 2:     
             // triginimetry code
             printf("code for trignometry \n");
             break;

        case 3:
             // currency code
             printf("code for currnecy \n");
             break;
    
        case 4:
             // unit conersion
             printf("code for unit conversion \n");
             break;
   
        default:
             printf("not selected \n");
    }
 return 0;

}