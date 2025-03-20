#include<stdio.h>
#include<stdlib.h>
struct Rectangle{
int length;
int breadth;
};
int main()
{
   struct Rectangle * p = (struct Rectangle*)malloc(sizeof(struct Rectangle));
   p->length=15;
   p->breadth=10;
   printf("%d",p->length);
   printf("\n%d",p->breadth);

return 0;

}