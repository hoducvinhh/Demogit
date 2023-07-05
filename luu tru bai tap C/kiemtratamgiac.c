/*
#include<stdio.h>
#include <math.h>

int main()
{
   int a , b , c ;
   float cv , dt ;
   scanf ("%d%d%d",&a,&b,&c);
   cv = a+b+c;
   dt = sqrt( (cv/2 )*( cv/2 -a )* (cv/2 -b) *(cv/2 -c));
   if ( a > b+c || b > c+a || c > a+b)
    printf("khong hinh thanh tam giac");
   else
   printf("la tam giac");
   printf(" chu vi , dien tich lan luot la %.f , %.f" , cv,dt);
}
*/

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    bool laTamGiac = false;

    if(a < b+c && b < c+a && c < a+b)
    {
        laTamGiac=true;
    }
    else
    {
        laTamGiac=false;
    }

    if(laTamGiac==false)
    {
        printf("KHONG TON TAI TAM GIAC");
    }

    if(laTamGiac==true)
    {
        if(a==b&&b==c)
        {
            printf("(%f %f %f) la tam giac deu",a,b,c);
        }
        else if(a==b || b==c || c==a)
        {
            printf("(%f %f %f) la tam giac can",a,b,c);
        }
        else if((b*b+c*c==a*a)|| (a*a+b*b==c*c)||(a*a+c*c==b*b))
        {
            printf("(%lf %lf %lf) la tam giac vuong",a,b,c);
        }
    }

}



























