#include<stdio.h>
int main(){
    int length, breadth;
    printf("what is the length of rectangle\n");
    scanf("%d",&length);
    printf("what is the breadth of rectangle\n");
    scanf("%d",&breadth);
    int area=length*breadth;
    printf("area of rectangle is %d", area);
    return 0;
}