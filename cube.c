
#include <stdio.h>
double cube(double num);
int main()
{
 int num;
 int c;
 printf("number:");
 scanf("%d",&num);
 c=cube(num);
 printf("%d",c);
 return 0;

}
double cube (double num)
{
 return(num*num*num);
}

