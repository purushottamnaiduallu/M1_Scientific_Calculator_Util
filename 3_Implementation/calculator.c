#include "stdio.h"
#include"math.h"

void calculator() 
{
    int cal_mode;
    printf("press \n 1 for Addition \n 2 for Substraction \n 3 for Multiplication \n 4 for Division \n 5 for Remainder \n 6 for Square \n 7 for Squareroot \n");
    scanf("%d",&cal_mode);

    switch (cal_mode)
    {
          case 1:
         {
             printf("Enter two numbers \n");
             float num1,num2,sum;
             scanf("%f",&num1);
             scanf("%f",&num2);
             sum=num1+num2;
             printf(" Sum of %f +%f = %f \n",num1 , num2, sum);
             break;
         }
          case 2:
         {
             printf("Enter two numbers \n");
             float num1,num2,diff;
             scanf("%f",&num1);
             scanf("%f",&num2);
             diff=num1-num2;
             printf(" Difference  of %f - %f = %f \n",num1 , num2, diff);
             break; 
        }
          case 3:
        {
             printf("Enter two numbers \n");
             float num1,num2,mul;
             scanf("%f",&num1);
             scanf("%f",&num2);
             mul=num1*num2;
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
             quo=num1 / num2;
             printf(" Quotient  of %f / %f = %f \n",num1 , num2, quo);
             break; 
        }
         case 5: 
        {
             printf("Enter two numbers \n");
             int num1,num2,rem;
             scanf("%d",&num1);
             scanf("%d",&num2);
             if(num2==0)
             {
                printf("Division by zero is undefined \n"); 
                break;
             }
             rem=num1 % num2;
             printf(" Remainder  of %d %% %d = %d \n",num1 , num2, rem);
             break; 
        }
         case 6: 
        {
             printf("Enter number \n");
             int num1,sq;
             scanf("%d",&num1);
             sq=num1*num1;
             printf(" Square of %d  = %d \n",num1 ,sq);
             break; 
        }
         case 7: 
        {
             printf("Enter number \n");
             float num1,sqroot;
             scanf("%f",&num1);
             sqroot=sqrt(num1);
             printf(" Square root of %f = %f \n",num1 ,sqroot);
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
     printf("Press \n 1 for Sin \n 2 for Cos \n 3 for Tan \n ");
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
               printf("Sin(%d) = %f\n",deg,ans);
               break;
          }
          case 2:
          {
               int deg;
               float ans;
               printf("Enter degree ");
               scanf("%d",&deg);
               ans=cos(deg);
               printf("Cos(%d) = %f\n",deg,ans);
               break;
          }
          case 3:
          {
               int deg;
               float ans;
               printf("Enter degree ");
               scanf("%d",&deg);
               ans=tan(deg);
               printf("Tan(%d) = %f\n",deg,ans);
               break;
          }
              
      default:
          {             
              printf("The number you entered is out of the list \n");
          }
          break;
     }

}

void currency()
{
     int a;
     printf("Press\n 1 for Rupees to Dollar\n 2 for Dollar to Rupees \n");
     printf(" 3 for Rupees to euro \n 4 for Euro to Rupees \n");
     scanf("%d",&a);

     switch(a)
     {
          case 1:
          {
               float rupe, dolr;
               printf("Enter rupess \n");
               scanf("%f",&rupe);
               dolr=rupe/75.1015;
               printf(" %f Rupees  = %f Dollars \n",rupe,dolr);
               break;
          }
          case 2:
          {
               float dolr, rupe;
               printf("Enter Dollars \n");
               scanf("%f",&dolr);
               dolr=rupe*75.1015;
               printf(" %f Dollars  = %f Rupees \n",dolr,rupe);
               break;
          }
         case 3:
          {
               float rupe, euro;
               printf("Enter Rupess \n");
               scanf("%f",&rupe);
               euro=rupe/86.164;
               printf(" %f Rupees  = %f Euro \n",rupe,euro);
               break;
          }
         case 4:
          {
               float euro, rupe;
               printf("Enter Euro \n");
               scanf("%f",&euro);
               rupe=euro*86.164;
               printf(" %f Euro  = %f Rupees \n",euro,rupe);
               break;
          }
      default:
          {             
              printf("The number you entered is out of the list \n");
          }
          break;
     }

     
}

void unit_conversion()
{
     int a;
     printf("Press \n 1 for Centimeters to Meters and Kilometers \n");
     printf(" 2 for Meters to Cenitimeters and Kilometers \n 3 for Kilometers to Centimeters and Meters \n ");
     scanf("%d",&a);

     switch(a)
     {
          case 1:
          {
               float cm,m,km;
               printf("Enter Centimeters \n");
               scanf("%f",&cm);
               m=cm/100;
               printf("%f Centimeters = %f Meters \n",cm,m);
               km=cm/100000;
               printf("%f Centimeters = %f Kilometers \n",cm,km);
               break;
          }
          case 2:
          {
               float m,cm,km;
               printf("Enter Meters \n");
               scanf("%f",&m);
               cm=m*100;
               printf("%f Meters = %f Centimeters \n",m,cm);
               km=m/1000;
               printf("%f Meters = %f Kilometers \n",m,km);
               break;
          }
          case 3:
          {
               float km,cm,m;
               printf("Enter Kilometers \n");
               scanf("%f",&km);
               cm=km*100000;
               printf("%f Kilometers = %f Centimeters \n",km,cm);
               m=km*1000;
               printf("%f Kilometers = %f Meters \n",km,m);
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
    printf("press \n 1 for Calculator \n 2 for Trigonometry \n 3 for Currency Conversion \n 4 for Unit Conversion \n");
    scanf("%d",&type);
    switch (type)
    {
        case 1:
             printf("Functions in calculator \n");
             calculator(); // Calculator function is called 
             break;
        case 2:     
             printf("Functions in trignometry \n");
             trigonometry(); // Trigonometry function is called 
             break;
        case 3:
             printf("currnecy conversion \n");
             currency(); // Currency function is called
             break;   
        case 4:
             printf("Unit conversion \n");
             unit_conversion(); // Unit_conversion function is called
             break;   
        default:
             printf("The number you entered is out of the list \n");
    }
 return 0;
}