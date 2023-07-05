#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct dulieu
{
    char hoTen[50];
    float diemTB;
};
typedef struct dulieu ds;

void nhapDanhSach(ds *a)
{
    getchar();
    printf("Nhap ho va ten : ");
    gets(a->hoTen);
    printf("Nhap diem : ");
    scanf("%f",&a->diemTB);
}
void inDanhSach(ds a)
{
    printf("Ho va ten : %s  \n",a.hoTen);
    printf("Diem trun binh :%.2f ",a.diemTB);
}
void nhapdanhsachSV(ds *a,int n)
{
    for(int i=0; i<n; i++)
    {
        printf("Nhap du lieu sinh vien thu %d\n",i+1);
        nhapDanhSach(a+i);
    }
}
void xuatdanhsachSV(ds *a,int n)
{
    for(int i=0; i<n; i++)
    {
        printf("Xuat danh sach sinh vien thu %d\n",i+1);
        inDanhSach(a[i]);
        printf("\n");
    }
}
int main()
{
    int n ;
    scanf("%d",&n);
   ds *a=(ds*)malloc(n*sizeof(ds));
    nhapdanhsachSV(a,n);
    xuatdanhsachSV(a,n);

    for(int i=0; i<n; i++)
    {
        if((a+i)->diemTB >= 7)
        {
            printf("Ho ten sinh vien co diem tb lon hon 7 la : \n");
            printf("%s ",*(a+i));
        }
    }
    ds max=a[0] ;
    printf("\n");
    for(int i=0; i<n; i++)
    {

        if((a+i)->diemTB > a[0].diemTB)
        {
            max=*(a+i);
        }
    }
    printf("Hoc sinh co diem trung binh cao nhat la :\n");
    inDanhSach(max);
    printf("\n");
    printf("Sinh vien co diem trung binh kem la : \n");
    for(int i=0;i<n;i++){
        if(a[i].diemTB < 5){
           inDanhSach(a[i]);
        }
        printf("\n");
    }

    free(a);
}













