#include<stdio.h>
void squre(int x);
void main()

{int x,y;
    printf("Enter num for squre:");
scanf("%d",&x);
    squre(x);
    return 0;
}
void squre(int x)
{
int y;

y=(x*x);
printf("squre %d",y);

}
