#include<stdio.h>
int main(){
int num1,num2,input,result;
printf("enter the value of num1 and num2");
scanf("%d%d", &num1,&num2);
printf("1=sum operation \n");
printf("2=diff operation \n");
printf("3=mul operation \n");
printf("4=div operation \n");
scanf("%d",&input);
switch(input){
    case 1: result=num1+num2;
    printf("sum of %d",result);
    break;
    case 2: result=num1-num2;
    printf("diff is %d,result");
    break;
    case 3: result=num1*num2;
    printf("mul is %d",result);
    break;
    case 4: result=num1/num2;
    printf("div is %d",result);
    break;
    default:printf("enter the valid input");
}


    return 0;
}