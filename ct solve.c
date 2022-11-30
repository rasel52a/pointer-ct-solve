#include<stdio.h>
int main()
{
  int x = 200;
  int y = 300;
  int *p1, *p2;
   p1 = &y;
   p2 = &x;
  printf("Before Exchange x=%d  y=%d", x, y);


  printf("\nAfter Exchange x=%d   y=%d", *p1,*p2);
  return 0;

}
