#include <stdio.h>
void swap(int *x,int *y)
{
    int temp=*x;
*x=*y;
*y=temp;
}
int main()
{
    int x=34;
    int y=61;
    printf("values before swap:x=%d,y=%d\n",x,y);
    swap(&x,&y);
printf("values after swap:x=%d,y=%d\n",x,y);
}