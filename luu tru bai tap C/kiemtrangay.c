/*
#include <stdio.h>
#include <math.h>
int main(){
    int a, b ;
    scanf("%d",&a,&b);
    switch (a)
    {


       case 1 : case 3 : case 5 : case 7: case 8: case 10: case 12 :
           printf("31 ngay");
           break ;
       case 4 :case 6 :case 9 :case 11:
        printf("30 ngay"); break;
       case 2:
         if( (b%400==0) || ((b%4==0) && (b%100 != 0)))
            printf("29 ngay");
       else
            printf("28 ngay");
            break;
}
            return 0;
}
*/
 /* #include <stdio.h>
#include <math.h>
int main(){
    int a, b ;
    scanf("%d%d",&a,&b);
    switch (a)
    {


       case 1 : case 3 : case 5 : case 7: case 8: case 10: case 12 :
           printf(" 31 ngay");
           break ;
       case 4 :case 6 :case 9 :case 11:
        printf("30 ngay"); break;
    }
    if( a==2)
    {


        if( (b%400==0) || ((b%4==0) && (b%100 != 0)))
            printf("29 ngay");
        else
            printf("28 ngay");
    }

}
*/
/*
#include<stdio.h>
#include<math.h>

int main()
{
    int n;    // n la thang
    scanf("%d",&n);

    if(n==1 || n==2 || n==3)
    {
        printf("Thang %d thuoo Quy I",n);
    }

    else if(n==4 || n==5 || n==6)
    {
        printf("Thang %d thuoo Quy II",n);
    }

    else if(n==7 || n==8 || n==9)
    {
        printf("Thang %d thuoo Quy III",n);
    }

    else if(n==10 || n==11 || n==12)
    {
        printf("Thang %d thuoo Quy IV",n);
    }
    else
    {
        printf("Tong nam khong co thang %d ",n);
    }
}
*/

// kiem tra nam nhuan
/*
#include<stdio.h>
#include<math.h>

int main(){
    int nam;
    scanf("%d",&nam);
    if(nam%400==0 || (nam%4==0 && nam %100 !=0)){
        printf("NAM DO LA NAM NHUAN");
    }
    else {
        printf("NAM DO KHONG PHAI NAM NHUAN");
    }
    return 0;

}
*/

// kiem tra tinh hop le cua ngay thang

#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main()
{
    int ngay,thang,nam;
    scanf("%d%d%d",&ngay,&thang,&nam);
    bool laNgayHopLe = true;

    if(ngay<1||ngay>31||thang<1||thang>12)
    {
        laNgayHopLe = false;
    }
    else if(thang==2)
    {
        bool laNamNhuan = false ;
        if(nam%400 || (nam%4==0&&nam%100!=0))
        {
            laNamNhuan = true;
        }
        if(laNamNhuan)
        {
            if(ngay>29)
            {
                laNgayHopLe = false;
            }
        }
        else
        {
            if(ngay>28)
            {
                laNgayHopLe = false ;
            }
        }
    }
        else if(thang==4||thang==6||thang==9||thang==11)
        {
            if(ngay>30)
            {
                laNgayHopLe= false;
            }
        }
        if(laNgayHopLe==true)
        {
            printf("%d/%d/%d  hop le",ngay,thang,nam);
        }
        else
        {
            printf("%d/%d/%d khong hop le",ngay,thang,nam);
        }

}



















