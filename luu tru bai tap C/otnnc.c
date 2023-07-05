/*
#include<stdio.h>
#include<math.h>

#define VO_NGHIEM 0
#define MOT_NGHIEM 1
#define HAI_NGHIEM 2
#define NGHIEM_KEP 3
#define VO_SO_NGHIEM 4

int main()
{
    float a, b, c, x1,x2,delta;
    int so_nghiem;
    printf("Nhap he so a b c lan luot la: ");
    scanf("%f%f%f",&a,&b,&c);

    if(a==0)
    {
        if(b==0)
        {
            if(c==0)
            {
               so_nghiem = 4;
            }
            else
            {
                so_nghiem = 0;
            }
        }
        else
        {
            so_nghiem = 1;
        }
    }
    else
    {
        delta = b*b -4*a*c;
        if(delta <0)
        {
            so_nghiem = 0;
        }
        else if(delta ==0)
        {
            so_nghiem = 3;
        }
        else
        {
            so_nghiem = 2;
        }
    }

    if(so_nghiem ==0)
    {
        printf("Phuong trinh vo nghiem.");
    }
    else if(so_nghiem ==1)
    {
        printf("Phuong trinh co nghiem don duy nhat x1 = x2 = %.2f",-c/b);
    }
    else if(so_nghiem == 2)
    {
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        printf("Phuong trinh co hai nghiem phan biet : \n");
        printf("x1 = %.2f\n",x1);
        printf("x2 = %.2f\n",x2);
    }
    else if(so_nghiem == 3)
    {
        x1 = x2 = -b/2*a;
        printf("Phuong trinh co nghiem kep : x1= x2 =%.2f",x1);
    }
    else if(so_nghiem == 4)
    {
        printf("Phuong trinh co vo so nghiem.");
    }
    return 0;
}
*/
/*
#include<stdio.h>
#include<math.h>

int kiemTra(int a)
{
    if(a<2)
    {
        return 0;
    }
    for(int i=2;i <= sqrt(a);i++)
    {
        if(a%i==0)
        {
            return 0;
        }
    }
    return a>1;
}
int main()
{
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d",&n);
    int k[n];
    printf("Nhap mang k: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&k[i]);
    }
    printf("\nCac so nguyen to co trong mang k la: ");
    for(int i=0;i<n;i++)
    {
        if(kiemTra(k[i])==1)
        {
            printf("%d ",k[i]);
        }
    }
    return 0;
}
*/
/*
#include<stdio.h>
void nhap(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
int main()
{
    int n;
    printf("Nhap kich thuoc cua mang: ");
    scanf("%d",&n);
    int a[n];
    printf("Nhap mang: \n");
    nhap(a,n);
    printf("Nhap so bat ki: ");
    int b;
    scanf("%d",&b);
    int dem=0;
    for(int i=0;i<n;i++)
    {
        if(b == a[i])
        {
            dem++;
            printf("Xuat hien ow vi tri thu %d\n",i+1);
        }
    }
    printf("Xuat hien tong %d so lan.",dem);
    return 0;
}
*/
/*
#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    printf("Cac so thoa man la: \n");
    for(int i=1;i<=9;i++)
    {
        for(int j=0;j<=9;j++)
        {
            for(int k=0;k<=9;k++)
            {
                int s = i*100+j*10+k;
                if(s == pow(i,3)+pow(j,3)+pow(k,3))
                {
                    printf("%d\n",s);
                }
            }
        }
    }
    return 0;
}
*/
/*
#include<stdio.h>
#include<math.h>

int check(int n)
{
    int s=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            s+=i;
        }
    }
    if(n==s)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    printf("Nhap kich thuoc cua day: ");
    scanf("%d",&n);
    int a[n];
    printf("Nhap day: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Cac so hoan hao co trong day la: ");
    int luu = 1e9;
    for(int i=0;i<n;i++)
    {
        if(check(a[i])==1)
        {
            printf("%d ",a[i]);
            if(luu > a[i])
            {
                luu = a[i];
            }
        }
    }
    printf("\nSo hoan hao nho nhat trong day la: %d",luu);
    return 0;
}
*/
/*
#include<stdio.h>
#include<string.h>

int main()
{
    char c[100];
    printf("Nhap vao xau ki tu: ");
    gets(c);
    int dem1 = 0, dem2=0, dem3=0 , dem4=0;
    for(int i=0; c[i] != '\0' ; i++)
    {
        if((c[i] >= 'A' && c[i]<= 'Z') ||(c[i] >='a' && c[i] <= 'z'))
        {
            dem1++;
        }
        else if(c[i] >= '0' && c[i] <= '9')
        {
            dem2++;
        }
        else if(c[i] == ' ')
        {
            dem3++;
        }
        else
        {
            dem4++;
        }
    }
    printf("Co tat ca %d ki tu dang chu.\n",dem1);
    printf("Co tat ca %d ki tu dang so.\n",dem2);
    printf("Co tat ca %d ki tu dang trang.\n",dem3);
    printf("Co tat ca %d ki tu dang dac biet.\n",dem4);

    if(dem1 >= dem2 && dem1 >= dem3 && dem1 >= dem4)
    {
        printf("Ki tu dang chu la nhieu nhat.");
    }
    else if(dem2 >= dem1 && dem2 >= dem3 && dem2 >= dem4)
    {
        printf("Ki tu dang so la nhieu nhat.");
    }
    else if(dem3 >= dem2 && dem3 >= dem1 && dem3 >= dem4)
    {
        printf("Ki tu dang trang la nhieu nhat.");
    }
    else if(dem4 >= dem2 && dem4 >= dem3 && dem4 >= dem1)
    {
        printf("Ki tu dang dac biet la nhieu nhat.");
    }
    return 0;
}
*/
/*
#include<stdio.h>

void nhap(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
}
void sapXep(int *a,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(*(a+i) < *(a+j))
            {
                int tam = *(a+i);
                *(a+i) = *(a+j);
                *(a+j) = tam;
            }
        }
    }
}
int main()
{
    int n;
    printf("Nhap so n: ");
    scanf("%d",&n);
    int *a ;
    a = (int *)malloc(n*sizeof(int));
    if (a == NULL)
    {
        printf("Co loi! khong the cap phat bo nho.");
        return 0;
    }
    printf("Nhap ham so: ");
    nhap(a,n);
    sapXep(a,n);
    printf("Ham sau khi sap xep la: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(a+i));
    }
    free(a);
    return 0;
}
*/
/*
#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Nhap so tu nghien n: ");
    scanf("%d",&n);
    int s=0;
    for(int i=1;i<=n;i++)
    {
        s+= pow(i,2);
    }
    printf("Tong cua day la: ");
    printf("%d",s);
    return 0;
}
*/
/*
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int check(char a[])
{
    int l = 0;
    int r = strlen(a)-1;

    while(l<r)
    {
        if(a[l] != a[r])
        {
            return 0;
        }
        l++;
        r--;
    }
    return 1;
}

int main()
{
    char a[100];
    printf("Nhap chuoi bat ki: ");
    gets(a);
    int dem=0;
    if(check(a))
    {
        printf("Chuoi doi xung.\n");
    }
    else
    {
        printf("Chuoi khong doi xung.\n");
        strrev(a);
        printf("Xau dao nguoc cua chuoi la: ");
        puts(a);
    }
    for(int i=0;i<strlen(a);i++)
    {
        if(check(a))
        {
            dem++;
        }
    }
    printf("Co tong cac ki tu giong nhau la: %d",dem);
    return 0;
}
*/
/*
#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,d,e,f;
    float D,D1,D2,x1,x2;
    printf("Nhap cac he so cua he phuong trinh: ");
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);

    D = a*e-b*d;
    D1 = c*e - b*f;
    D2 = a*f - d*c;

    if(D==0)
    {
        if(D1+D2 == 0)
        {
            printf("He phuong trinh vo so nghiem.");
        }
        else
        {
            printf("He phuong trnh vo nghiem.");
        }
    }
    else
    {
        x1 = D1/D;
        x2 = D2/D;
        printf("He phuong trinh co mot nghiem: \n");
        printf("x1 = %.2f\n",x1);
        printf("x2 = %.2f",x2);
    }
    return 0;
}
*/
/*
#include<stdio.h>

int main()
{
    int n,m;
    printf("Nhap hang va cot cua ma tran la: ");
    scanf("%d%d",&n,&m);
    printf("Nhap ma tran: \n");
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int kiem = 1e9;
    int tong =0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            tong += a[i][j];
            if(a[i][j]>0)
            {
                if(a[i][j]<kiem)
                {
                    kiem = a[i][j];
                }
            }
        }
    }
    printf("Tong cua cac phan tu trong ma tran la: %d\n",tong);
    printf("Phan tu nguyen duong ngo nhat trong day la: %d",kiem);
    return 0;
}
*/
/*
#include<stdio.h>

int ucln(int a,int b)
{
    if(a==0 || b==0)
    {
        return a+b;
    }
    while(a!=b)
    {
        if(a>b)
        {
            a-=b;
        }
        else
        {
            b-=a;
        }
    }
    return a;
}

int bcnn(int a,int b)
{
    return a*b/ucln(a,b);
}

int main()
{
    int a,b,c,d;
    printf("Nhap 4 so nguyen tu ban phim la: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int luu1,luu2,luu3,luu4,luu5,luu6;
    luu1 = ucln(a,b);
    luu2 = ucln(c,d);
    luu3 = ucln(luu1,luu2);
    luu4 = bcnn(a,b);
    luu5 = bcnn(c,d);
    luu6 = bcnn(luu4,luu5);
    printf("Uoc chung lon nhat cua 4 so la: %d\n",luu3);
    printf("Boi chung nho nhat cua 4 so la: %d",luu6);
    return 0;
}
*/
/*
#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    printf("Nhap day ki tu: ");
    gets(a);

    for(int i=0; i< strlen(a)-1; i++)
    {
        for(int j=i+1; j < strlen(a); j++)
        {
            if(a[i]>a[j])
            {
                char tam = a[i];
                a[i] = a[j];
                a[j] = tam;
            }
        }
    }
    printf("\nDay sau khi duoc sap xep la: ");
    puts(a);
    printf("\n");
    int dem=0;
    for(int i=0;a[i]!= '\0';i++)
    {
        if(a[i]=='e')
        {
            dem++;
        }
    }
    printf("Co ta ca %d ki tu 'e' trong day",dem);
    return 0;
}
*/
/*
#include<stdio.h>
#include<math.h>

int main()
{
    int a;
    printf("Nhap so a: ");
    scanf("%d",&a);
    int dem=0;
    int tong = 0;
    if(a==0)
    {
        printf("So do co 1 chu so\n");
        printf("Tong chu so bang 0");
    }
    else
    {
        while(a!=0)
        {
            dem++;
            tong += a%10;
            a/=10;
        }
        printf("So do co %d chu so.\n",dem);
        printf("Tong cac chu so do la: %d\n",tong);
    }
    return 0;
}
*/
/*
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Nhap kich co mang: ");
    scanf("%d",&n);
    int *a = (int*)malloc(n*sizeof(int));
    printf("Nhap so phan tu mang: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    int max= -1e9;
    int luu1;
    for(int i=0;i<n;i++)
    {
        if(*(a+i)>max)
        {
            max= *(a+i);
            luu1=i;
        }
    }
    printf("So lon nhat trong day la: %d\n",max);
    printf("Vi tri cua no la: %d",luu1+1);
    free(a);
}
*/
/*
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int ucln(int a,int b);
struct phanSo
{
    int tuSO;
    int mauSo;
};

typedef struct phanSo ps;
void rutps(ps *a);
void nhapps(ps *a)
{
    scanf("%d%d",&a->tuSO,&a->mauSo);
}
void inps(ps a)
{
    if(a.mauSo==1)
    {
        printf("%d",a.tuSO);
    }
    else
    {
        if(a.mauSo<0)
        {
            a.mauSo*=-1;
            a.tuSO*= -1;
        }
        printf("%d/%d",a.tuSO,a.mauSo);
    }
}
int ucln(int a,int b)
{
    if(a==0||b==0)
    {
        return a+b;
    }
    while(a!=b)
    {
        if(a>b)
        {
            a-=b;
        }
        else
        {
            b-=a;
        }
    }
    return a;
}
void rutps(ps *a)
{
    int gcd = ucln(a->tuSO, a->mauSo);
    a->tuSO /= gcd;
    a->mauSo /= gcd;
}
ps congPhanSo(ps *a,ps *b)
{
    ps c;
    c.tuSO = a->tuSO*b->mauSo+b->tuSO*a->mauSo;
    c.mauSo = a->mauSo*b->mauSo;
    rutps(&c);
    return c;
}
ps nhanps(ps *a,ps *b)
{
    ps c;
    c.tuSO = a->tuSO *b->tuSO;
    c.mauSo = a->mauSo *b->mauSo;
    rutps(&c);
    return c;
}
int main()
{
    ps a,b;
    printf("Nhap phan so a: ");
    nhapps(&a);
    printf("Nhap phan so b: ");
    nhapps(&b);
    printf("Tong phan so vua nhap la: ");
    inps(congPhanSo(&a,&b));
    printf("\nTich phan so vua nhap la: ");
    inps(nhanps(&a,&b));
    return 0;
}
*/
/*
#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    printf("Nhap vao xau ki tu: ");
    gets(a);
    printf("Xau ki tu khi doi thanh chu thuong la: ");

    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]>='A'&& a[i]<='Z')
        {
            a[i]+=32;
        }
    }
    printf("%s",a);
    printf("\n");
    printf("Xau dao nguoc la: ");
    printf("%s",strrev(a));
}

*/
/*
#include<stdio.h>
#include<math.h>

struct cauTruc
{
    float chieuDai;
    float chieuRong;
    float chuVi;
    float dienTich;
};
typedef struct cauTruc ct;

float CHUVI(ct *a)
{
    a->chuVi = 2*(a->chieuDai + a->chieuRong);
    return a->chuVi;
}
float DIENTICH(ct *a)
{
    a->dienTich = a->chieuDai *a->chieuRong;
    return a->dienTich;
}
void nhap(ct *a)
{
    scanf("%f%f",&a->chieuDai,&a->chieuRong);
}
int main()
{
    int n;
    printf("Nhap so hinh can tinh: ");
    scanf("%d",&n);
    ct a[n];
    for(int i=0; i<n; i++)
    {
        printf("Nhap chieu dai va chieu rong cua hinh  la: ");
        nhap(&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        printf("Chu vi hinh chu nhat la: %.2f\n",CHUVI(&a[i]));
        printf("Dien tich hinh chu nhat la: %.2f\n",DIENTICH(&a[i]));
    }
    return 0;
}

*/
/*
#include<stdio.h>
#include<math.h>
#define PI 3.14

struct cauTruc
{
    float x;
    float y;
    float r;
};
typedef struct cauTruc ct;

void nhap(ct a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Nhap hinh tron thu %d: ",i+1);
        scanf("%f%f%f",&a[i].x,&a[i].y,&a[i].r);

    }
}
float dt(ct *a)
{
    float dientich = a->r *a->r *PI;
    return dientich;
}
void in(ct a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Toa do hinh tron la:(x,y) = (%.2f,%.2f)\n",a[i].x,a[i].y);
        printf("Dien tich hinh tron la: %.2f\n",dt(&a[i]));
    }
}

int main()
{
    int n;
    printf("Nhap so n: ");
    scanf("%d",&n);
    ct a[n];
    nhap(a,n);
    in(a,n);
}
*/
/*
#include<stdio.h>
#include<math.h>
#define PI 3.14

struct cauTruc
{
    float x;
    float y;
    float r;
};
typedef struct cauTruc ct;

void nhap(ct *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Nhap hinh tron thu %d: ",i+1);
        scanf("%f%f%f",&(a+i)->x,&(a+i)->y,&(a+i)->r);
    }
}
float dt(ct *a)
{
    float dientich = a->r *a->r *PI;
    return dientich;
}
void in(ct a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Toa do hinh tron la:(x,y) = (%.2f,%.2f)\n",a[i].x,a[i].y);
        printf("Dien tich hinh tron la: %.2f\n",dt(&a[i]));
    }
}

int main()
{
    int n;
    printf("Nhap so n: ");
    scanf("%d",&n);
     ct *a = (ct*)malloc(n*sizeof(ct));
    nhap(a,n);
    in(a,n);
    free(a);
}
*/
/*
#include<stdio.h>
#include<string.h>

struct SINHVIEN
{
    char masv[20];
    char hoten[30];
    char lop[20];
    float dtoan;
    float dtin;
    float dta;
};
typedef struct SINHVIEN sv;

float diemTB(sv *a)
{
    float b = (a->dta + a->dtin + a->dtoan)/3;
    return b;
}

void nhap(sv *a)
{
    printf("Nhap mssv: ");
    gets(a->masv);
    printf("Nhap lop: ");
    gets(a->lop);
    printf("Nhap ho ten: ");
    gets(a->hoten);
    printf("Nhap diem toan tin ta: ");
    scanf("%f%f%f",&a->dtoan,&a->dtin,&a->dta);
}
int main()
{
    sv a;
    printf("Nhap so lieu cua sinh vien: \n");
    nhap(&a);
    printf("Diem trung binh cua sinh vien la: ");
    printf("%.2f\n",diemTB(&a));
    printf("\t\t\t\t\tGIAY BAO DIEM SO KET HOC KI 1\n");
    printf("\t%s%17s%15s%15s%15s%15s%15s\n","Ma sinh vien","Ho ten","Lop","Diem toan","Diem tin","Diem TA","Diem TB");
    printf("\t%s%23s%18s%15.2f%15.2f%15.2f%14.2f",a.masv,a.hoten,a.lop,a.dtoan,a.dtin,a.dta,diemTB(&a));
    return 0;
}
*/

/*
#include<stdio.h>

int main()
{
    int n;
    printf("Nhap cap cua ma tran la: ");
    scanf("%d",&n);
    int a[n][n];
    printf("Nhap cac phan tu cua ma tran: \n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int s=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0;j<n;j++)
        {
           if(i==0 || j==0 || i== n-1 || j== n-1)
           {
               s += a[i][j];
           }
        }
    }
    printf("Tong cac phan tu o duong vien la: %d",s);
    return 0;
}
*/
/*
#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Nhap so luong cua day: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    FILE *f = fopen("input.dat","w");
    if(f==NULL)
    {
        printf("LOI MO FILE.");
        return 0;
    }
    fprintf(f,"%d\n",n);
    for(int i=0;i<n;i++)
    {
        fprintf(f,"%d ",a[i]);
    }
    fclose(f);
}
*/
/*
#include<stdio.h>

int main()
{
    int a[100];
    int n;
    FILE *f= fopen("input.dat","r");
    if(f==NULL)
    {
        printf("LOI MO FILE.");
        return 0;
    }
    fscanf(f,"%d",&n);
    for(int i=0;i<n;i++)
    {
        fscanf(f,"%d",&a[i]);
    }
    fclose(f);
    for(int i=0;i<n-1 ;i++)
    {
       for(int j=i+1;j<n;j++)
       {
           if(a[i]>a[j])
           {
               int tam = a[i];
               a[i] = a[j];
               a[j] = tam;
           }
       }
    }
    FILE *k = fopen("output.dat","w");
    fprintf(f,"%d\n",n);
    for(int i=0;i<n;i++)
    {
        fprintf(f,"%d ",a[i]);
    }
    fclose(k);
    return 0;
}
*/
/*
#include<stdio.h>

int main()
{
    int n;
    int a[100];

    FILE *f = fopen("INPUT.DAT","w");
    printf("Nhap so phan tu n: ");
    scanf("%d",&n);
    fprintf(f,"%d\n",n);
    printf("Nhap mang: \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        fprintf(f,"%d ",a[i]);
    }
    fclose(f);

    FILE *k = fopen("INPUT.DAT","r");
    fscanf(k,"%d",&n);
    printf("%d\n",n);
    for(int i=0; i<n; i++)
    {
        fscanf(k,"%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    fclose(k);

    printf("\n");
    FILE *m= fopen("OUTPUT1.DAT","w");
    FILE *c= fopen("OUTPUT2.DAT","w");
    FILE *s= fopen("OUTPUT3.DAT","w");
    for(int i=0; i<n; i++)
    {
        if(a[i]%3==0)
        {
            fprintf(m,"%d ",a[i]);
        }
        else if(a[i]%3==1)
        {
            fprintf(c,"%d ",a[i]);
        }
        else if(a[i]%3==2)
        {
            fprintf(s,"%d ",a[i]);
        }
    }
    fclose(m);
    fclose(c);
    fclose(s);
    return 0;
}
*/
/*
#include<stdio.h>

int main()
{
    int n,m;
    int b[100];
    printf("Nhap vao so nguyen n m: ");
    scanf("%d%d",&n,&m);
    FILE *f= fopen("INPUT.DAT","w");
    fprintf(f,"%d %d\n",n,m);
    for(int i=0;i<n*m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n*m;i++)
    {
        fprintf(f,"%d ",b[i]);
    }
    fclose(f);

    FILE *k= fopen("INPUT.DAT","r");
    FILE *h= fopen("RESULT.DAT","w");
    fscanf(k,"%d%d",&n,&m);
    printf("%d %d\n",n,m);
    for(int i=0;i<n*m;i++)
    {
        fscanf(k,"%d",&b[i]);
    }
    for(int i=0;i<n*m;i++)
    {
        printf("%d ",b[i]);
    }
    fprintf(h,"%d %d\n",n,m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            fprintf(h,"%d ",b[i * m + j]);
        }
        fprintf(h,"\n");
    }
    fclose(k);
    fclose(h);
    return 0;
}
*/
/*
#include <stdio.h>

int main() {
    int n, m;
    int b[100];

    printf("Nhap vao so nguyen n m: ");
    scanf("%d%d", &n, &m);

    FILE *f = fopen("INPUT.DAT", "w");
    fprintf(f, "%d %d\n", n, m);

    for (int i = 0; i < n * m; i++) {
        scanf("%d", &b[i]);
        fprintf(f, "%d ", b[i]); // ghi từng phần tử của ma trận vào file
    }

    fclose(f);

    FILE *k = fopen("INPUT.DAT", "r");
    FILE *h = fopen("RESULT.DAT", "w");

    fscanf(k, "%d%d", &n, &m);
    printf("%d %d\n", n, m);

    for (int i = 0; i < n * m; i++) {
        fscanf(k, "%d", &b[i]);
        printf("%d ", b[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            fprintf(h, "%d ", b[i * m + j]); // sử dụng công thức tính chỉ số để lấy phần tử thứ i, j trong ma trận
        }
        fprintf(h, "\n");
    }

    fclose(k);
    fclose(h);

    return 0;
}

*/













