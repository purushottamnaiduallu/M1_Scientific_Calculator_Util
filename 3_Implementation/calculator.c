#include "stdio.h"
#include"math.h"

void calculator() 
{
    int cal_mode;
    printf("press \n 1 for addition \n 2 for substraction \n 3 for multiplication \n 4 for  division \n 5 for remainder \n");
    scanf("%d",&cal_mode);

    switch (cal_mode)
    {
          case 1:
         {
             printf("enter two numbers \n");
             float num1,num2,sum;
             scanf("%f",&num1);
             scanf("%f",&num2);
             sum=num1+num2;
             printf(" sum of %f +%f = %f \n",num1 , num2, sum);
 
             break;
         }

          case 2:
         {
             printf("enter two numbers \n");
             float num1,num2,diff;
             scanf("%f",&num1);
             scanf("%f",&num2);
             diff=num1-num2;
             printf(" difference  of %f - %f = %f \n",num1 , num2, diff);
 
             break; 
        }
          case 3:
        {
             printf("enter two numbers \n");
             float num1,num2,mul;
             scanf("%f",&num1);
             scanf("%f",&num2);
             mul=num1*num2;
             printf(" product  of %f * %f = %f \n",num1 , num2, mul);
 
             break; 
        }

          case 4:
        {
             printf("enter two numbers \n");
             float num1,num2,quo;
             scanf("%f",&num1);
             scanf("%f",&num2);
             if(num2==0)
             {
                printf("Division by zero is undefined \n"); 
                break;
             }
             quo=num1 / num2;
             printf(" quotient  of %f / %f = %f \n",num1 , num2, quo);
 
             break; 
        }

          case 5: 
        {
             printf("enter two numbers \n");
             int num1,num2,rem;
             scanf("%d",&num1);
             scanf("%d",&num2);
             if(num2==0)
             {
                printf("Division by zero is undefined \n"); 
                break;
             }
             rem=num1 % num2;
             printf(" remainder  of %d %% %d = %d \n",num1 , num2, rem);
 
             break; 
        }


         default:
         {
              printf("The number you entered is out of the list \n");
         }
         break;
    }

}


void trigonometry()
{
     int tri;
     printf("press \n 1 for Sin \n 2 for Cos \n 3 for Tan \n ");
     scanf("%d",&tri);

     switch (tri)
     {
          case 1:
          {
               int deg;
               float ans;
               printf("Enter degree ");
               scanf("%d",&deg);
               ans=sin(deg);
               printf("sin(%d) = %f\n",deg,ans);
               break;
          }
          case 2:
          {
               int deg;
               float ans;
               printf("Enter degree ");
               scanf("%d",&deg);
               ans=cos(deg);
               printf("cos(%d) = %f\n",deg,ans);
               break;
          }
          case 3:
          {
               int deg;
               float ans;
               printf("Enter degree ");
               scanf("%d",&deg);
               ans=tan(deg);
               printf("tan(%d) = %f\n",deg,ans);
               break;
          }
          
     
     default:
          {             
              printf("The number you entered is out of the list \n");
          }
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
            // calculcode
             printf("Functions in calculator \n");
             calculator();
             break;

        case 2:     
             // triginimetry code
             printf("Functions in trignometry \n");
             trigonometry();
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
             printf("The number you entered is out of the list \n");
    }
 return 0;

}