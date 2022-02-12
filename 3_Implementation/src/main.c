#include<stdio.h>
#include"cal.h"

extern int test();

int main ()
{
     test();
    int type;
    printf("**********  Functions in Scientific Calculator  ********** \n");
    printf("press \n 1 for Calculator \n 2 for Memory conversion \n 3 for Currency Conversion \n 4 for Unit Conversion \n");
    scanf("%d",&type);
    switch (type)
    {
        case 1:
          {
               printf("**********  Functions in Calculator  ********** \n");
                int cal_mode;
                printf("press \n 1 for Addition \n 2 for Substraction \n 3 for Multiplication \n 4 for Division \n 5 for Square \n ");
                scanf("%d",&cal_mode);

                switch (cal_mode)
                {
                     case 1:
                     {
                         printf("Enter two numbers \n");
                         float num1,num2,sum;
                         scanf("%f",&num1);
                         scanf("%f",&num2);
                         sum=add(num1,num2); // add function is called
                         printf(" Sum of %f +%f = %f \n",num1 , num2, sum);
                         break;
                     }
                     case 2:
                     {
                         printf("Enter two numbers \n");
                         float num1,num2,diff;
                         scanf("%f",&num1);
                         scanf("%f",&num2);
                         diff=sub(num1,num2); // sub function is called
                         printf(" Difference  of %f - %f = %f \n",num1 , num2, diff);
                         break; 
                     }
                     case 3:
                     {
                         printf("Enter two numbers \n");
                         float num1,num2,mul;
                         scanf("%f",&num1);
                         scanf("%f",&num2);
                         mul=product(num1,num2); // product function is called
                         printf(" Product  of %f * %f = %f \n",num1 , num2, mul);
                         break; 
                     }
                     case 4:
                     {
                         printf("Enter two numbers \n");
                         float num1,num2,quo;
                         scanf("%f",&num1);
                         scanf("%f",&num2);
                         if(num2==0)
                         {
                              printf("Division by zero is undefined \n"); 
                              break;
                         }
                         quo=div(num1,num2); // div function is called
                         printf(" Quotient  of %f / %f = %f \n",num1 , num2, quo);
                         break; 
                     }
                    case 5: 
                     {
                         printf("Enter number \n");
                         float num1,sq;
                         scanf("%f",&num1);
                         sq=sqr(num1); // sqr function is called
                         printf(" Square of %f  = %f \n",num1 ,sq);
                         break; 
                     }

                    default:
                    {
                      printf("The number you entered is out of the list \n");
                    }
                }
          
             break;
          }  
        case 2:
        
          {
               printf("**********  Functions in Memory Conversion  ********** \n");
                int tri;
                printf("Press \n 1 for Kilobytes to Megabytes \n 2 for Megabytes to Kilobytes \n 3 for Megabytes to Gigabytes \n 4 for Gigabytes to Megabytes \n");
                scanf("%d",&tri);

                    switch (tri)
                    {
                         case 1:
                         {
                              float kb,mb;
                              printf("Enter Kilobytes ");
                              scanf("%f",&kb);
                              mb=k_m(kb); // k_m function is called
                              printf("%f Kilobytes = %f Megabytes \n",kb,mb);
                              break;
                         }
                         case 2:
                         {
                              float mb,kb;
                              printf("Enter Megabytes ");
                              scanf("%f",&mb);
                              kb=m_k(mb); // m_k function is called
                              printf("%f Megabytes = %f Kilobytes \n",mb,kb);
                              break;
                         }
                         case 3:
                         {
                              float mb,gb;
                              printf("Enter Megabytes ");
                              scanf("%f",&mb);
                              gb=m_g(mb); // m_g function is called
                              printf("%f Megabytes = %f Gigabytes \n",mb,gb);
                              break;
                         }
                         case 4:
                         {
                              float gb,mb;
                              printf("Enter Gigabytes ");
                              scanf("%f",&gb);
                              mb=g_m(gb); // g_m function is called
                              printf("%f Gigabytes = %f Megabytes \n",gb,mb);
                              break;
                         }
                         
                    default:
                         {             
                         printf("The number you entered is out of the list \n");
                         }
                    
                    }
           break;
          
          }  
                    
                    
        case 3:
          {
               printf("**********  Functions in Currency Conversion  ********** \n");
                int a;
                printf("Press\n 1 for Rupees to Dollar\n 2 for Dollar to Rupees \n");
                printf(" 3 for Rupees to Euro \n 4 for Euro to Rupees \n");
                scanf("%d",&a);

                    switch(a)
                    {
                         case 1:
                         {
                              float rupe, dolr;
                              printf("Enter rupess \n");
                              scanf("%f",&rupe);
                              dolr=r_d(rupe); // r_d function is called
                              printf(" %f Rupees  = %f Dollars \n",rupe,dolr);
                              break;
                         }
                         
                         case 2:
                         {
                              float dolr, rupe;
                              printf("Enter Dollars \n");
                              scanf("%f",&dolr);
                              rupe=d_r(dolr); // d_r function is called
                              printf(" %f Dollars  = %f Rupees \n",dolr,rupe);
                              break;
                         }
                         case 3:
                         {
                              float rupe, euro;
                              printf("Enter Rupess \n");
                              scanf("%f",&rupe);
                              euro=r_e(rupe); // r_e function is called
                              printf(" %f Rupees  = %f Euro \n",rupe,euro);
                              break;
                         }
                         
                         case 4:
                         {
                              float euro, rupe;
                              printf("Enter Euro \n");
                              scanf("%f",&euro);
                              rupe=e_r(euro); // e_r function is called
                              printf(" %f Euro  = %f Rupees \n",euro,rupe);
                              break;
                         }
                    default:
                         {             
                         printf("The number you entered is out of the list \n");
                         }
                         
                    }

           break;     
           }  
        case 4:

          {
               printf("**********  Functions in Unit Conversion  ********** \n");
                int a;
                printf("Press \n 1 for Centimeters to Meters \n");
                printf(" 2 for Meters to Cenitimeters \n 3 for Meters to Kilometers \n 4 for Kilometers to Meters \n ");
                scanf("%d",&a);

                    switch(a)
                    {
                         case 1:
                         {
                              float cm,m;
                              printf("Enter Centimeters \n");
                              scanf("%f",&cm);
                              m=cm_m(cm); // cm_m function is called
                              printf("%f Centimeters = %f Meters \n",cm,m);
                              break;
                         }
                         case 2:
                         {
                              float m,cm;
                              printf("Enter Meters \n");
                              scanf("%f",&m);
                              cm=m_cm(m); // m_cm function is called
                              printf("%f Meters = %f Centimeters \n",m,cm);
                              break;
                         }
                         case 3:
                         {
                              float m,km;
                              printf("Enter Meters \n");
                              scanf("%f",&m);
                              km=m_km(m); // m_km function is called
                              printf("%f Meters = %f Kilometers \n",m,km);                        
                              break;
                         }
                         case 4:
                         {
                              float km, m;
                              printf("Enter Kiloeters \n");
                              scanf("%f",&km);
                              m=km_m(km); // km_m function is called
                              printf("%f Kiloeters = %f Meters \n",km,m);
                              break;
                         }
                    default:
                         {             
                         printf("The number you entered is out of the list \n");
                         }
                         break;   
               }
          } 
          break;

      default:
          {             
          printf("The number you entered is out of the list \n");
          }     
    }
 return 0;
}