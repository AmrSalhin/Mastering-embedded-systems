/*
 * main.c
 *
 *  Created on: May 21, 2022
 *      Author: Amr Salhen
 */
#include <stdio.h>

void main ()
{float x,z,result;
char y;
printf("Enter operator either + or - or * or / ");
scanf("%c",&y);
printf("Enter tow numbers : ");
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
