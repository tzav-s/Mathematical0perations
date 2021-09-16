#include <stdio.h>
#include "simpio.h"
#include <math.h>
int add(int x,int y);
int sub(int x,int y);
int mult(int x,int y);
int divd(int x,int y);

int main()
{
    int x,y;



    printf("dose ton prwto arithmo:");
    x=GetInteger();
    printf("dose ton deutero arithmo:");
    y=GetInteger();

    printf("%d \n%d \n%d \n%d \n%d \n%d ",add(x,y),sub(x,y),mult(x,y),divd(x,y),mult(add(x,y),sub(y,divd(x,y))),divd(sub(mult(x,y),x),add(x,y)));

}
int add(int x, int y)
{
    int sum;
    sum=x+y;
    return sum;
}
int sub(int x,int y)
{
    int sub;
    sub=x-y;
    return sub;
}
int mult(int x,int y)
{
    int mult;
    mult=x*y;
    return mult;
}
int divd(int x,int y)
{
    int divd;
    divd=x/y;
    return divd;
}
