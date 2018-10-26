#include <stdio.h>
#include <math.h>

int main (void)
{
    double a=0.1,b=0.8,s=0.0,s1=0.0,y , x=b;
    int n=10,j=1;
    for (; x>=a; x-=((b-a)/10))
    {
     printf( "X= %lf   ",x);

    for (int i=1; i<=n; i++)
        s+=pow(x,2*i)/(2*i*(2*i-1));
    printf( "SN= %lf   ",s);

   do { y=pow(x,2*j)/(2*j*(2*j-1));
        s1+=y;j++;}
   while (y>0.0001 || y<-0.0001);
    printf( "SE= %lf   ",s1);

    printf( "Y= %f  \n",x*atan(x)-log(sqrt(1+pow(x,2))));
    s=0;s1=0;j=1;


    }
}