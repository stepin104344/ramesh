#include <stdio.h>
#include <math.h>
//#include<conio.h>
#include "calc.h"
#define PI 3.14159265

 int main(void)
  {
  int n;
    float x,y,answer;
   printf("What do you want to do?\n");
  printf("1.sin 2.cos 3. tan 4. sinh 5.cosh 6.tanh 7.1og10 8. square root.9.exponent   10.power.");
    scanf ("%d",&n);
    if (n<9 && n>0)
    {
    printf("\n What is x? ");
    scanf("%f",&x);
    switch (n)
    {
        case 1: answer = sine(x);       break;
        case 2: answer = cosine(x);     break;
        case 3: answer = tangent(x);    break;
        case 4: answer = sineh(x);      break;
        case 5: answer = cosineh(x);    break;
        case 6: answer = tangenth(x);   break;
        case 7: answer = logten(x);     break;
        case 8: answer = squareroot(x); break;
        case 9: answer = exponent(x);   break;
    }
}
if (n==10)
{
    printf("What is x and y?\n");
    scanf("%f%f",&x,&y);
    answer = power(x,y);
}
if (n>0 && n<11)
    printf("%f",answer);
else
    printf("Wrong input.\n");
    getch();
return 0;
}
