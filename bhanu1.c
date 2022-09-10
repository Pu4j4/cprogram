#include <stdio.h>
void swap(int x,int y);
int main()
{
    int a=10;
    int b=20;
    printf("before swapping:%d\n",a);
    printf("before swapping:%d\n",b);
    swap(a,b);
    printf("after swapping:%d\n",a); 
    printf("after swapping:%d\n",b); 
    return 0;
}
void swap(int x,int y)
 {
    int temp;
    temp=x;
    x=y;
    y=temp;
    return;
}