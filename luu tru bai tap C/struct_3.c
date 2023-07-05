/*
#include<stdio.h>
#include<stdlib.h>
struct Date{
    int day;
    int month;
    int year;
};
typedef struct Date dl;

void nhap(dl *a){
    printf("\nNhap vao ngay : ");
    scanf("%d",&a->day);
    printf("\nNhap vao thang : ");
    scanf("%d",&a->month);
    printf("\nNhap vao nam : ");
    scanf("%d",&a->year);
}
void in(dl a){
    printf("DATE : %d / %d / %d",a.day, a.month, a.year);
}

int main(){
    dl a;
  //  dl *a = (dl*)malloc(10*sizeof(dl));
    nhap(&a);
    in(a);
 //   free(a);
}
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct date{
    int ngay;
    int thang;
    int nam;
};
typedef struct date d;
struct dulieu{
    char ten[50];
    d thongtin;
    char ma[10];
};

void nhap(struct dulieu *a){
   printf("\nNhap ten : ");
  gets(a->ten);
    printf("\nNhap thong tin : ");
    scanf("%d%d%d",&a->thongtin.ngay,&a->thongtin.thang,&a->thongtin.nam);
    printf("\nNhap ma : ");
    fflush(stdin);
    gets(a->ma);
}
void in(struct dulieu a){
   printf("\nTEN : %s",a.ten);
    printf("\nTHONG TIN : %d/%d/%d ",a.thongtin.ngay,a.thongtin.thang,a.thongtin.nam);
    printf("\nMS : %s",a.ma);
}

int main(){
    struct dulieu n;
    nhap(&n);
    in(n);

}





















