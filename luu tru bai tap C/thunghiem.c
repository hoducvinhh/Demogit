#include<stdio.h>
#include <math.h>


void kiem(int a, int b, int c);


int main()
{
    int a, b, c ;

    scanf ("%d%d%d",&a,&b,&c);
    kiem(a,b,c);
    return 0;
}


void kiem( int a, int b, int c)
{
    float cv, dt ;

    cv = a+b+c;
    dt = sqrt( (cv/2 )*( cv/2 -a )* (cv/2 -b) *(cv/2 -c));
    if ( a > b+c || b > c+a || c > a+b)
        printf("khong hinh thanh tam giac");
    else
        printf("la tam giac \n");
        printf(" chu vi , dien tich lan luot la %.f , %.f", cv,dt);


    return 0;
}







/*
#include<stdio.h>
#include <math.h>

void kiem(int a, int b, int c);
int main()
{
    int a, b, c ;

    scanf ("%d%d%d",&a,&b,&c);
    kiem(a,b,c);
    return 0;
}
void kiem( int a, int b, int c)
{
    float cv, dt ;

    cv = a+b+c;
    dt = sqrt( (cv/2 )*( cv/2 -a )* (cv/2 -b) *(cv/2 -c));
    if ( a > b+c || b > c+a || c > a+b)
        printf("khong hinh thanh tam giac");
    else
        printf("la tam giac \n");
        printf(" chu vi , dien tich lan luot la %.f , %.f", cv,dt);


    return 0;
}
*/
