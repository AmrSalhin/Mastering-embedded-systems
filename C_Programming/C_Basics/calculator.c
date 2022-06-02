/*************************************************************************/
/*************************************************************************/
/*************************************************************************/
/*************         Amr Ahmed Mostafa Salhien          ****************/
/*************                 21/may/2022                ****************/
/*************************************************************************/
/*************************************************************************/
/*************************************************************************/
#include <stdio.h>

void main ()
{float x,z,result;
char y;
printf("Enter operator either + or - or * or / ");
fflush(stdout);
scanf("%c",&y);
printf("Enter two numbers : ");
fflush(stdout);
scanf("%f %f",&x,&z);

switch(y){
case '+':{result=x+z;
printf("Result = %f",result);
break;}
case '-':{result=x-z;
printf("Result = %f",result);
break;}
case '*':{result=x*z;
printf("Result = %f",result);
break;}
case '/':{result=x/z;
printf("Result = %f",result);
break;}
default: printf("wrong operator");break;
}

}
