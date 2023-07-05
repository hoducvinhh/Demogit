#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct SINHVIEN
{
    char maSinhVien[10];
    char HoTen[50];
    int namSinh;
    char gioiTinh[10];
    float diemTB;
};
typedef struct SINHVIEN sinhvien;

void nhapDanhSach( sinhvien *sv)
{
    getchar();
    printf("\nNhap ma sinh vien la : ");
    gets(sv->maSinhVien);
    printf("\nNhap ho ten la :  ");
    gets(sv->HoTen);
    printf("\nNhap nam sinh la : ");
    scanf("%d",&sv->namSinh);
    printf("\nNhap gioi tinh la : ");
    // fflush(stdin);
    getchar();
    gets(sv->gioiTinh);
    printf("\nNhap diem trung binh la : ");
    scanf("%f",&sv->diemTB);
}
void inDanhSach(sinhvien sv)
{
    printf("\n Ma sinh vien :%s",sv.maSinhVien);
    printf("\n Ho ten :%s",sv.HoTen);
    printf("\n Nam sinh :%d",sv.namSinh);
    printf("\n Gioi tinh: %s",sv.gioiTinh);
    printf("\n Diem TB :%.f ",sv.diemTB);
}

void nhap(sinhvien *a,int n)
{
    for(int i=0; i<n; i++)
    {
        nhapDanhSach(a+i);
    }
}
void in(sinhvien a[],int n)
{
    for(int i=0; i<n; i++)
        inDanhSach(a[i]);
}

void sapXep(sinhvien a[],int n){
    for(int i=0;i<n-1;i++){
        int max= i;
        for(int j=i+1;j<n;j++){
            if(a[j].diemTB > a[i].diemTB){
                max = j;
            }
            sinhvien tmp =a[i];
            a[i]= a[max];
            a[max]= tmp;
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    sinhvien truyen[n];
    // nhapDanhSach(&a);
    nhap(truyen,n);
    sapXep(truyen,n);
    // inDanhSach(truyen);
    in(truyen,n);
    // sinhvien *sv;
    // sv =(sinhvien *)malloc(n* sizeof(sinhvien));
    // nhap(sv,n);
    // in(sv,n);
    // free(sv);
}



