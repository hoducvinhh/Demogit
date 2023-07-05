/**
    DE 1: Cau 1 : giai va bien luan phuong trinh bac hai ax^2 + bx +c =0; a!=0;b,c duoc nhap tuy y tu ban phim.
          Cau 2 : Lap ham kiem tra so nguyen to bat ky .Ap dung viet chuong trinh dem va in cac so nguyen to co trong mot mang nguyen kichs thuoc n duoc nhap tu ban phim.

**/

/**  CAU 1 : **/
/*
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    float delta,x1,x2;
    delta = b*b - 4*a*c;
    if(delta < 0)
    {
        printf("Phuon trinh vo nghiem.");
    }
    else if(delta == 0)
    {
        printf("Phuong trinh co nghiem duy nhat x1 = x2 = %.2f.",(float)-b/2*a);
    }
    else
    {
        x1 = (-b + sqrt(delta))/2*a;
        x2 = (-b - sqrt(delta))/2*a;
        printf("Phuong trinh co hai nghiem phan biet : \n");
        printf("x1 = %.2f\n.",x1);
        printf("x1 = %.2f\n.",x2);
    }
    return 0;
}
*/

/**Cau 2: **/
/*
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int nt(int n)
{
    if(n<2)
    {
        return 0;
    }
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return n>1;
}
int main()
{
    int n;
    printf("Nhap so nguyen n:");
    scanf("%d",&n);
    int a[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int dem=0;
    for(int i=0; i<n; i++)
    {
        if(nt(a[i]))
        {
            printf("So nguyen to la : %d\n",a[i]);
            dem++;
        }
    }
    printf("Co tat ca %d so nguyen to co trong day",dem);
    return 0;
}
*/

/**
    DE 2 : Cau1: giai va bien luan phuong trinh bac hai ax^2+bx+c(xet ca truong hop suy bien)
           Cau2: Nhập một dãy số thực a, kích thước n. Nhập một số thực x bất kỳ từ bàn phím.
           Kiểm tra xem số thực x  có trong dãy hay không, nếu có thì xuất hiện bao nhiêu lần và in ra các vị trí của nó có trong dãy.
**/

/** Cau 1: **/
/*
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define mot_nghiem 1
#define hai_nghiem 2
#define nghiem_kep 3
#define vo_nghiem 0
#define vo_so_nghiem 4

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    float x1,x2,delta;
    int songhiem;
    if(a==0)
    {
        if(b==0)
        {
            if(c==0)
            {
                songhiem = vo_so_nghiem;
            }
            else
            {
                songhiem = vo_nghiem;
            }
        }
        else
        {
            songhiem = mot_nghiem;
        }
    }
    else
    {
        delta=b*b-4*a*c;
        if(delta<0)
        {
            songhiem= vo_nghiem;
        }
        else if(delta==0)
        {
            songhiem= nghiem_kep;
        }
        else
        {
            songhiem= hai_nghiem;
        }
    }
    if(songhiem == 1)
    {
        printf("Phuong trinh co nghiem duy nhat x1 = x2 = %.2f",(float)-c/b);
    }
    else if(songhiem == 2)
    {
        x1 = (-b + sqrt(delta))/2*a;
        x2 = (-b - sqrt(delta))/2*a;
        printf("Phuong trinh co hai nghiem phan biet : \n");
        printf("x1 = %.2f\n.",x1);
        printf("x1 = %.2f\n.",x2);
    }
    else if(songhiem ==3)
    {
        printf("Phuong trinh co nghiem kep x1 = x1 = %.2f",(float)-b/2*a);
    }
    else if (songhiem == 4)
    {
        printf("Phuong trinh vo so nghiem");
    }
    else
    {
        printf("Phuong trinh vo nghiem");
    }
}
*/

/** Cau 2: **/
/*
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);
    int dem=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]==x)
        {
            dem++;
            printf("Vi tri cua so x la: %d",i);
            printf("\n");
        }
    }
    printf("So %d xuat hien %d lan trong day a",x,dem);
    return 0;
}
*/

/**
    DE 3: Cau1 : Tìm các số có 3 chữ số sao cho tổng lập phương của các chữ số bằng chính nó.
                 (Ví dụ 13+53+33=153).
          Cau2 : Nhập dãy số nguyên dương. Xét xem trong dãy có số hoàn hảo hay không (là số có tổng các ước của nó bằng chính nó:VD 6=1+2+3)?
                 Nếu có hãy in ra các số hoàn hảo.
                 Từ đó tìm số hoàn hảo nhỏ nhất trong dãy.

/** Cau 1: **/
/*
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int tong;
    int s;
    for(int i=1; i<=9; i++)
    {
        for(int j=0; j<=9; j++)
        {
            for(int k=0; k<=9; k++)
            {
                s = pow(i,3)+pow(j,3)+pow(k,3);
                tong = i*100+ j*10 +k;
                if(s == tong)
                {
                    printf("So do la: %d\n",tong);
                }
            }
        }
    }
}
*/
// cach2:
/*
#include<stdio.h>
#include<math.h>
int main()
{
   int s;
   for(int i=100;i<1000;i++)
   {
       int a=i;
       for(int k=0;k<3;k++)
       {
          int b = a%10;
          s +=  b*b*b;
          a/=10;
       }
       if(s==i)
       {
           printf("So do la : %d\n",i);
       }
       s=0;
   }
}
*/

/** Cau2: **/
/*
#include<stdio.h>
#include<math.h>

int kt(int n)
{
    int s=0;
    for(int i=1; i<n; i++)

        if(n%i==0)
        {
            s+=i;
        }
    if(s==n)
        {
       printf("So %d la so hoan hao\n",n);
        return 1;
        }
    else
        return 0;
}
void nhapHam(int a[],int n)
{
     for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    nhapHam(a,n);
    int luu=0;
    int min=1e9;
    for(int i=0; i<n; i++)
    {
        if(kt(a[i])==1)
        {
            if(a[i] < min)
            {
                min = a[i];
                luu = i;
            }
        }
    }
    printf("So hoan hao nho nhat la %d",a[luu]);
}
*/

/**
    DE 4: Cau1 : Nhập vào một kí tự. Kiểm tra xem kí tự đó là chữ cái,
                 chữ số hay các kí tự khác.
          Cau2 : Nhập dãy số thực a (sử dụng con trỏ). Sắp xếp dãy theo chiều giảm dần.
                 In ra dãy sau khi sắp xếp.
**/

/** Cau 1: **/
/*
#include<stdio.h>
#include<math.h>

int main()
{
    char c;
    scanf(" %c",&c);
    if(c>='0' && c<='9')
    {
        printf("c la ki tu so");
    }
    else if((c>='a' && c<='z') ||( c >= 'A' && c <= 'Z'))
    {
        printf("c la ki tu chu");
    }
    else
    {
        printf("c la ki tu khac");
    }
}
*/
/** Cau 2: **/
/*
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int *k= (int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++)
    {
        scanf("%d",k+i);
    }
    int tam;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(*(k+j)>*(k+i))
            {
                tam= *(k+i);
                *(k+i)=*(k+j);
                *(k+j)=tam;
            }
        }
    }
    printf("Mang sau khi sap xep la : \n");
    for(int i=0; i<n; i++)
    {
        printf("%d ",*(k+i));
    }
    free(k);
}
*/

/**
    DE 5: Cau1 : Viết chương trình tính tổng s:=12 + 22 + 32 + …… + n2 với n là số tự nhiên được nhập từ bàn phím
                 (nếu n<=0 thì chương trình yêu cầu nhập lại).
          Cau2 : Viết chương trình nhập một xâu kí tự, cho biết:
                   a)	Có bao nhiêu kí tự dạng chữ, dạng số, trắng và các kí tự đặc biệt.
                   b)	Kí tự dạng nào là nhiều nhất?
**/

/** Cau 1: **/
/*
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n;
    do
    {
        printf("Nhap du lieu cho n: ");
        scanf("%d",&n) ;
    }
    while(n<=0);
    int s=0;
    for(int i=1; i<=n; i++)
    {
        s+=pow(i,2);
    }
    printf("\n");
    printf("Tong day so cua bai toan la %d\n",s);
}
*/
/** Cau2 : **/
/*
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    char s[100];
    gets(s);
    int dem1=0,dem2=0,dem3=0,dem4=0;
    for(int i=0; s[i] != '\0'; i++)
    {
        if(s[i]>='0'&& s[i]<='9')
        {
            dem1++;
        }
        else if((s[i]>='a' && s[i]<='z') || ( s[i] >= 'A' && s[i]<= 'Z'))
        {
            dem2++;
        }
        else if(s[i]==' ')
        {
            dem3++;
        }
        else
        {
            dem4++;
        }
    }
    printf("So phan tu dang so la: ");
    printf("%d\n",dem1);
    printf("So phan tu dang chu la: ");
    printf("%d\n",dem2);
    printf("So phan tu dang khoang trang la: ");
    printf("%d\n",dem3);
    printf("So phan tu dang ki tu khac la: ");
    printf("%d\n",dem4);
    if(dem1>=dem2 && dem1>=dem3 &&dem1>=dem4)
    {
        printf("Ki tu so la nhieu nhat.");
    }
    else if(dem2>=dem1 && dem2>=dem3 &&dem2>=dem4)
    {
        printf("Ki tu chu la nhieu nhat.");
    }
    else if(dem3>=dem2 && dem3>=dem1 && dem3>=dem4)
    {
        printf("Ki tu trang la nhieu nhat.");
    }
    else
    {
        printf("Ki tu dac biet la nhieu nhat.");
    }

}
*/

/**
      DE6 : Cau1 : Nhập các hệ số, giải và biện luận hệ phương trình
            Cau2 : Nhập một chuỗi bất kì từ bàn phím, kiểm tra xem chuỗi có đối xứng hay không.
                   Nếu là chuỗi đối xứng thì đếm và in ra tổng các kí tự giống nhau ra màn hình.
                   Nếu không hãy in ra xâu đảo của xâu này.
**/

/** Cau 1: **/
/*
#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,d,e,f;
    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
    float D,D1,D2;

    D = a*e - b*d;
    D1 = c*e - b*f;
    D2 = a*f - d*c;

    if(D==0)
    {
        if(D1+D2 ==0)
        {
            printf("He phuong trinh vo so nghiem");
        }
        else
        {
            printf("He phuong trinh vo nghiem");
        }
    }
    else
    {
        printf("He phuong trinh co nghiem duy nhat:\n ");
        printf("x1 = %.2f\n",D1/D);
        printf("x2 = %.2f",D2/D);
    }
    return 0;
}
*/

/** Cau2 : **/
/*
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

int kiemTra(char a[])
{
    int l=0;
    int r= strlen(a)-1;
    int dem=0;
    while(l<r)
    {
        if(a[l]!=a[r])
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
    fgets(a,100,stdin);
    a[strlen(a)-1] = '\0';
    int dem=0;
    if(kiemTra(a)==1)
    {
        printf("Doi xung\n");
    }
    else
    {
        printf("Khong doi xung\n");
    }
    for(int i=0; i<strlen(a)/2; i++)
    {
        if(kiemTra(a))
        {
            dem++;
        }
    }
    printf("Co %d cap ki tu giong nhau \n",dem);
    if(kiemTra(a)==0)
    {
        strrev(a);   // ham strrev() la ham dao nguoc chuoi.
        printf("Xau ki tu sau khi dao nguoc lai la: ");
        puts(a);
    }
    return 0;
}
*/

/**
    DE7 :
            Cau1 : Nhập và in ma trận A=(aij)n*m, trong đó aij  là các số nguyên, n và m là hai số nguyên dương (1≤n,m≤5).
                   Tìm số nguyên dương nhỏ nhất trong ma trận.
                   Tính tổng của các phần tử trong ma trận.
            Cau2 : Viết chương trình nhập một xâu kí tự kiểm tra tính đối xứng của xâu,
                   nếu xâu không đối xứng hãy in mỗi kí tự trên một dòng.
**/

/**  Cau1: **/
/*
#include<stdio.h>
#include<math.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m];
    int min = 1e9;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]<min && a[i][j] >0)
            {
                min=a[i][j];
            }
        }
    }
    printf("\n");
    printf("So nguyen duong nho nhat trong ma tran la : %d\n",min);
    int tong=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            tong+=a[i][j];
        }
    }
    printf("Tong cac phan tu trong ma tran la: %d",tong);
    return 0;
}
*/

/**  Cau2: **/
/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int kiemTra(char a[])
{
    int l=0;
    int r=strlen(a)-1;
    while(l<r)
    {
       if(a[l]!=a[r])
       {
           return 0;
       }
       l++;
       r--;
    }
    return 1;
}
int kiemTra1(char a[])
{
    int l=0;
    int r=strlen(a)-1;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[l]!=a[r])
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
    char s[100];
    gets(s);
    if(kiemTra1(s))
    {
        printf("Doi xung");
    }
    else
    {
        printf("Khong doi xung\n");
    }
    if(kiemTra1(s)==0)
    {
        for(int i=0; i<strlen(s) ;i++)
        {
            printf("%c\n",s[i]);
        }
    }
   return 0;
}
*/

/**
    DE 8: Cau1 : Lập hàm tìm ước số chung lớn nhất và bội số chung nhỏ nhất của hai số nguyên bất kì.
                 Áp dụng viết chương trình tìm ước số chung lớn nhất và bội số chung nhỏ nhất của 4 số nguyên được nhập từ bàn phím.
          Cau2 : Nhập một dãy kí tự. Sắp xếp dãy theo chiều tăng của thứ tự từ điển, và in ra dãy được sắp xếp.
                 Tìm xem có kí tự e trong dãy hay không?
                 Nếu có thì xuất hiện bao nhiêu lần.
**/

/** Cau 1: **/
/*
#include<stdio.h>
#include<math.h>

int uocChung(int a,int b)
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
int boiChung(int a,int b)
{
    return a*b/uocChung(a,b);
}
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);

    int luu1 = uocChung(a,b);
    int luu2 = uocChung(c,d);
    int luu3 = uocChung(luu1,luu2);
    int luu4 = boiChung(a,b);
    int luu5 = boiChung(c,d);
    int luu6 = boiChung(luu4,luu5);
    printf("Boi chung nho nhat cua 4 so la: %d\n",luu6);
    printf("Uoc chung lon nhat cua 4 so la: %d\n",luu3);
    return 0;
}
*/

/** Cau 2: **/
/*
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    char a[100];
    fgets(a,100,stdin);

    for(int i=0; i<strlen(a)-1; i++)
    {
        for(int j=i+1; j<strlen(a); j++)
        {
            if(a[i]>a[j])
            {
                char t;
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("%s",a);
    int dem=0;
    printf("\n");
     for(int i=0; i<strlen(a); i++)
     {
         if(a[i]== 'e')
         {
             dem++;
         }
     }
     if(dem==0)
     {
         printf("Khong co ki tu e.");
     }
     else
     {
         printf("Ki tu e xuat hien %d lan.",dem);
     }
        return 0;
}
*/

/**
    DE9 : Cau1 : Nhập vào số nguyên n. Đếm xem số đó có bao nhiêu chữ số và tính tổng của chúng.
          Cau2 : Nhập dãy số thực a (sử dụng con trỏ).
                 Tìm các phần tử đạt giá trị lớn nhất và vị trí của chúng trong mảng.
                 Đếm các phần tử dương, phần tử âm, bằng 0.
**/

/** Cau 1: **/
/*
#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d",&n);
    int dem=0;
    int s=0;
    while(n>0)
    {
        s += n%10;
        dem++;
        n/=10;
    }
    printf("Tong cac chu so la: %d\n",s);
    printf("Co %d chu so tron phan tu n.\n",dem);
}
*/

/** Cau 2: **/
/*
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    float *a=(float*)malloc(n*sizeof(float));
    for(int i=0; i<n; i++)
    {
        scanf("%f",a+i);
    }
    float max = -1e9;
    int luu;
    for(int i=0; i<n; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            luu =i;
        }
    }
    printf("Phan tu dat gia tri lon nhat la: %.2f\n",max);
    printf("Phan tu dat max nam o vi tri thu %d trong mang.\n",luu+1);
    int dem1=0,dem2=0,dem3=0;
    for(int i=0;i<n;i++)
    {
        if(*(a+i)<0)
        {
            dem1++;
        }
        else if(*(a+i)==0)
        {
            dem2++;
        }
        else if(*(a+i)>0)
        {
            dem3++;
        }
    }
    printf("Trong mang co %d so am.\n",dem1);
    printf("Trong mang co %d so bang 0.\n",dem2);
    printf("Trong mang co %d so duong.\n",dem3);
    free(a);
}
*/
/**
     DE 10: Cau 1: Nhập từ bàn phím hai cạnh: chiều dài, chiều rộng của một hình chữ nhật(chiều dài lớn hơn 2 lần chiều rộng).
                   Hãy tính chu vi và diện tích của hình chữ nhật đó.
            Cau 2: Lập hàm kiểm tra số chính phương( Số chính phương là số bằng bình phương của một số nguyên nào đó).
                   Nhập dãy số nguyên dương. Xét xem trong dãy có số chính phương hay không?
                   Nếu có hãy in ra các số chính phương,
**/

/** Cau1 : **/
/*
#include<stdio.h>
#include<math.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);

    int chuVi = 2*(n+m);
    int dienTich = n*m;

    printf("Chu vi cua hinh chu nhat la: %d\n",chuVi);
    printf("Dien tich hinh chu nhat la: %d",dienTich);
    return 0;
}
*/

/** Cau2 : **/
/*
#include<stdio.h>
#include<math.h>

int kiemTra(int n)
{
    if(sqrt(n)*sqrt(n)==n)
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(kiemTra(a[i])==1)
        {
            printf("%d la so chinh phuong.\n",a[i]);
        }
    }
    return 0;
}
*/

/**
    DE 11: Cau1: Hãy nhập vào họ tên chủ hộ và chỉ số đầu, chỉ số cuối điện năng tiêu thụ của một tháng.
                 Tiền điện hàng tháng được tính như sau:
                    -	100 số đầu tính 500 đ /1 số
                    -	Từ số 101 trở lên tính 1000 đ/1số.
                 Hãy tính số tiền phải trả trong tháng đó và in ra họ tên chủ hộ và tiền điện phải trả.
           Cau2 : Nhập một xâu bất kỳ từ bàn phím. Đếm số ký tự ‘A’ trong một xâu,
                  Đưa ra vị trí xuất hiện ký tự đó trong xâu.
**/

/** Cau1 : **/
/*
#include<stdio.h>
#include<math.h>

int main()
{
    int star,end;
    char s[100];
    gets(s);
    scanf("%d%d",&star,&end);
    int a,b,c;
    c = end - star;
    if(c<=100)
    {
        a = 500* c;
        printf("Nha anh %s phai tra %d",s,a);
    }
    else
    {
        b = 100*500 + (c - 100)*1000;
        printf("Nha anh %s phai tra %d",s,b);
    }
    return 0;
}
*/

/** Cau2 : **/
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    char a[100];
    //fgets(a,50,stdin);
     gets(a);
    int dem=0;
    for(int i=0;a[i]!= '\0';i++)
    {
        if(a[i]=='A')
        {
           dem++;
           printf("Vi tri %d co ki tu A.\n",i+1);
        }
    }
    printf("Trong chuoi co tat ca %d ki tu A.",dem);
    return 0;
}
*/

/**
    DE 12: Cau1 : Vừa gà vừa chó bó lại cho tròn 36 con 100 chân chẵn. Hãy tìm số gà và số chó.
           Cau2 : Nhập một xâu bất kỳ từ bàn phím, in ra mỗi kí tự trên 1 dòng, kiểm tra xem xâu có đối xứng không?
                  Nếu không đói xứng thì in ra màn hình xâu đảo của xâu đã cho.
**/

/** Cau1 : **/
/*
#include<stdio.h>
#include<math.h>

int main()
{
    int ga,cho;
    for(int ga=0; ga <= 36; ga++)
    {
        cho = 36 - ga;
        if((ga*2 + 4*cho) ==100)
        {
            printf("So ga la: %d\n",ga);
            printf("So cho la: %d",cho);
            break;
        }

    }
    return 0;
}
*/

/** Cau2 : **/
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int kiemTra(char a[])
{
    int l=0;
    int r=strlen(a)-1;
    for(int i=0; a[i] != '\0'; i++)
    {
        if(a[l]!=a[r])
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
    gets(a);
    for(int i=0; i<strlen(a); i++)
    {
        printf("%c\n",a[i]);
    }
    if(kiemTra(a)==1)
    {
        printf("Xau doi xung");
    }
    else
    {
        printf("Xau khong doi xung\n");
        puts(strrev(a));
    }
    return 0;
}
*/

/**
    DE 13:
            Cau 1: Nhập 2 số  thực a, b từ bàn phím.
                   Viết chương trình tính toán (+,-,*,/) cho hai số thực này, khi lựa chọn một phép toán (+,-,*,/) từ bàn phím.
            Cau2 : Nhập ma trận thực bất kỳ, n hàng và m cột (sử dụng con trỏ).
                   Tính tổng các giá trị trên đường chéo chính, đường chéo phụ.
**/

/** Cau1 : **/
/*
#include<stdio.h>
#include<math.h>

int main()
{
    float a,b;
    char bien;
    printf("Nhap hai so a va b : ");
    scanf("%f%f",&a,&b);
    printf("Nhap phep tinh: ");
    getchar();
    scanf("%c",&bien);


    if(bien == '+')
    {
        printf("%f",a+b);
    }
    else if(bien=='-')
    {
        printf("%f",a-b);
    }
    else if(bien=='*')
    {
        printf("%f",a*b);
    }
    else if(bien=='/')
    {
        if (b == 0)
        {
            printf("Loi: khong the chia cho 0\n");
        }
        else
        {
            printf("%f",a/b);
        }
    }
    return 0 ;
}
*/

/** Cau2 : **/
/*
#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d",&n);
    int *a = (int*)malloc(n*n*sizeof(int));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",a + i*n+j);
        }
    }
    int s1=0,s2=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
            {
                s1+= *(a + i*n+j);
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i+j==n-1)
            {
                s2 +=  *(a + i*n+j);
            }
        }
    }
    printf("Tong tren duong cheo chinh la: %d\n",s1);
    printf("Tong tren duong cheo phu la: %d\n",s2);
    free(a);
}
*/
/**
      DE 14: Cau1 : Nhập họ tên, ngày, tháng năm sinh, hệ số lương (HSL), lương cơ bản của một người.
                    Tính tiền thưởng của người đó theo tiêu chuẩn: nếu HSL>6 thì  thưởng 100000, HSL>=5 và <6  thì thưởng 70000, còn lại thưởng 50000.
                    Tính tiền thực lĩnh của người đó.
             Cau2 : Nhập 2 ma trận nguyên vuông A, B cùng cấp. Tính ma trận tích C=A*B, in ra kết quả màn hình.
**/

/** Cau1 : **/

/*
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char hoTen[100];
    printf("Nhap ho va ten: ");
    gets(hoTen);
    int ngay,thang,nam;
    printf("Nhap ngay thang nam sinh: ");
    scanf("%d%d%d",&ngay,&thang,&nam);
    int heSoLuong;
    printf("Nhap he so luong: ");
    scanf("%d",&heSoLuong);
    int luongCoBan;
    printf("Nhap luong co ban: ");
    scanf("%d",&luongCoBan);
    int tienThuong;
    int tienThucLinh;

    if(heSoLuong > 6)
    {
        tienThuong = 100000;
    }
    else if(heSoLuong >=5 && heSoLuong <6)
    {
        tienThuong = 70000;
    }
    else
    {
        tienThuong = 50000;
    }
    tienThucLinh = luongCoBan + tienThuong;
    printf("So tien thuc linh cua nguoi do la: %d",tienThucLinh);
    return 0;
}
*/

/** Cau2 : **/
/*
#include<stdio.h>
#include<math.h>

void nhapMaTran(int n,int a[][n])
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
int main()
{
    int n;
    printf("Nhap cap cua ma tran: ");
    scanf("%d",&n);
    int a[n][n],b[n][n],c[n][n];
    printf("Nhap ma tran a:\n");
    nhapMaTran(n,a);
    printf("\n");
    printf("Nhap ma tran b: \n");
    nhapMaTran(n,b);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            c[i][j]=0;
            for(int k=0; k<n; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("\n");
    printf("Ma tran C la: \n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

/**
    DE 15: Cau1 : Nhập số tự nhiên n (1≤n≤10) và dãy số thực a1, a2, …an. In lại dãy số.
                  Hãy tính S = a1 – a2 +a3 – a4+…+(-1)nan.
           Cau2 : Xây dựng kiểu cấu trúc phân số. Tính tổng, tích của hai phân số bất kỳ được nhập bất kỳ từ bàn phím
**/

/** Cau1 : **/
/*
#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Nhap so tu nhien n: ");
    scanf("%d",&n);
    float a[100];
    printf("Nhap day so thuc a: ");
    for(int i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    printf("Day so duoc in lai la: ");
    for(int i=0;i<n;i++)
    {
        printf("%.2f  ",a[i]);
    }
    int s1=0,s2=0;
    printf("\n");
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s1+=a[i];
        }
        else
        {
            s2-=a[i];
        }
    }
    int s = s1+s2;
    printf("Tong day so la: %d",s);
    return 0;
}
*/

/** Cau2 : **/
/*
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

struct phanSo
{
    int tuSo;
    int mauSo;
};
typedef struct phanSo ps;

void nhapphanSo(ps *a)
{
    printf("Nhap tu so: ");
    scanf("%d",&a->tuSo);
    getchar();
    printf("Nhap mau so: ");
    scanf("%d",&a->mauSo);
}
void inPhanSo(ps a)
{

    if(a.mauSo<0)
    {
        a.mauSo*=-1;
        a.tuSo*=-1;
    }
    printf("%d/%d",a.tuSo,a.mauSo);
}
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

ps rutGon(ps a)
{
    int u= ucln(a.mauSo,a.tuSo);
    a.mauSo/=u;
    a.tuSo /=u;
    return a;
}
ps congPhanSo(ps a,ps b)
{
    ps c;
    c.tuSo = a.tuSo*b.mauSo+b.tuSo*a.mauSo;
    c.mauSo = a.mauSo*b.mauSo;
    return rutGon(c);
}
ps nhanPhanSo(ps a,ps b)
{
    ps c;
    c.tuSo = a.tuSo*b.tuSo;
    c.mauSo = a.mauSo*b.mauSo;
    return rutGon(c);
}


int main()
{
    ps a,b,tong,tich;
    printf("Nhap phan so a:\n");
    nhapphanSo(&a);
    printf("Nhap phan so b:\n");
    getchar();
    nhapphanSo(&b);

    tong = congPhanSo(a,b);
    tich = nhanPhanSo(a,b);

    printf("Tong hai phan so la: ");
    inPhanSo(tong);
    printf("\n");
    printf("Tich hai phan so la: ");
    inPhanSo(tich);
    printf("\n");

    return 0;
}

*/

/**
      DE 16: Cau1 : Nhập từ bàn phím một mảng số nguyên (kích thước mảng n:1≤n≤10 ).
                    In ra màn hình các phần tử chia hết cho 3, in ra trung bình cộng của các phần tử này.
             Cau2 : Nhập một xâu ký tự. Đổi xâu thành xâu chữ thường,
                    Từ đó in xâu mới ra màn hình.
                    Và in xâu đảo ngược của xâu đó.
**/

/**  Cau1: **/
/*
#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    int dem=0;
    int s=0;
    printf("Cac so chia het cho 3 la: ");
    for(int i=0; i<n; i++)
    {
        if(a[i]%3==0)
        {
            dem++;
            printf("%d ",a[i]);
            s+=a[i];
        }
    }
    printf("\n\n");
    printf("Trung binh cong cac so chia het cho 3 la: %.2f\n",(float)s/dem);
    return 0;
}
*/

/**  Cau2  **/
/*
#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    printf("Nhap vao xau ki tu: ");
    gets(a);
    printf("Xau ki tu khi doi thanh chu thuong la: ");

    for(int i=0;i<strlen(a);i++)
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

/**
    DE 17: Cau1 : Nhập số nguyên dương x. Cho biết số nguyên dương này có bao nhiêu chữ số. Tính tổng: các chữ số của số nguyên này
                  (Vd:  263 có 3 chữ số và tổng=2+6+3=11).
           Cau2 : Nhập dãy số nguyên dương. In ra dãy số này. Xét xem đây có phải là dãy số tăng hay không?
**/

/**  Cau1  **/
/*
#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Nhap so n: ");
    scanf("%d",&n);
    int dem=0;
    int tong=0;
    while(n!=0)
    {
        int k = n%10;
        dem++;
        tong+=k;
        n/=10;
    }
    printf("So vua nhap co %d chu so.\n",dem);
    printf("Tong cac chu so co trong so n la: %d",tong);
}
*/

/**  Cau2  **/
/*
#include<stdio.h>

int kiemTra(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        if(a[i]>a[i+1])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    printf("Nhap so duong n: ");
    scanf("%d",&n);
    int a[n];
    printf("Nhap day so nguyen duong: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(kiemTra(a,n)==1)
    {
        printf("Ham tang.");
    }
    else
    {
        printf("Ham khong tang.");
    }
    return 0;
}
*/

/**
    DE 18: Cau1 : Nhập số nguyên (0≤n≤10), số thực x. Tính
                  a)	S1 = 1 +x2 + ….+ x n
                  b)	S2 =
           Cau2 : Xây dựng kiểu dữ liệu cấu trúc hình chữ nhật có các thành phần dữ liệu là chiều dài, chiều rộng, chu vi, diện tích.
                  Viết chương trình nhập dữ liệu cho một mảng cấu trúc hình chữ nhật, in ra diện tích và chu vi của các hình chữ nhật.
**/

/**  Cau1  **/
/*
#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d",&n);
    float x;
    printf("Nhap so nguyen x: ");
    scanf("%f",&x);
    int tong = 0;
    for(int i=2;i<=n;i++)
    {
        tong += pow(x,i);
    }
    printf("\n");
    printf("Tong cua cau a la: ");
    printf("%d",1+tong);
    printf("\n");
    printf("Tong cua cau b la: ");
    printf("%.2f",(float)sqrt(1+tong));
}
*/

/**  Cau2  **/
/*
#include<stdio.h>
#include<math.h>

struct HinhChuNhat
{
    float chieuDai;
    float chieuRong;
    float chuVi;
    float dienTich;
};
typedef struct HinhChuNhat hcn;

int main()
{
    int n;
    printf("Nhap so luong hinh chu nhat: ");
    scanf("%d",&n);
    hcn mangHinhChuNhat[n];

    for(int i=0; i<n; i++)
    {
        printf("Nhap chieu dai va chieu rong la: ");
        scanf("%f%f",&mangHinhChuNhat[i].chieuDai,&mangHinhChuNhat[i].chieuRong);
        mangHinhChuNhat[i].chuVi = 2*(mangHinhChuNhat[i].chieuDai+mangHinhChuNhat[i].chieuRong);
        mangHinhChuNhat[i].dienTich = mangHinhChuNhat[i].chieuDai*mangHinhChuNhat[i].chieuRong;
    }
    printf("Chu vi va dien tich cua hinh chu nhat vua nhap la: \n");
    for(int i=0; i<n; i++)
    {
        printf("Chu vi la: %.2f\n",mangHinhChuNhat[i].chuVi);
        printf("Dien tich la: %.2f\n",mangHinhChuNhat[i].dienTich);
    }
}
*/

/**
    DE19: Cau1 :Giải và biện luận phương trình bậc hai ax2+bx+c=0 (không kể trường hợp suy biến).
          Cau2 :Xây dựng kiểu dữ liệu cấu trúc hình tròn có các thành phần dữ liệu chính là tọa độ tâm (x,y) của hình tròn và bán kính (R).
                Viết chương trình nhập dữ liệu cho một mảng cấu trúc hình tròn, tính diện tích của các hình tròn.
                In ra thông tin của các hình tròn này
**/

/**  Cau1  **/
/*
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define VO_NGHIEM 0
#define MOT_NGHIEM 1
#define HAI_NGHIEM 2
#define NGHIEM_KEP 3
#define VO_SO_NGHIEM 4

int main()
{
    float a,b,c,x1,x2,delta;
    printf("Nhap he so a b c : ");
    scanf("%f%f%f",&a,&b,&c);
    int songhiem;

    if(a==0)
    {
        if(b==0)
        {
            if(c==0)
            {
                songhiem = VO_SO_NGHIEM;
            }
            else
            {
                songhiem = VO_NGHIEM;
            }
        }
        else
        {
            songhiem = MOT_NGHIEM;
        }
    }
    else
    {
        delta = b*b - 4*a*c;

        if(delta<0)
        {
            songhiem = VO_NGHIEM;
        }
        else if(delta==0)
        {
            songhiem = NGHIEM_KEP;
        }
        else
        {
            songhiem = HAI_NGHIEM;
        }
    }

    if(songhiem == 0)
    {
        printf("Phuong trinh vo nghiem.");
    }
    else if (songhiem == 1)
    {
        printf("Phuong trinh co mot nghiem la: %f.",-c/b);
    }
    else if (songhiem == 2)
    {
        x1 = (-b + sqrt(delta))/2*a;
        x2 = (-b - sqrt(delta))/2*a;
        printf("Phuong trinh co hai nghiem phan biet : \n");
        printf("x1 = %.2f\n",x1);
        printf("x2 = %.2f\n", x2);
    }
    else if(songhiem == 3)
    {
        printf("Phuong trinh co nghiem kep la: x1=x2= %.2f.",-b/2*a);
    }
    else
    {
        printf("Phuong trinh co vo so nghiem.");
    }
    return 0;
}
*/

/**  Cau2  **/
/*
#include<stdio.h>
#include<math.h>
#define PI 3.14

struct HinhTron
{
    float x;
    float y;
    float r;
    float dt;
};
typedef struct HinhTron ht;

void NHAPDULIEU(ht a[],int n)
{
    printf("Nhap du lieu cho hinh tron: \n");
    for(int i =0;i<n;i++)
    {
        printf("Nhap x va y:");
        scanf("%f%f",&a[i].x,&a[i].y);
        printf("Nhap ban kinh r: ");
        scanf("%f",&a[i].r);
        a[i].dt = a[i].r * a[i].r *PI;
    }
}

void INDULIEU(ht a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Toa do tam cua hinh tron la:(%.2f,%.2f).\n",a[i].x,a[i].y);
        printf("Ban kinh cua hinh tron nay la: %.2f.\n",a[i].r);
        printf("Dien tich hinh tron nay la: %.2f.\n",a[i].dt);
    }
}

int main()
{
    int n;
    printf("Nhap so n: ");
    scanf("%d",&n);
    ht a[n];
    NHAPDULIEU(a,n);
    INDULIEU(a,n);
    return 0;
}
*/

/**
    DE 20: Cau1 :  Giải và biện luận bất phương trình bậc nhất ax+b < 0.
           Cau2 :  Lập hàm tính n!. Áp dụng viết chương trình tính biểu thức:
                   s=1+ + +…+
                Với 0<n<=7;
**/

/**  Cau1  **/
/*
#include<stdio.h>
#define VONGHIEM 0
#define MOTNGHIEM 1
#define VOSONGHIEM 2
int main()
{
    float a,b;
    printf("Nhap so a b: ");
    scanf("%f%f",&a,&b);
    float x;
    int songhiem;
    if(a==0)
    {
        if(b>=0)
        {
          songhiem = VONGHIEM;
        }
        else
        {
            songhiem = VOSONGHIEM;
        }
    }
    else
        {
            songhiem = MOTNGHIEM;
        }
    if(songhiem == 0 )
    {
        printf("Bat phuong trinh vo nghiem.");
    }
    else if(songhiem == 1)
    {
        x = -b/a;
        printf("Bat phuong trinh co nghiem x < %.2f",x);
    }
    else
    {
        printf("Bat phuong trinh co vo so nghiem.");
    }
    return 0;
}
*/

/**  Cau2:  **/
/*
#include<stdio.h>
#include<math.h>

int hamTinhgiaithua(int n)
{
    float s=1;
    for(int i=2;i<=n;i++)
    {
       s*=i ;
    }
    return s;
}
int main()
{
    float n;
    printf("Nhap so n: ");
    scanf("%f",&n);

    float tong = 0;
    for(int i=1;i<=n;i++)
    {
        float tu = 1;
        float mau = hamTinhgiaithua(i);
        tong += tu/mau;
    }
    printf("Tong cua day la: %f",tong);
}
*/

/**
      DE21 : Cau1 : Giải và biện luận phương trình trùng phương: ax4 + bx2 + c = 0. (a≠0).
             Cau2 : Lập hàm kiểm tra các số hoàn hảo(là số có tổng các ước của nó bằng chính nó).
                    Áp dụng viết chương trình in ra các số hoàn hảo và vị trí của chúng trong một ma trận nguyên, tính tổng các số đó.
**/

/**  Cau1:  **/
/*
#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c,x1,x2,x3,x4,delta,xa,xb;
    printf("Nhap ba so a b c: ");
    scanf("%lf%lf%lf",&a,&b,&c);

    delta = b*b -4*a*c;
    if(delta <0)
    {
        printf("PHUONG TRINH VO NGHIEM.\n");
    }
    else if(delta ==0)
    {
        xa = xb = -b/2*a;
        if(xa>=0)
        {
            printf("PHUONG TRINH CO HAI NGHIEM\n");
            printf("x1 = %.2lf\n",sqrt(xa));
            printf("x2 = %.2lf\n",-sqrt(xb));
        }
        else
        {
            printf("Phuong trinh vo nghiem.");
        }
    }
    else
    {
        xa = (-b + sqrt(delta))/(2*a);
        xb = (-b - sqrt(delta))/(2*a);
        printf("%lf %lf",xa,xb);
        if(xa >=0 && xb <0 )
        {
            printf("Phuong trinh co hai ngiem phan biet:\n");
            printf("x1 = %.2lf\n",sqrt(xa));
            printf("x2 = %.2lf\n",-sqrt(xa));
        }
        if(xa<0 && xb >= 0)
        {
            printf("Phuong trinh co hai ngiem phan biet:\n");
            printf("x1 = %.2lf\n",sqrt(xb));
            printf("x2 = %.2lf\n",-sqrt(xb));
        }
        if(xa >= 0 && xb >= 0)
        {
            printf("Phuong trinh co 4 nghiem phan biet: \n");
            printf("x1 = %.2lf\n",sqrt(xa));
            printf("x2 = %.2lf\n",-sqrt(xa));
            printf("x3 = %.2lf\n",sqrt(xb));
            printf("x4 = %.2lf\n",-sqrt(xb));
        }
        if(xa<0 && xb<0)
        {
            printf("Phuong trinh vo nghiem.");
        }
    }
    return 0;
}
*/

/**  Cau2:  **/
/*
#include<stdio.h>
#include<math.h>

int kiemTra(int n)
{
    int s=0;
    if(n==0)
    {
        return 0;
    }
    else
    {
        for(int i=1; i<n; i++)
        {
            if(n%i==0)
            {
                s+=i;
            }
        }
    }
    if(n==s)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,m;
    printf("Nhap so n,m: ");
    scanf("%d%d",&n,&m);
    int a[n][m];
    printf("Nhap ma tran : \n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    int luu1=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(kiemTra(a[i][j])==1)
            {
                printf("So hoan hao la: %d.\n",a[i][j]);
                printf("No nam hang %d cot %d\n",i,j);
                luu1 += a[i][j];
            }
        }
    }
    printf("\nTong cac so hoan hao la: %d",luu1);
    return 0;
}
*/

/**
    DE 22: Cau1 : Viết chương trình tính toán: cộng, trừ, nhân, chia cho hai số thực bất kỳ được nhập từ bàn phím. (Phép toán được lựa chọn từ bàn phím).
           Cau2 : Viết chương trình nhập mảng kí tự một chiều, kiểm tra xem mảng này có đối xứng hay không?
                  Nếu không hãy đảo ngược mảng này và in ra màn hình.
**/

/**  Cau1:  **/
/*
#include<stdio.h>
#include<string.h>

int main()
{
    float a,b;
    printf("Nhap vao hai so: ");
    scanf("%f%f",&a,&b);
    char c;
    printf("Nhap phep tinh can tinh: ");
    getchar();
    scanf("%c",&c);

    switch(c)
    {
    case '+':
       printf("%.2f + %.2f = %f",a,b,a+b);
       break;
    case '-':
       printf("%.2f - %.2f = %.2f",a,b,a-b);
       break;
    case '*':
       printf("%.2f x %.2f = %.2f",a,b,a*b);
       break;
    case '/':
        if(b!=0)
          printf("%.2f : %.2f = %.2f",a,b,(float)a/b);
        else
          printf("Phep toan khong hop le");
    }
    return 0;
}
*/

/**  Cau2:  **/
/*
#include<stdio.h>
#include<string.h>

int kiemTra(char a[])
{
    int l=0;
    int r= strlen(a)-1;
    for(int i=0;i<strlen(a);i++)
    {
        if(a[l]!=a[r])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char a[100];
    printf("Nhap mang a: ");
    gets(a);
    if(kiemTra(a))
    {
        printf("DOI XUNG");
    }
    else
    {
        printf("KHONG DOI XUNG\n");
        printf("Mang dao nguoc la: ");
        puts(strrev(a));
    }
}
*/

/**
      DE23 : Cau1 : Viết chương trình nhập tháng, năm bất kỳ từ bàn phím. Hãy cho biết tháng này trong năm có bao nhiêu ngày.
             Cau2 : Lập hàm kiểm tra số nguyên lẻ, kiểm tra số nguyên chẵn.
                    Áp dụng viết chương trình nhập một mảng nguyên một chiều.
                    In ra màn hình các số nguyên chẵn và các số nguyên lẻ trên hai dòng khác nhau của một mảng nguyên một chiều.
**/

/**  Cau1:  **/
/*
#include<stdio.h>

int kiemTra(int n)
{
    if(n%400==0 || (n%4==0&&n%100!=0))
      {
        return 1;
      }
    else
      {
        return 0;
      }
}

int main()
{
    int thang,nam;
    printf("Nhap vao thang nam bat ky: ");
    scanf("%d%d",&thang,&nam);

    switch(thang)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("Thang nay trong nam co 31 ngay.");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("Thang nay trong nam co 30 ngay.");
        break;
    case 2:
        if(kiemTra(nam))
        {
            printf("Thang nay trong nam co 29 ngay.");
        }
        else
        {
            printf("Thang nay trong nam co 28 ngay");
        }
    }
    return 0;
}
*/

/**  Cau2:  **/
/*
int chanLe(int n)
{
    if(n%2!=0)
    {
        return 0;
    }
    return 1;
}
int main()
{
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d",&n);
    int a[n];
    printf("Nhap mang so nguyen: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Cac so nguyen chan la: ");
    for(int i=0; i<n; i++)
    {
        if(chanLe(a[i])==1)
        {
            printf("%d ",a[i]);
        }
    }
    printf("\n");
    printf("Cac so nguyen le la: ");
    for(int i=0; i<n; i++)
    {
        if(chanLe(a[i])==0)
        {
            printf("%d ",a[i]);
        }
    }
    return 0;
}
*/

/**
    DE24 : Cau1: Viết chương trình nhập dữ liệu cho một sinh viên bao gồm các thông tin sau: mã sinh viên (masv), họ tên sinh viên (hoten), lớp (lop), điểm toán (dtoan), điểm tin (dly), điểm tiếng Anh (dta). Tính điểm trung bình của sinh viên này . Sau đó in ra màn hình giấy báo điểm của sinh viên này theo mẫu sau:
           Giấy báo điểm sơ kết học kỳ II, năm học 2004-2005
           Mã sinh viên	Họ tên	Lớp	Điểm toán	Điểm tin	Điểm TA	Điểm TB
           ….	….	….
           Cau2 : Viết chương trình nhập một ma trận thực. Tính tổng các phần tử trên các cột của ma trận. Tìm cột có tổng lớn nhất.
**/

/**  Cau1:  **/
/*
#include<stdio.h>

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

int main()
{
    sv a;
    printf("Nhap ma sinh vien: ");
    gets(a.masv);
    printf("Nhap ho ten sinh vien: ");
    gets(a.hoten);
    printf("Nhap lop: ");
    gets(a.lop);
    printf("Nhap dien toan: ");
    scanf("%f",&a.dtoan);
    printf("Nhap diem tin: ");
    scanf("%f",&a.dtin);
    printf("Nhap diem tieng anh: ");
    scanf("%f",&a.dta);

    float diemTB = (a.dta+a.dtin+a.dtoan)/3;

    printf("\t\tGIAY BAO DIEM SO KET HOC KY II , NAM HOC 2004-2005\n");
    printf("%10s%10s%10s%15s%15s%10s%10s\n","Ma sinh vien","Ho ten","Lop","Diem toan","Diem tin","Diem TA","Diem TB");
    printf("%5s%13s%10s%15.2f%15.2f%10.2f%10.2f",a.masv,a.hoten,a.lop,a.dtoan,a.dtin,a.dta,diemTB);
    return 0;
}
*/

/**  Cau2:  **/
/*
#include<stdio.h>

int main()
{
    int n,m;
    printf("Nhap so nguyen n m: ");
    scanf("%d%d",&n,&m);
    int a[n][m];
    printf("Nhap ma tran: \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int max=-1e9,luu1 = 0,luu2=0;
    for(int i=0;i<m;i++)
    {
         int tong =0;
        for(int j=0;j<n;j++)
        {
          tong += a[j][i];
        }
        if(tong>max)
        {
            max = tong;
            luu1 = i;
            luu2 = tong;
        }
        printf("Cot%d co tong la %d\n",i+1,tong);
    }
    printf("Cot %d co tong lon nhat la %d",luu1+1,luu2);
    return 0;
}
*/

/**
    DE 25: Cau1 : Viết chương trình tính biểu thức:
                  S =     với 0<n<=100
           Cau2 : Viết chương trình tính tổng các đường viền(là các phần tử nằm trên hàng 0 hoặc cột 0 hoặc hành n-1 hoặc cột n-1), tổng các đường chéo chính, đường chéo phụ của một ma trận thực vuông.
**/

/**  Cau1:  **/
/*
#include<stdio.h>
#include<math.h>

int main()
{
   int n;
   printf("Nhap so n: ");
   scanf("%d",&n);
   float s=0;
   for(int i=1;i<=n;i++)
   {
       s += 1/pow(i,2);
   }
   printf("Tong cua day la: %.3f",s);
}
*/

/**  Cau2:  **/
/*
#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Nhap cap cua ma tran: ");
    scanf("%d",&n);
    int a[n][n];
    printf("Nhap ma tran : \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int tongDuongVien=0;
    int tongDuongcheo=0;
    for(int i=0;i<n;i++)
    {
        tongDuongcheo += a[i][i];
        tongDuongcheo += a[i][n-1-i];
    }
    for(int i=0;i<n;i++)
    {
        tongDuongVien += a[0][i];
        tongDuongVien += a[i][0];
        tongDuongVien += a[n-1][i];
        tongDuongVien += a[i][n-1];
    }
    printf("\n");
    printf("Tong duong vien la: %d\n",tongDuongVien);
    printf("Tong duong cheo la: %d\n",tongDuongcheo);
    return 0;
}
*/

/**
    DE 26: Cau1: Nhập số n nguyên dương. Tính:



           n!!=
           Cau2 : Nhập một xâu ký tự từ bàn phím. Đếm số ký tự là chữ, là số, là trắng, là khác. Cho biết loại nào nhiều nhất.
**/

/**  Cau1:  **/
/*
#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Nhap so n: ");
    scanf("%d",&n);9
    int tichChan = 1;
    int tichLe = 1;

    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            tichChan *= i;
        }
        else
        {
            tichLe*=i;
        }
    }
    printf("\nTich chan la: %d",tichChan);
    printf("\nTich le la: %d",tichLe);
    return 0;
}
*/

/**  Cau2:  **/
/*
#include<stdio.h>
#include<string.h>

int main()
{
    char a[20];
    printf("Nhap xau ky tu: ");
    gets(a);
    int demChu=0,demSo=0,demTrang=0,demKhac=0;

    for(int i=0;i<strlen(a);i++)
    {
        if((a[i] >='A'&& a[i]<='Z')|| a[i]>='a'&&a[i]<='z')
        {
            demChu++;
        }
        else if(a[i]>='1'&& a[i]<='9')
        {
            demSo++;
        }
        else if(a[i]==' ')
        {
            demTrang++;
        }
        else
        {
            demKhac++;
        }
    }
    printf("\nSo ki tu chu la: %d",demChu);
    printf("\nSo ki tu so la: %d",demSo);
    printf("\nSo ki tu trang la: %d",demTrang);
    printf("\nSo ki tu khac la: %d",demKhac);

    if(demChu>=demSo && demChu >=demTrang && demChu >= demKhac)
    {
        printf("\nSo ki tu lon nhat la demChu : %d ki tu\n",demChu);
    }
    else if(demSo>=demChu && demSo >=demTrang && demSo >= demKhac)
    {
        printf("\nSo ki tu lon nhat la demSo : %d ki tu\n",demSo);
    }
    else if(demTrang>=demChu && demTrang >=demSo && demChu >= demKhac)
    {
        printf("\nSo ki tu lon nhat la demTrang : %d ki tu\n",demTrang);
    }
    else if(demKhac>=demChu && demKhac >=demTrang && demKhac >= demSo)
    {
        printf("\nSo ki tu lon nhat la demKhac : %d ki tu\n",demKhac);
    }
    return 0;
}
*/

/**
    DE27: Cau1 : Giải bài toán cổ: trăm trâu trăm cỏ, trâu đứng ăn năm, trâu nằm ăn ba, lụ khụ trâu già, ba con một bó. Tìm số trâu mỗi loại
          Cau2 : Nhập một xâu ký tự từ bàn phím. Nhập một kí tự bất kí tự từ bàn phím, kiểm tra xem có kí tự này trong xâu hay chưa? Nếu có hãy đưa ra màn hình vị trí đầu tiên mà kí tự này xuất hiện trong xâu.
**/

/**  Cau1:  **/
/*
#include<stdio.h>
#include<math.h>

int main()
{
    int x , y, z;
    for(x = 1; x<20; x++){
        for(y = 1; y<33; y++){
            z = 100 - (x+y);
            if(((x + y + z) == 100) && (x*15 + y*9 + z) == 300){
                printf("So trau dung: %d",x);
                printf("\nSo trau nam: %d",y);
                printf("\nSo trau gia: %d\n\n",z);
            }
        }
    }
}
*/

/**  Cau2:  **/
/*
#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    char c;
    printf("Nhap ki tu bat ky: ");
    scanf("%c",&c);
    printf("Nhap xau ki tu: ");
    getchar();
    gets(a);
    int luu =-1;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]== c)
        {
            printf("KY TU NAY CO TRONG CHUOI.\n");
            luu =i;
            break;
        }
    }
    if(luu==-1)
    {
        printf("KY TU NAY KHONG CO TRONG CHUOI.");
    }
    else
    {
        printf("KY TU NAY XUAT HIEN LAN DAU TAI VI TRI %d",luu+1);
    }
    return 0;
}
*/

/**
     DE28 : Cau1 : Nhập vào số nguyên N ( 0<=N <=100). In ra màn hình các số chẵn k, và tính trung bình cộng (0< k<=N).
            Cau2 : Viết hàm sắp xếp dãy theo chiều giảm dần giá trị của các phần tử trong mảng. Áp dụng viết chương trình nhập mảng và sắp xếp mảng theo chiều giảm dần giá trị của các phần tử trong mảng thực kích thước n bất kỳ được nhập từ bàn phím.
**/

/**  Cau1:  **/
/*
#include<stdio.h>

int main()
{
    int n;
    printf("Nhap so n: ");
    scanf("%d",&n);
    int dem =0;
    float s=0;
    printf("Cac so chan co trong day la: ");
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
            dem++;
            s+=i;
        }
    }
    printf("\nTrung binh cong cac so chan trong day la: %.2f",s/dem);
}
*/

/**  Cau2:  **/
/*
#include<stdio.h>
#include<math.h>

int xapXep(int a[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            int tam;
            if(a[i]>a[j])
            {
                tam = a[i];
                a[i]= a[j];
                a[j]= tam;
            }
        }
    }
}
int main()
{
    int n;
    printf("Nhap so phan tu cua mang la: ");
    scanf("%d",&n);
    int a[n];
    printf("Nhap mang a: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    xapXep(a,n);
    printf("Mang sau khi sap xep la: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
*/

/**
    DE29 : Cau1 : Nhập vào số nguyên N (0<=N <=100). In các số lẻ k ra màn hình và tính trung bình cộng của các số đó( 0<k<=N).
           Cau2 : Xây dựng cấu trúc dữ liệu phân số với hai thành phần dữ liệu là tử số và mẫu số. Viết chương trình nhập một phân số bất kỳ từ bàn phím. In ra màn hình phân số rút gọn của phân số này.
**/

/**  Cau1:  **/
/*
#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Nhap vao so nguyen n: ");
    scanf("%d",&n);
    int dem=0;
    float tong= 0;
    printf("Cac so le co trong day la: ");
    for(int i=1;i<=n ;i++)
    {
        if(i%2==1)
        {
            printf("%d ",i);
            dem++;
            tong+= i;
        }
    }
    printf("\nTrung binh cong cua cac so le co trong day la: %.2f",tong/dem);
    return 0;
}
*/

/**  Cau2:  **/
/*
#include<stdio.h>
#include<math.h>

struct phanSO
{
    int tu;
    int mau;
};
typedef struct phanSO ps;

int ucln(int a,int b)
{
    if(a==0||b==0)
        return a+b;
    a = abs(a);
    b = abs(b);
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

ps rutgon(ps *a)
{
    int u = ucln(a->tu,a->mau);
    a->tu/=u;
    a->mau/=u;
}
void nhapPS(ps *a)
{
    printf("Nhap tu so: ");
    scanf("%d",&a->tu);
    printf("Nhap mau so: ");
    scanf("%d",&a->mau);
}

void xuatPS(ps a)
{
    if(a.mau <0)
    {
        a.mau *= -1;
        a.tu  *= -1;
    }
    rutgon(&a);
    if(a.mau==1)
       printf("%d",a.tu);
    else
       printf("%d/%d",a.tu,a.mau);
}
int main()
{
    ps a;
    printf("Nhap phan so: \n");
    nhapPS(&a);
    printf("Phan so rut gon cua phan so vua nhap la: ");
    xuatPS(a);
}
*/
/**
    DE 30: Cau1 : Nhập vào tên một hàng hóa, số lượng và đơn giá. Tính thành tiền và thuế VAT (10%) thành tiền. In lại các thông tin lên  màn hình.
           Cau2 : Xây dựng cấu trúc  học sinh gồm các thông tin: họ tên, điểm trung bình(DTB).
                  a.	Viết chương trình nhập vào một danh sách học sinh.
                  b.	In ra danh sách các học sinh đạt kết quả khá (DTB >=7).
                  c.	Tìm và in ra học sinh có điểm trung bình cao nhất.
**/

/**  Cau1:  **/
/*
#include<math.h>

struct nhapHH
{
    char hangHoa[20];
    int soLuong;
    int gia;
    int giatien;
    int thuevat;
};
typedef struct nhapHH hh;
int giaTien(hh *a)
{
    a->giatien = a->gia * a->soLuong;
    a->thuevat =(a->giatien * 10)/100;
}
int main()
{
    hh a;
    printf("Nhap ten hang hoa: ");
    gets(a.hangHoa);
    printf("Nhap so luong: ");
    scanf("%d",&a.soLuong);
    printf("Nhap gia: ");
    scanf("%d",&a.gia);
    giaTien(&a);
    printf("So tien phai tra la: %d\n",a.giatien);
    printf("So tien thue phai tra la: %d\n",a.thuevat);
}
*/

/**  Cau2:  **/
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct dulieu
{
    char hoTen[50];
    float diemTB;
};
typedef struct dulieu ds;
void nhapdanhsachSV(ds *a,int n)
{
    for(int i=0; i<n; i++)
    {
        printf("Nhap du lieu sinh vien thu %d\n",i+1);
        printf("Nhap ho va ten : ");
        getchar();
        gets((a+i)->hoTen);
        printf("Nhap diem : ");
        scanf("%f",&(a+i)->diemTB);
    }
}
void xuatdanhsachSV(ds *a,int n)
{
    for(int i=0; i<n; i++)
    {
        printf("Xuat danh sach sinh vien thu %d\n",i+1);
        printf("Ho va ten :%s \n",(a+i)->hoTen);
        printf("Diem trun binh :%.2f ",(a+i)->diemTB);
        printf("\n");
    }
}
void xuatdanhsachSVcoDTBlonhon7(ds *a,int n)
{
    for(int i=0;i<n;i++)
    {
        if((a+i)->diemTB > 7)
        {
            printf("\nSinh vien co diem trung binh lon hon 7 la: \n");
            printf("%s",(a+i)->hoTen);
        }
    }
}
void xuatdanhsachSVcodiemtrungbinhcaonhat(ds *a,int n)
{
    int max = (a+0)->diemTB;
    int luu =0;
    for(int i=0;i<n;i++)
    {
        if((a+i)->diemTB > max)
        {
            max = (a+i)->diemTB;
            luu = i;
        }
    }
    printf("\nHoc sinh co diem trung binh cao nhat la:\n");
    printf("%-30s %5.2f\n",(a+luu)->hoTen,(a+luu)->diemTB);
}
void xuatdanhsachSVtheotencacsinhvien(ds *a,int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(strcmp((a+i)->hoTen, (a+j)->hoTen) > 0)
            {
                ds temp = *(a+i);
                *(a+i) = *(a+j);
                *(a+j) = temp;
            }
        }
    }
}
int main()
{
    int n ;
    printf("Nhap so luong sinh vien: ");
    scanf("%d",&n);

    ds *a=(ds*)malloc(n*sizeof(ds));
    nhapdanhsachSV(a,n);
    xuatdanhsachSV(a,n);
    xuatdanhsachSVcoDTBlonhon7(a,n);
    xuatdanhsachSVcodiemtrungbinhcaonhat(a,n);
    xuatdanhsachSVtheotencacsinhvien(a,n);
    xuatdanhsachSV(a,n);
    free(a);
}
*/

/**
    DE 31:  Cau1 :	Xây dựng cấu trúc  học sinh gồm các thông tin: họ tên, điểm trung bình (ĐTB).
                    a.	Viết chương trình nhập vào một danh sách học sinh.
                    b.	In ra danh sách các học sinh đạt kết quả khá (điểm trung bình >=7).
                    c.	Tìm và in ra học sinh có điểm trung bình cao nhất.
                    d.	In ra danh sách học sinh có kết quả kém (ĐTB<5).
                    e.	In ra danh sách học sinh có kết quả giỏi (ĐTB>=8).
                    f.	Sắp xếp danh sách theo họ tên, in lại danh sách sau khi sắp xếp.
            Cau2 :	Nhập một dãy số nguyên từ file input.dat sắp xếp theo thứ tự tăng dần rồi ghi vào file output.dat
            Cau3 :	Viết hàm nhập 10 số thực từ bàn phím vào file văn bản tên là INPUT.DAT.
                    Viết hàm đọc các số nguyên từ file trên và ghi những số chia hết cho 3 vào file OUTPUT1.DAT,
                    những số chia 3 dư 1 vào file OUTPUT2.DAT, những số chia 3 dư 2 vào file OUTPUT3.DAT.
            Cau4 :	Cho một file n*m số dạng văn bản INPUT.DAT được ghi liên tục.
                    Hãy đọc và ghi lại vào file RESULT.DAT thành dạng ma trận n dòng, m cột.
**/

/**  Cau 2: **/
/*
#include<stdio.h>

int main()
{
    FILE *f= fopen("intput.dat","w");
    if(f==NULL)
    {
        printf("LOI MO FILE.");
        return 0;
    }
    int n;
    scanf("%d",&n);
    int a[n];
    fprintf(f,"%d\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n ;i++)
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
    FILE *f= fopen("intput.dat","r");
    if(f==NULL)
    {
        printf("LOI MO FILE.");
        return 0;
    }
    int n;
    fscanf(f,"%d",&n);
    int a[n];
    printf("%d\n",n);
    for(int i=0;i<n;i++)
    {
        fscanf(f,"%d",&a[i]);
    }
    for(int i=0;i<n ;i++)
    {
       printf("%d ",a[i]);
    }
    fclose(f);
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
///*
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
//*/
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





