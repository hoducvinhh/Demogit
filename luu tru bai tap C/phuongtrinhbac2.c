/*
#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,x1,x2, denta;
    scanf("%f%f%f",&a,&b,&c);
    denta = b*b - 4*a*c ;

    if(denta < 0)
        printf("phuong trinh vo nghiem");
    else if (denta ==0 )
        printf(" phuong trinh co 1 nghiem kep duy nhat x1 = x2 = %.2f",(-b/(2*a)));
    else

        {
        x1 = ((-b + sqrt(denta)))/(2*a);
        x2 = (-b - sqrt(denta))/(2*a);
        printf("phuong trinh co 2 nghiem %.1f , %.1f ",x1,x2);
        }
}
*/

#include<stdio.h>
#include<math.h>

#define VO_NGHIEM 0
#define NGHIEM_DON 1
#define HAI_NGHIEM_PHAN_BIET 2
#define NGHIEM_KEP 3
#define VO_SO_NGHIEM 4

int main()
{
    float a,b,c,delta,x1,x2;
    int soNghiem;
    scanf("%f%f%f",&a,&b,&c);

    if(a==0)
    {
        if(b==0)
        {
            if(c==0)
            {
                soNghiem = VO_SO_NGHIEM;
            }
            else
            {
                soNghiem = VO_NGHIEM;
            }
        }
        else
        {
            soNghiem = NGHIEM_DON;
            x1 = x2 = -c/b;
        }
    }
    else
    {
        delta = b*b-4*a*c;
        if(delta < 0)
        {
            soNghiem = VO_NGHIEM;
        }
        else if (delta ==0 )
        {
            soNghiem = NGHIEM_KEP;
            x1 = x2 = -b/2*a;
        }
        else
        {
            soNghiem = HAI_NGHIEM_PHAN_BIET ;
            x1 = (-b-sqrt(delta))/(2*a);
            x2 = (-b+sqrt(delta))/(2*a);
        }
    }
    if (soNghiem == 0)
    {
        printf("Phuong trinh vo nghiem");
    }
    else if (soNghiem == 4)
    {
        printf("Moi x la nghiem");
    }
    else if (soNghiem == 1)
    {
        printf("Phuong trinh co 1 nghiem don\n");
        printf("x = %.5f",x1);
    }
    else if (soNghiem == 3)
    {
        printf("Phuong trinh co nghiem kep\n");
        printf("x1 = x2 = %.5f",x1,x2);
    }
    else
    {
        printf("Phuong trinh co 2 nghiem phan biet\n");
        printf("x1 = %.5f\n",x1);
        printf("x2 = %.5f",x2);
    }
}

















