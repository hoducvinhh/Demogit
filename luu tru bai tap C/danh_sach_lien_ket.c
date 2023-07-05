/*
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>

struct node
{
    int x;
    struct node *next;
};
typedef struct node node;

node *taoNode(int data)
{
    node *pnode = (node*)malloc(sizeof(node));
    pnode->x = data;
    pnode->next = NULL;
    return pnode;
}

struct TList
{
    node *first;
};
typedef struct TList TList;

TList *capPhatDanhSach()
{
    TList *list = (TList*)malloc(sizeof(TList));
    list->first = NULL;
    return list;
}

void themPhanTuDauTien(TList *list, node *pnode)
{
    list->first = pnode;
    pnode->next = NULL;
}

void themVaoDau(TList *list, node *pnode)
{
    if(list->first == NULL)
    {
        themPhanTuDauTien(list,pnode);
    }
    else
    {
        pnode->next = list->first;
        list->first = pnode;
    }
}

void hienThiDanhSach(TList *list)
{
    if(list->first!=NULL)
    {
        for(node *i= list->first ; i!= NULL; i=i->next)
        {
            printf("%d ",i->x);
        }
    }
}

node *timnodecuoi(TList *list)
{
    if(list->first == NULL)
    {
        return NULL;
    }
    else
    {
        node *last = list->first;
        while(last->next !=NULL)
        {
            last = last->next;
        }
        return last;
    }
}

void themVaoCuoi(TList *list,node *pnode)
{
    if(list->first == NULL)
    {
        themPhanTuDauTien(list,pnode);
    }
    else
    {
        node *last = timnodecuoi(list);
        last->next = pnode;
        pnode->next = NULL;
    }
}

node *timnodetheodata(TList *list,int data)
{
        if(list->first == NULL)
        {
            return NULL;
        }
        else
        {
            for(node *i=list->first;i!=NULL;i=i->next)
            {
                if(i->x==data)
                {
                    return i;
                }
            }
        }
        return NULL;
}
void themPNodeSauQNode (TList* list, node *pNode, node* qNode)
{
    pNode->next = qNode->next;
    qNode->next = pNode;
}

void xoaNode (TList* list, node* delNode)
{
    if(list->first == NULL)
    {
        return;
    }
    if(list->first == delNode)
    {
        list->first = list->first->next;
        free(delNode);
    }
    else
    {
        node *predelNode = list->first;
        while(predelNode->next != delNode)
        {
            predelNode = predelNode->next;
        }
            predelNode->next = delNode->next;
            free(delNode);
        }
    }


void xoaDanhSach(TList *list)
{
    while(list->first != NULL)
    {
        xoaNode(list,list->first);
    }
}

int nhapData()
{
    int x;
    scanf("%d",&x);
    return x;
}
int main()
{
    TList* list = capPhatDanhSach();
    themVaoDau(list,taoNode(nhapData()));
    themVaoDau(list,taoNode(nhapData()));
    themVaoDau(list,taoNode(nhapData()));
    hienThiDanhSach(list);
    return 0;
}
*/

/*
>first == NULL)
    {
        return;
    }
    if(list->first == delNode)
    {
        list#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#include<stdbool.h>

struct sinhvien
{
    char hoTen[20];
    int tuoi;
    float diemTB;
};
typedef struct sinhvien sv;

sv nhapSinhVien()
{
    sv x;
    printf("Ho ten: ");
    getchar();
    gets(x.hoTen);
    printf("Tuoi: ");
    scanf("%d",&x.tuoi);
    printf("Diem trung binh: ");
    scanf("%f",&x.diemTB);
    return x;
}

struct node
{
    sv x;
    struct node *next;
};
typedef struct node node;

node *taonode(sv data)
{
    node *pnode = (node*)malloc(sizeof(node));
    pnode->x = data;
    pnode->next = NULL;
    return pnode;
}

struct TList
{
    node *first;
};
typedef struct TList TList;

TList *capPhatDanhSach()
{
    TList *list = (TList*)malloc(sizeof(TList));
    list->first = NULL;
    return list;
}


void themPhanTuDauTien(TList *list, node *pnode)
{
    list->first = pnode;
    pnode->next = NULL;
}

void themVaoDau(TList *list, node *pnode)
{
    if(list->first == NULL)
    {
        themPhanTuDauTien(list,pnode);
    }
    else
    {
        pnode->next = list->first;
        list->first = pnode;
    }
}

void hienThiSinhVien(sv x)
{
    printf("%20s%10d%10.2f\n",x.hoTen,x.tuoi,x.diemTB);
}
void hienThiDanhSach(TList *list)
{
    printf("\t\tDANH SACH SINH VIEN\n");
    printf("\t%5s%20s%10s%10s\n","STT","HO TEN", "TUOI", "DIEMTB");
    if(list->first!=NULL)
    {
        int stt= 1;
        for(node *i= list->first ; i!= NULL; i=i->next)
        {
            printf("\t%5d",stt++);
            hienThiSinhVien(i->x);
        }
    }
}

node *timnodecuoi(TList *list)
{
    if(list->first == NULL)
    {
        return NULL;
    }
    else
    {
        node *last = list->first;
        while(last->next !=NULL)
        {
            last = last->next;
        }
        return last;
    }
}

void themVaoCuoi(TList *list,node *pnode)
{
    if(list->first == NULL)
    {
        themPhanTuDauTien(list,pnode);
    }
    else
    {
        node *last = timnodecuoi(list);
        last->next = pnode;
        pnode->next = NULL;
    }
}

node *timnodetheotensinhvien(TList *list,char *data)
{
    if(list->first == NULL)
    {
        return NULL;
    }
    else
    {
        for(node *i=list->first; i!=NULL; i=i->next)
        {
            if(strcmp(i->x.hoTen,data)==0)
            {
                return i;
            }
        }
    }
    return NULL;
}
void themPNodeSauQNode (TList* list, node *pNode, node* qNode)
{
    pNode->next = qNode->next;
    qNode->next = pNode;
}

void xoaNode (TList* list, node* delNode)
{
    if(list-->first = list->first->next;
        free(delNode);
    }
    else
    {
        node *predelNode = list->first;
        while(predelNode->next != delNode)
        {
            predelNode = predelNode->next;
        }
        predelNode->next = delNode->next;
        free(delNode);
    }
}


void xoaDanhSach(TList *list)
{
    while(list->first != NULL)
    {
        xoaNode(list,list->first);
    }
}

void inMenu()
{
    printf("\t\tMENU\n");
    printf("\t1. Tao danh sach sinh vien\n");
    printf("\t2. Hien thi danh sach sinh vien\n");
    printf("\t3. Chen them sinh vien\n");
    printf("\t4. Xoa sinh vien theo ten\n");
    printf("\t5. Sua sinh vien theo ten\n");
    printf("\t0. Ket thuc\n");
    printf("\t\t");
}

TList *taoDanhSach(int n)
{
    TList *list = capPhatDanhSach();
    for(int i=1; i<=n; i++)
    {
        printf("Nhap thong tin sinh vien thu %d\n",i);
        themVaoCuoi(list,taonode(nhapSinhVien()));
    }
    return list;
}
int main()
{
    TList *list = capPhatDanhSach();
    while(true)
    {
        inMenu();
        printf("Vui long chon: ");
        int chon;
        scanf("%d",&chon);
        system("cls");
        switch(chon)
        {
        case 1:
        {
            printf("Ban da chon tao danh sach sinh vien: \n");
            int n;
            printf("Nhap so luong sinh vien:");
            scanf("%d",&n);
            list = taoDanhSach(n);
            break;
        }
        case 2:
        {
            hienThiDanhSach(list);
            break;
        }
        case 3:
        {
            char hoten[20];
            printf("Nhap ten sinh vien truoc vi tri muon chen:");
            getchar();
            gets(hoten);
            if(timnodetheotensinhvien(list,hoten)==NULL)
            {
                printf("Khong tim thay sinh vien.");
            }
            else
            {
                printf("Nhap thong tin sinh vien can them: \n");
                themPNodeSauQNode(list,taonode(nhapSinhVien()),timnodetheotensinhvien(list,hoten));
                printf("Da them xong");
            }
            break;
        }
        case 4:
        {
            char hoten[20];
            printf("Nhap ten sinh vien can xoa:");
            getchar();
            gets(hoten);
            if(timnodetheotensinhvien(list,hoten)==NULL)
            {
                printf("Khong tim thay sinh vien.");
            }
            else
            {
                xoaNode(list,timnodetheotensinhvien(list,hoten));
                printf("Da xoa xong");
            }
            break;
        }
        case 5:
        {
            char hoten[20];
            printf("Nhap ten sinh vien can sua:");
            getchar();
            gets(hoten);
            if(timnodetheotensinhvien(list,hoten)==NULL)
            {
                printf("Khong tim thay sinh vien.");
            }
            else
            {
                printf("Nhap lai thong tin sinh vien\n");
                sv a = nhapSinhVien();
                timnodetheotensinhvien(list,hoten)->x = a;
                printf("Da xong");
            }
            break;
        }
        case 0:
        {
            printf("GB");
            break;
        }
        default :
            printf("Chi nhap tu 0 den 5");
        }
        printf("Nhap phim bat ki de tro ve.");
        getch();
        system("cls");
    }
    return 0;
}

*/
/*
#include<stdio.h>

int main()
{
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d",&n);
    int a[n];
    printf("Nhap mang: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x;
    printf("Nhap so can thao tac voi day: ");
    scanf("%d",&x);
    int dem=0;
    for(int i=0;i<n;i++)
    {
        if(i==x)
        {
            dem++;
        }
    }
    if(dem==0)
    {
        printf("So %d khong co trong day.",x);
    }
    else
    {
        printf("So %d co trong day va xuat hien %d lan.",x,dem);
    }
    return 0;
}
*/
/*
#include<stdio.h>
#include<math.h>

int ucll(int a,int b)
{
    if(a==0||b==0)
    {
        return a+b;
    }
    else
    {
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
}

int bcnn(int a,int b)
{
    return (a*b)/ucll(a,b);
}
int main()
{
    int a,b;
    printf("Nhap hai so nguyen duong a b: ");
    scanf("%d%d",&a,&b);
    printf("Uoc chung lon nhat cua hai so a b la %d \n",ucll(a,b));
    printf("Boi chung nho nhat cua hai so a b la %d ",bcnn(a,b));
    return 0;
}

*/
/*
#include<stdio.h>

int main()
{
    int n,m;
    printf("Nhap kich thuoc cua hinh chu nhat rong: ");
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==0||i==n-1)
            {
                printf("*\t");
            }
            else if(j==0 || j==m-1)
            {
                printf("*\t");
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
/*
#include<stdio.h>

int main()
{
    int n;
    printf("Nhap so luong phan tu cua day: ");
    scanf("%d",&n);
    int a[n];
    printf("Nhap day so: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    float dem=0;
    float s=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>5 && a[i]%2==0)
        {
            s+=a[i];
            dem++;
        }
    }
    printf("Trung binh cong cua cac so chan lon hon 5 la %.2f",s/dem);
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
   for(int i=2;i<=sqrt(a);i++)
   {
       if(a%i==0)
       {
           return 0;
       }
   }
   return 1;
}
int main()
{
    int n;
    do
    {
        printf("Vui long nhap so nguyen duong n: ");
        scanf("%d",&n);
    }while(n<=0);
    printf("Cac so nguyen to nho hon n la: ");
    for(int i=0;i<n;i++)
    {
        if(kiemTra(i))
        {
            printf("%d ",i);
        }
    }
    return 0;
}
*/
/*
#include<stdio.h>
#include<math.h>

int check(int a)
{
    int x= sqrt(a);
    if(x*x==a)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    do
    {
        printf("Vui long nhap so nguyen duong n: ");
        scanf("%d",&n);
    }while(n<=0);
    printf("Cac so chinh phuong nho hon n la: ");
    for(int i=0;i<n;i++)
    {
        if(check(i))
        {
            printf("%d ",i);
        }
    }
    return 0;
}
*/
/*
#include <stdio.h>
#include<math.h>

int main()
{
    float soTienGoc;
    scanf("%f",&soTienGoc);
    int thang=0;
    float A= soTienGoc;
    while(A<1.5* soTienGoc)
    {
        A+=A*0.008;
        thang++;
    }
    printf("%d",thang);
    return 0;
}
*/

/*
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

struct sinhvien
{
    char hoten[20];
    float tuoi;
    float diemTB;
};
typedef struct sinhvien sv;

struct node
{
    sv a;
    struct node *next;
};
typedef struct node node;

node *taonode(sv x)
{
    node *pnode = (node*)malloc(sizeof(node));
    pnode->a = x;
    pnode->next=NULL;
    return pnode;
}

sv nhapsinhvien()
{
    sv x;
    printf("Ho ten: ");
    getchar();
    gets(x.hoten);
    printf("Tuoi: ");
    scanf("%f",&x.tuoi);
    printf("Diem trung binh: ");
    scanf("%f",&x.diemTB);
    return x;
}
struct TList
{
    node *first;
};
typedef struct TList TList;

TList *capPhatDS()
{
    TList *list =(TList*)malloc(sizeof(TList));
    list->first = NULL;
    return list;
}

void themPhantudautien(TList *list,node *pnode)
{

    list->first = pnode;
    pnode->next= NULL;

}

void themvaodau(TList *list,node *pnode)
{
    if(list->first==NULL)
    {
        themPhantudautien(list,pnode);
    }
    else
    {
        pnode->next = list->first;
        list->first = pnode;
    }
}

void hienthisinhvien(sv x)
{
    printf("%20s%10f%10.2f\n",x.hoten,x.tuoi,x.diemTB);
}
void hienthidanhsachsinhvien(TList *list)
{
    printf("\t\tDANH SACH SINH VIEN\n");
    printf("\t%5s%20s%10s%10s\n","STT","HO TEN", "TUOI", "DIEMTB");
    if(list->first!=NULL)
    {
        int STT = 1;
        for(node *i=list->first; i!=NULL; i=i->next)
        {
            printf("\t%5d",STT++);
            hienthisinhvien(i->a);
        }
    }
}

node *timsinhvientheodata(TList *list,char *data)
{
    if(list->first == NULL)
    {
        return NULL;
    }
    else
    {
        for(node *i=list->first ; i!=NULL; i=i->next)
        {
            if(strcmp(i->a.hoten,data)==0)
            {
                return i;
            }
        }
    }
    return NULL;
}

void inMEnu()
{
    printf("\t\tMENU\n");
    printf("\t1. Tao danh sach sinh vien\n");
    printf("\t2. Hien thi danh sach sinh vien\n");
    printf("\t3. Chen them sinh vien\n");
    printf("\t4. Xoa sinh vien theo ten\n");
    printf("\t5. Sua sinh vien theo ten\n");
    printf("\t0. Ket thuc\n");
    printf("\t\t");
}

node* timphantucuoi(TList *list)
{
    if(list->first==NULL)
        return NULL;
    else
    {
        node *last = list->first;
        while(last->next !=NULL)
        {
            last = last->next;
        }
        return last;
    }
}
void themvaocuoi(TList *list,node *pnode)
{
    if(list->first==NULL)
        themPhantudautien(list,pnode);
    else
    {
        node *last = timphantucuoi(list);
        last->next=pnode;
        pnode->next= NULL;
    }
}
TList *taodanhsach(int n)
{
    TList *list = capPhatDS();
    for(int i=1; i<=n; i++)
    {
        printf("Nhap thong tin sinh vien thu %d\n",i);
        themvaocuoi(list,taonode(nhapsinhvien()));
    }
    return list;
}
int main()
{
    TList *list = capPhatDS();
    while(true)
    {
        inMEnu();
        printf("Vui long chon: ");
        int chon;
        scanf("%d",&chon);
        system("cls");
        switch(chon)
        {
        case 1:
        {
            printf("Nhap so luong sinh vien: ");
            int n;
            scanf("%d",&n);
            list = taodanhsach(n);
            break;
        }
        case 2:
        {
            hienthidanhsachsinhvien(list);
            break;
        }
        }

        printf("Nhap phim bat ki de tro ve.");
        getch();
        system("cls");
    }

}

//*/
/*

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<stdbool.h>

struct sinhvien
{
    char soBaoDanh[10];
    char hoTen[20];
    float diemToan;
    float diemLy;
    float diemTA;
    float tongDiem;
};
typedef struct sinhvien sv;

struct node
{
    sv data;
    struct node *next;
};
typedef struct node node;
struct TList
{
    node *first;
};
typedef struct TList TList;

sv nhapData()
{
    sv x;
    printf("Nhap ho ten: ");
    getchar();
    gets(x.hoTen);
    printf("Nhap so bao danh: ");
    gets(x.soBaoDanh);
    printf("Nhap diem toan: ");
    scanf("%f",&x.diemToan);
    printf("Nhap diem ly: ");
    scanf("%f",&x.diemLy);
    printf("Nhap diem tieng anh: ");
    scanf("%f",&x.diemTA);
    x.tongDiem=x.diemToan+x.diemLy+x.diemTA;
    return x;
}

TList *capPhatDanhSach()
{
    TList *list= (TList*)malloc(sizeof(TList));
    list->first = NULL;
    return list;
}

node *taoNode(sv a)
{
    node *pnode = (node*)malloc(sizeof(node));
    pnode->data = a;
    pnode->next = NULL;
    return pnode;
}

void themPhantudautien(TList *list,node *pnode)
{

    list->first = pnode;
    pnode->next= NULL;

}
void themVaoDau(TList *list, node *pnode)
{
    if(list->first==NULL)
    {
        themPhantudautien(list,pnode);
    }
    else
    {
        pnode->next = list->first;
        list->first = pnode;
    }
}

node *timPhanTuCuoi(TList *list)
{
    if(list->first==NULL)
    {
        return NULL;
    }
    else
    {
        node *last = list->first;
        while(last->next!=NULL)
        {
            last = last->next;
        }
        return last;
    }
}

void themVaoCuoi(TList *list, node *pnode)
{
    if(list->first==NULL)
    {
        themPhantudautien(list,pnode);
    }
    else
    {
        node *prenodelast = timPhanTuCuoi(list);
        prenodelast->next= pnode;
        pnode->next = NULL;
    }
}


void hienThiSinhVien(sv x)
{
    printf("%10s%20s%18.2f%10.2f%10.2f%13.2f\n",x.soBaoDanh,x.hoTen,x.diemToan,x.diemLy,x.diemTA,x.tongDiem);
}
TList *taoDanhSachSinhVien(int n)
{
    TList *list = capPhatDanhSach();
    for(int i=1; i<=n; i++)
    {
        printf("Nhap thong tin sinh vien thu %d\n",i);
        themVaoCuoi(list,taoNode(nhapData()));
    }
    return list;
}
void hienthidanhsachsinhvien(TList *list)
{
    printf("\t\tDANH SACH SINH VIEN\n");
    printf("\t%5s%10s%20s%20s%10s%10s%10s\n","STT", "SO BAO DANH","HO TEN", "DIEM TOAN", "DIEM LY","DIEM TA", "TONG");
    if(list->first!=NULL)
    {
        int STT = 1;
        for(node *i=list->first; i!=NULL; i=i->next)
        {
            printf("\t%5d",STT++);
            hienThiSinhVien(i->data);
        }
    }
}
#define SAP_XEP_THE0_TOAN 1
#define SAP_XEP_THE0_LY 2
#define SAP_XEP_THE0_ANH 3
#define SAP_XEP_THE0_TONGDIEM 4

void inMEnu()
{
    printf("\tMENU\n");
    printf("\t1.Tao danh sach sinh vien\n");
    printf("\t2.Hien thi danh sach thi sinh\n");
    printf("\t3.Sap xep theo diem thi\n");
    printf("\t0.Ket thuc\n");
    printf("\t\t");
}

void sapXep(TList *list, int n)
{
    switch(n)
    {
    case 1:
    {
        for(node *i=list->first; i!= NULL; i=i->next)
        {
            for(node *j=i->next; j!=NULL; j=j->next)
            {
                if(j->data.diemToan > i->data.diemToan)
                {
                    sv tam = i->data;
                    i->data = j->data;
                    j->data = tam;
                }
            }
        }
        break;
    }
    case 2:
    {
        for(node *i=list->first; i!= NULL; i=i->next)
        {
            for(node *j=i->next; j!=NULL; j=j->next)
            {
                if(j->data.diemLy > i->data.diemLy)
                {
                    sv tam = i->data;
                    i->data = j->data;
                    j->data = tam;
                }
            }
        }
        break;
    }
    case 3:
    {
        for(node *i=list->first; i!= NULL; i=i->next)
        {
            for(node *j=i->next; j!=NULL; j=j->next)
            {
                if(j->data.diemTA > i->data.diemTA)
                {
                    sv tam = i->data;
                    i->data = j->data;
                    j->data = tam;
                }
            }
        }
        break;
    }
    case 4:
    {
        for(node *i=list->first; i!= NULL; i=i->next)
        {
            for(node *j=i->next; j!=NULL; j=j->next)
            {
                if(j->data.tongDiem > i->data.tongDiem)
                {
                    sv tam = i->data;
                    i->data = j->data;
                    j->data = tam;
                }
            }
        }
        break;
    }
    default :
    {
        printf("Chi nhap tu 0->4.");
        break;
    }
    }
}
void inMENUsapxep()
{
    printf("\t\t1.Theo diem toan\n");
    printf("\t\t2.Theo diem Ly\n");
    printf("\t\t3.Theo diem Anh\n");
    printf("\t\t4.Theo tong diem\n");
}
int main()
{
    TList *list = capPhatDanhSach();
    while(true)
    {
        inMEnu();
        printf("Vui long chon: ");
        int chon;
        scanf("%d",&chon);
        system("cls");
        switch(chon)
        {
        case 1:
        {
            printf("Nhap so luong sinh vien can tao: ");
            int n;
            scanf("%d",&n);
            list = taoDanhSachSinhVien(n);
            break;
        }
        case 2:
        {
            hienthidanhsachsinhvien(list);
            break;
        }
        case 3:
        {
            inMENUsapxep();
            printf("Vui long chon: ");
            int k;
            scanf("%d",&k);
            switch(k)
            {
            case 1:
            {
                sapXep(list,1);
                hienthidanhsachsinhvien(list);
                break;
            }
            case 2:
            {
                sapXep(list,2);
                hienthidanhsachsinhvien(list);
                break;
            }
            case 3:
            {
                sapXep(list,3);
                hienthidanhsachsinhvien(list);
                break;
            }
            case 4:
            {
                sapXep(list,4);
                hienthidanhsachsinhvien(list);
                break;
            }
            }
        }
        case 0 :
        {
            printf("Ket thuc\n");
            break;
        }
        default :
        {
            printf("Chi chon tu 0 den 3\n");
            break;
        }
        }
        printf("Nhan phim bat ki de tro ve");
        getch();
        system("cls");
    }
}

*/
/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<windows.h>
#include<conio.h>

void nhapMang(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

void inMang(int a[],int x)
{
   for(int i=0;i<x;i++)
   {
       printf("%d ",a[i]);
   }
}

void Menu()
{
    printf("\t1.Nhap 2 day so\n");
    printf("\t2.Ghep hai day so\n");
    printf("\t3.In 3 day so\n");
    printf("\t4.Ket thuc\n");
}

int ghepMang(int a[],int b[],int c[],int x,int y)
{
    int i=0,j=0,k=0;
    while(i<x&&j<y)
        {
            if(a[i]<b[j])
            {
                c[k] = a[i];
                k++;
                i++;
            }
            else
            {
                c[k] = b[j];
                k++;
                j++;
            }
        }

        while(i<x)
        {
            c[k]=a[i];
            k++;
            i++;
        }

        while(j<y)
        {
            c[k]=b[j];
            k++;
            j++;
        }
}
int main()
{

        int n1,n2,n3;
        int a[100],b[100],c[200];
    while(true)
    {
        Menu();
        printf("Vui long chon: ");
        int chon;
        scanf("%d",&chon);
        switch(chon)
        {
        case 1:
            {

                printf("Nhap so luong phan tu mang 1: ");
                scanf("%d",&n1);
                printf("Nhap mang 1: ");
                nhapMang(a,n1);
                printf("Nhap so luong phan tu mang 2: ");
                scanf("%d",&n2);
                printf("Nhap mang 2: ");
                nhapMang(b,n2);
                break;
            }
        case 2:
            {
                ghepMang(a,b,c,n1,n2);
                printf("\nDa xong");
                break;
            }
        case 3:
            {
                printf("Day 1: ");
                inMang(a,n1);
                printf("\n");
                printf("Day 2: ");
                inMang(b,n2);
                printf("\n");
                printf("Day sai khi sap xep: ");
                inMang(c,n1+n2);
                break;
            }
        case 4:
            {
                printf("Ket thuc");
                break;
            }
        default :
            {
                printf("Chi chon tu 1->4");
                break;
            }
        }
        printf("\nNhan bat ki de tro ve");
        getch();
        system("cls");
    }
}
*/
/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

struct sinhvien
{
    char maSV[10];
    char hoTen[20];
    int namSinh;
};
typedef struct sinhvien sv;

void taoDanhSach()
{
    FILE *f = fopen("DS_SV.C", "wb");
    if(f==NULL)
    {
        printf("LOI MO FILE.");
        return;
    }
    sv x;
    int n;
    printf("Nhap so luong sinh vien can tao: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Nhap thong tin sinh vien thu %d:\n",i+1);
        printf("Nhap ma sinh vien: ");
        getchar();
        gets(x.maSV);

        printf("Nhap ho ten sinh vien: ");
        getchar();
        gets(x.hoTen);

        printf("Nhap nam sinh cua sinh vien: ");
        scanf("%d",&x.namSinh);

        fwrite(&x,sizeof(sv),1,f);
    }
    fclose(f);
    printf("Tao danh sach sinh vien thanh cong.\n");
}

void hienDanhSach()
{
    FILE *f = fopen("DS_SV.C", "rb");
    if(f==NULL)
    {
        printf("LOI MO FILE");
        return;
    }
    sv x;
    int i=1;
    printf("%5s %10s %30s %10s\n","STT", "Ma SV", "Ho ten", "Nam sinh");
    while(fread(&x,sizeof(sv),1,f)!=0)
    {
        printf("%5d %10s %30s %10d\n", i, x.maSV, x.hoTen, x.namSinh);
        i++;
    }
    fclose(f);
}

void suaThongTin()
{
    FILE *f = fopen("DS_SV.C", "rb");
    if(f == NULL) {
        printf("Khong the mo file.\n");
        return;
    }
    sv x;
    char k[50];
    printf("Nhap ma sinh vien can sua: ");
    fflush(stdin);
    gets(k);
    while(fread(&x,sizeof(sv),1,f))
    {
        if(strcmp(k,x.maSV)==0)
        {
           printf("Nhap thong tin moi cho sinh vien %s:\n",k);
            printf("Ho ten: ");
            scanf("%s", x.hoTen);
            printf("Nam sinh: ");
            scanf("%d", &x.namSinh);

            fseek(f, (-sizeof(sv)),SEEK_CUR);
            fwrite(&x,sizeof(sv),1,f);
            printf("Sua thong tin thanh cong\n");
        }
        fclose(f);
    }
    printf("Khong tim thay sinh vien co ma %s\n",k);
    fclose(f);
}

void inMenu()
{
    printf("\t1.Tao danh sach\n");
    printf("\t2.Hien thi danh sach\n");
    printf("\t3.Sua thong tin sinh vien\n");
    printf("\t4.Ket thuc\n");
}
int main()
{
    int chon;
    while(true)
    {
        inMenu();
        printf("Vui long chon:");
        scanf("%d",&chon);
        switch(chon)
        {
        case 1:
            {
                taoDanhSach();
                break;
            }
        case 2:
            {
                hienDanhSach();
                break;
            }
        case 3:
            {
                suaThongTin();
                break;
            }
        case 4:
            {
                printf("Ket thuc chuong trinh\n");
                return 0;
            }
        default :
            {
                printf("Chi chon tu 0->4\n");
            }
        }
    }
}
*/
///*

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
#include<stdbool.h>

struct sinhvien
{
    char hoTen[20];
    char maSV[10];
    int diemToan;
    int diemLy;
    int diemTA;
    int tongDiem;
};
typedef struct sinhvien sv;

struct node
{
    sv data;
    struct node *next;
};
typedef struct node node;

struct TList
{
    node *first;
};
typedef struct TList TList;

node *taonode(sv a)
{
    node *pnode = (node*)malloc(sizeof(node));
    pnode->data = a;
    pnode ->next  = NULL;
    return pnode;
}

TList *capPhatDS()
{
    TList *list = (TList*)malloc(sizeof(TList));
    list->first = NULL;
    return list;
}

sv nhapdata()
{
    sv x;
    printf("Nhap ho ten: ");
    fflush(stdin);
    gets(x.hoTen);
    printf("Nhap ma sinh vien: ");
    fflush(stdin);
    gets(x.maSV);
    printf("Nhap diem toan: ");
    scanf("%d",&x.diemToan);
    printf("Nhap diem Ly: ");
    scanf("%d",&x.diemLy);
    printf("Nhap diem TA: ");
    scanf("%d",&x.diemTA);

    x.tongDiem = x.diemLy + x.diemTA + x.diemToan;
    return x;
}

void hienThisinhvien(sv x)
{
    printf("%10s%10s%14d%10d%10d%10d\n",x.maSV,x.hoTen,x.diemToan,x.diemLy,x.diemTA,x.tongDiem);
}

void themPhantudautien(TList *list, node *pnode)
{
    list->first=pnode;
    pnode->next= NULL;
}

void themVaoDau(TList *list, node *pnode)
{
    if(list->first==NULL)
    {
        themPhantudautien(list,pnode);
    }
    else
    {
        pnode->next = list->first;
        list->first = pnode;
    }
}

node *timPhanTuCuoi(TList *list)
{
    if(list->first==NULL)
    {
        return NULL;
    }
    else
    {
        node *last = list->first;
        while(last->next!=NULL)
        {
            last = last->next;
        }
        return last;
    }

}

void themVaoCuoi(TList *list,node *pnode)
{
    if(list->first == NULL)
    {
        themPhantudautien(list,pnode);
    }
    else
    {
        node *prenode = timPhanTuCuoi(list);
        prenode->next  = pnode;
        pnode->next = NULL;
    }
}
TList *taoDanhSachsinhvien(TList *list,int n)
{
    for(int i=0; i<n; i++)
    {
        printf("Nhap du lieu cua sinh vien thu %d\n",i+1);
        themVaoCuoi(list,taonode(nhapdata()));
    }
    printf("Da nhap xong\n");
    return list;
}
void hienTHidanhsach(TList *list)
{
    printf("\t\tDANH SACH SINH VIEN\n");
    printf("\t%5s%10s%10s%14s%10s%10s%10s\n","STT", "MA SV","HO TEN", "DIEM TOAN", "DIEM LY","DIEM TA", "TONG");
    if(list->first!=NULL)
    {
        int stt= 1;
        for(node *i=list->first;i!=NULL;i= i->next)
        {
            printf("\t%5d",stt++);
            hienThisinhvien(i->data);
        }
    }
}
#define sapxeptheotoan 1
#define sapxeptheoly 2
#define sapxeptheoanh 3
#define sapxeprheotong 4

void sapSep(TList *list,int n)
{
    switch(n)
    {
    case 1:
        {
            for(node *i= list->first ;i != NULL; i= i->next)
            {
                for(node *j= i->next;j!=NULL;j=j->next)
                {
                    if(i->data.diemToan < j->data.diemToan)
                    {
                        sv tam = i->data;
                        i->data = j->data;
                        j->data = tam;
                    }
                }
            }
            break;
        }
    case 2:
        {
            for(node *i= list->first ;i != NULL; i= i->next)
            {
                for(node *j= i->next;j!=NULL;j=j->next)
                {
                    if(i->data.diemLy < j->data.diemLy)
                    {
                        sv tam = i->data;
                        i->data = j->data;
                        j->data = tam;
                    }
                }
            }
            break;
        }
    case 3:
        {
            for(node *i= list->first ;i != NULL; i= i->next)
            {
                for(node *j= i->next;j!=NULL;j=j->next)
                {
                    if(i->data.diemTA < j->data.diemTA)
                    {
                        sv tam = i->data;
                        i->data = j->data;
                        j->data = tam;
                    }
                }
            }
            break;
        }
    case 4:
        {
            for(node *i= list->first ;i!= NULL; i= i->next)
            {
                for(node *j= i->next;j!=NULL;j=j->next)
                {
                    if(i->data.tongDiem < j->data.tongDiem)
                    {
                        sv tam = i->data;
                        i->data = j->data;
                        j->data = tam;
                    }
                }
            }
            break;
        }
    default :
        {
            printf("Chi nhap tu 0->4\n");
            break;
        }
    }
}

void inMEnu()
{
    printf("\tMENU\n");
    printf("\t1.Tao danh sach sinh vien\n");
    printf("\t2.Hien thi danh sach thi sinh\n");
    printf("\t3.Sap xep theo diem thi\n");
    printf("\t4.Sua du lieu sinh vien\n");
    printf("\t5.Chen them sinh vien\n");
    printf("\t6.Xoa mot dinh vien\n");
    printf("\t7.Xoa sinh vien\n");
    printf("\t0.Ket thuc\n");
    printf("\t\t");
}

void inMENUsapxep()
{
    printf("\t\t1.Theo diem Toan\n");
    printf("\t\t2.Theo diem Ly\n");
    printf("\t\t3.Theo diem Anh\n");
    printf("\t\t4.Theo tong diem\n");
}

void themPnodesauQnode(TList *list,node *pnode,node *qnode)
{
    if(list->first==NULL)
    {
        return;
    }
    pnode->next = qnode->next;
    qnode->next  = pnode;
}

void xoanode(TList *list, node *delnode)
{
    if(list->first==NULL)
        return;
    if(list->first == delnode)
    {
        list->first  = list->first->next;
    }
    else
    {
        node *prenode = list->first;
        while(prenode->next != delnode)
        {
            prenode = prenode->next;
        }
        free(delnode);
    }
}

void xoaDS(TList *list)
{
    while(list->first !=NULL)
    {
        xoanode(list,list->first);
    }
}

node *timsinhvientheodata(TList *list,char *hoten)
{
    if(list->first== NULL)
        return NULL;
    node *i= list->first;
    while(i!=NULL)
    {
        if(strcmp(i->data.hoTen,hoten)==0)
        {
            return i;
        }
        i=i->next;
    }
    return NULL;
}
int main()
{
    TList *list = capPhatDS();
    while(true)
    {
        inMEnu();
        printf("Vui long chon: ");
        int chon;
        scanf("%d",&chon);
        system("cls");
        switch(chon)
        {
        case 1:
            {
                printf("Nhap so luong sinh vien muon tao: ");
                int n;
                scanf("%d",&n);
                list = taoDanhSachsinhvien(list,n);
                printf("Da tao xong danh sach sinh vien\n");
                break;
            }
        case 2:
            {
                hienTHidanhsach(list);
                break;
            }
        case 3:
            {
                inMENUsapxep();
                printf("Vui long chon: ");
                int n;
                scanf("%d",&n);
                sapSep(list,n);
                hienTHidanhsach(list);
                break;
            }
        case 4:
            {
                char sua[20];
                printf("Nhap ten sinh vien muon sua: ");
                getchar();
                gets(sua);
                if(timsinhvientheodata(list,sua))
                {
                    printf("Nhap lai thong tin sinh vien: \n");
                    sv k = nhapdata();
                    timsinhvientheodata(list,sua)->data = k;
                }
                else
                {
                    printf("Khong tim thay sinh vien muon sua\n");
                }
                break;
            }
        case 5:
            {
                char h[20];
                printf("Nhap ten sinh vien truoc vi tri muoon chen: ");
                getchar();
                gets(h);
                if(timsinhvientheodata(list,h))
                {
                    printf("Nhap thong tin sinh vien can them\n");
                    themPnodesauQnode(list,taonode(nhapdata()),timsinhvientheodata(list,h));
                    printf("Da chen xong\n");
                }
                else
                {
                    printf("Khong tim thay sinh vien\n");
                }
                break;
            }
        case 6:
            {
                char l[20];
                printf("Nhap ten sinh vien  muon xoa: ");
                getchar();
                gets(l);
                if(timsinhvientheodata(list,l))
                {
                    xoanode(list,timsinhvientheodata(list,l));
                }
                else
                {
                    printf("Khong timf duoc sinh vien can xoa\n");
                }
                printf("Da xoa xong sinh vien\n");
                break;
            }
        case 7:
            {
                xoaDS(list);
                printf("Da xoa xong danh sach\n");
                hienTHidanhsach(list);
                break;
            }
        case 0:
            {
                printf("Ket thuc\n");
                return 0;
            }
        default :
            {
                printf("Chi nhap tu 0->8\n");
                break;
            }
        }
        printf("Nhan phim bat ki de tro ve: \n");
        getch();
        system("cls");
    }
}
//*/
//*/


/*
#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int check(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
int main()
{
	int n;
	printf("Nhap so luong phan tu mang: ");
	scanf("%d",&n);
	int a[100];
	printf("Nhap mang: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int luu = 0;
	for(int i=0;i<n;i++)
	{
		if(check(a[i]))
		{
			int tam = a[luu];
			a[luu] = a[i];
			a[i] = tam;
			luu ++;
		}

		int luu1 = -1;
		for(int i=0;i<n;i++)
		{
			if(a[i]==1)
			{
				luu1 = i;
				break;
			}
		}

		if(luu1 != -1)
		{
			for(int i=luu1; i<n-1;i++)
			{
				a[i]= a[i+1];
			}
			a[n-1]= 1;
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

*/

/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

struct sinhvien
{
    char hoTen[20];
    char maSV[10];
    int namSinh;
};
typedef struct sinhvien sv;

void taoDanhSach()
{
    FILE *f= fopen("DS_SV.C", "wb");
    if(f==NULL)
    {
        printf("LOI MO FILE");
        return;
    }
    int n;
    printf("Nhap so luong sinh vien can tao: ");
    scanf("%d",&n);
    sv x;
    for(int i=0;i<n;i++)
    {
        printf("Nhap thong tin sinh vien thu %d\n",i+1);
        printf("Nhap ho ten: ");
        fflush(stdin);
        gets(x.hoTen);
        printf("Nhap ma sinh vien: ");
        fflush(stdin);
        gets(x.maSV);
        printf("Nhap nam sinh: ");
        scanf("%d",&x.namSinh);
        fwrite(&x,sizeof(sv),1,f);
    }
    printf("Da nhap xong\n");
    fclose(f);
}

void suaThongTIn()
{
    FILE *f= fopen("DS_SV.C", "rb");
    if(f==NULL)
    {
       printf("LOI MO FILR");
       return;
    }
    char ma[10];
    printf("Nhap ma sinh vien can sua: ");
    getchar();
    gets(ma);
    sv x;
    while(fread(&x,sizeof(sv),1,f)!=0)
    {
        if(strcmp(x.maSV,ma)==0)
        {

            printf("Nhap nam sinh: ");
            scanf("%d",&x.namSinh);
            fseek(f,-sizeof(sv),SEEK_CUR);
            fwrite(&x,sizeof(sv),1,f);
            printf("Sua thong tin thanh cong: \n");
        }
            fclose(f);
        }
       printf("Khong tim thay sinh vien\n");
       fclose(f);
}

void hienDanhSach()
{
    FILE *f = fopen("DS_SV.C", "rb");
    if(f==NULL)
    {
        printf("LOI MO FILE");
        return;
    }
    int i=1;
    sv x;
    printf("\t%5s%20s%22s%15s\n","STT", "Ma SV", "Ho ten", "Nam sinh");
    while(fread(&x,sizeof(sv),1,f)!=0)
    {
        printf("\t%5d%20s%20s%15d\n", i++, x.maSV, x.hoTen, x.namSinh);
    }
    fclose(f);
}

void inMenu()
{
    printf("\t1.Tao danh sach sinh vien\n");
    printf("\t2.Hien danh sach sinh vien\n");
    printf("\t3.Sua thogn tin sinh vien\n");
    printf("\t4.Ket thuc\n");
}
int main()
{
    while(true)
{
        int chon;
        inMenu();
        printf("Vui long chon: ");
        scanf("%d",&chon);
        switch(chon)

        {

        case 1:
        {
            taoDanhSach();
            break;
        }
        case 2:
        {
            hienDanhSach();
            break;
        }
        case 3:
        {
            suaThongTIn();
            break;
        }
        case 4:
        {
            printf("Ket thuc\n");
            return 0;
        }
        default :
        {
            printf("Chi chon tu 0->4\n");
            break;
        }
     }
   }
}

*/

/*
#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1, x2, y2, x3, y3;
    printf("Nhap toa do diem 1: ");
    scanf("%f%f", &x1, &y1);
    printf("Nhap toa do diem 2: ");
    scanf("%f%f", &x2, &y2);
    printf("Nhap toa do diem 3: ");
    scanf("%f%f", &x3, &y3);

    // Tinh do dai ba canh
    float a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    float b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    float c = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

    // Kiem tra dieu kien tam giac
    if (a + b > c && a + c > b && b + c > a)
    {
        printf("Day la tam giac ");

        // Kiem tra loai tam giac
        if (a == b && b == c)
        {
            printf("deu.");
        }
        else if (a == b || b == c || c == a)
        {
            if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
            {
                printf("vuong can.");
            }
            else
            {
                printf("can.");
            }
        }
        else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
        {
            printf("vuong.");
        }
        else
        {
            printf("thuong.");
        }
    }
    else
    {
        printf("Ba diem khong tao thanh tam giac.");
    }
    return 0;
}
*/
/*

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int item) {
    if (top == MAX_SIZE - 1) {
        printf("Stack overflow\n");
        return;
    }
    stack[++top] = item;
}

int pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        return;
    }
    return stack[top--];
}

void chuyen_co_so(int n, int base) {
    int rem;
    while (n != 0) {
        rem = n % base;
        push(rem);
        n /= base;
    }
}

void hien_ket_qua() {
    int i;
    printf("Ket qua: ");
    while (top != -1) {
        i = pop();
        if (i < 10) {
            printf("%d", i);
        } else {
            printf("%c", i + 55);
        }
    }
    printf("\n");
}

int main() {
    int n, choice;

    do {
        printf("\nMenu:\n");
        printf("1. Chuyen mot so nguyen duong sang he 2\n");
        printf("2. Chuyen mot so nguyen duong sang he 8\n");
        printf("3. Chuyen mot so nguyen duong sang he 16\n");
        printf("4. Ket thuc\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so nguyen duong can chuyen doi: ");
                scanf("%d", &n);
                chuyen_co_so(n, 2);
                hien_ket_qua();
                break;
            case 2:
                printf("Nhap so nguyen duong can chuyen doi: ");
                scanf("%d", &n);
                chuyen_co_so(n, 8);
                hien_ket_qua();
                break;
            case 3:
                printf("Nhap so nguyen duong can chuyen doi: ");
                scanf("%d", &n);
                chuyen_co_so(n, 16);
                hien_ket_qua();
                break;
            case 4:
                printf("Ket thuc chuong trinh\n");
                break;
            default:
                printf("Lua chon khong hop le\n");
        }
    } while (choice != 4);

    return 0;
}

*/
/*

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<conio.h>
#include<windows.h>



struct sinhvien
{
    char hoTen[20];
    char maSV[10];
    int diemToan;
    int diemLy;
    int diemTA;
    int tongDiem;
};
typedef struct sinhvien sv;

struct node
{
    sv data;
    struct node *next;
};
typedef struct node node;

struct TList
{
    node *first;
};
typedef struct TList TList;

node *taonode(sv a)
{
    node *pnode = (node*)malloc(sizeof(node));
    pnode->data = a;
    pnode ->next  = NULL;
    return pnode;
}

TList *capPhatDS()
{
    TList *list = (TList*)malloc(sizeof(TList));
    list->first = NULL;
    return list;
}

sv nhapdata()
{
    sv x;
    printf("Nhap ho ten: ");
    fflush(stdin);
    gets(x.hoTen);
    printf("Nhap ma sinh vien: ");
    fflush(stdin);
    gets(x.maSV);
    printf("Nhap diem toan: ");
    scanf("%d",&x.diemToan);
    printf("Nhap diem Ly: ");
    scanf("%d",&x.diemLy);
    printf("Nhap diem TA: ");
    scanf("%d",&x.diemTA);

    x.tongDiem = x.diemLy + x.diemTA + x.diemToan;
    return x;
}

void hienThisinhvien(sv x)
{
    printf("%10s%10s%14d%10d%10d%10d\n",x.maSV,x.hoTen,x.diemToan,x.diemLy,x.diemTA,x.tongDiem);
}

void themPhantudautien(TList *list, node *pnode)
{
    list->first=pnode;
    pnode->next= NULL;
}

void themVaoDau(TList *list, node *pnode)
{
    if(list->first==NULL)
    {
        themPhantudautien(list,pnode);
    }
    else
    {
        pnode->next = list->first;
        list->first = pnode;
    }
}

node *timPhanTuCuoi(TList *list)
{
    if(list->first==NULL)
    {
        return NULL;
    }
    else
    {
        node *last = list->first;
        while(last->next!=NULL)
        {
            last = last->next;
        }
        return last;
    }

}

void themVaoCuoi(TList *list,node *pnode)
{
    if(list->first == NULL)
    {
        themPhantudautien(list,pnode);
    }
    else
    {
        node *prenode = timPhanTuCuoi(list);
        prenode->next  = pnode;
        pnode->next = NULL;
    }
}
TList *taoDanhSachsinhvien(TList *list,int n)
{
    for(int i=0; i<n; i++)
    {
        printf("Nhap du lieu cua sinh vien thu %d\n",i+1);
        themVaoCuoi(list,taonode(nhapdata()));
    }
    printf("Da nhap xong\n");
    return list;
}
void hienTHidanhsach(TList *list)
{
    printf("\t\tDANH SACH SINH VIEN\n");
    printf("\t%5s%10s%10s%14s%10s%10s%10s\n","STT", "MA SV","HO TEN", "DIEM TOAN", "DIEM LY","DIEM TA", "TONG");
    if(list->first!=NULL)
    {
        int stt= 1;
        for(node *i=list->first;i!=NULL;i= i->next)
        {
            printf("\t%5d",stt++);
            hienThisinhvien(i->data);
        }
    }
}
#define sapxeptheotoan 1
#define sapxeptheoly 2
#define sapxeptheoanh 3
#define sapxeprheotong 4

void sapSep(TList *list,int n)
{
    switch(n)
    {
    case 1:
        {
            for(node *i= list->first ;i != NULL; i= i->next)
            {
                for(node *j= i->next;j!=NULL;j=j->next)
                {
                    if(i->data.diemToan < j->data.diemToan)
                    {
                        sv tam = i->data;
                        i->data = j->data;
                        j->data = tam;
                    }
                }
            }
            break;
        }
    case 2:
        {
            for(node *i= list->first ;i != NULL; i= i->next)
            {
                for(node *j= i->next;j!=NULL;j=j->next)
                {
                    if(i->data.diemLy < j->data.diemLy)
                    {
                        sv tam = i->data;
                        i->data = j->data;
                        j->data = tam;
                    }
                }
            }
            break;
        }
    case 3:
        {
            for(node *i= list->first ;i != NULL; i= i->next)
            {
                for(node *j= i->next;j!=NULL;j=j->next)
                {
                    if(i->data.diemTA < j->data.diemTA)
                    {
                        sv tam = i->data;
                        i->data = j->data;
                        j->data = tam;
                    }
                }
            }
            break;
        }
    case 4:
        {
            for(node *i= list->first ;i!= NULL; i= i->next)
            {
                for(node *j= i->next;j!=NULL;j=j->next)
                {
                    if(i->data.tongDiem < j->data.tongDiem)
                    {
                        sv tam = i->data;
                        i->data = j->data;
                        j->data = tam;
                    }
                }
            }
            break;
        }
    default :
        {
            printf("Chi nhap tu 0->4\n");
            break;
        }
    }
}

void inMEnu()
{
    printf("\tMENU\n");
    printf("\t1.Tao danh sach sinh vien\n");
    printf("\t2.Hien thi danh sach thi sinh\n");
    printf("\t3.Sap xep theo diem thi\n");
    printf("\t4.Sua du lieu sinh vien\n");
    printf("\t5.Chen them sinh vien\n");
    printf("\t6.Xoa mot dinh vien\n");
    printf("\t7.Xoa sinh vien\n");
    printf("\t0.Ket thuc\n");
    printf("\t\t");
}

void inMENUsapxep()
{
    printf("\t\t1.Theo diem Toan\n");
    printf("\t\t2.Theo diem Ly\n");
    printf("\t\t3.Theo diem Anh\n");
    printf("\t\t4.Theo tong diem\n");
}

void themPnodesauQnode(TList *list,node *pnode,node *qnode)
{
    if(list->first==NULL)
    {
        return;
    }
    pnode->next = qnode->next;
    qnode->next  = pnode;
}

void xoanode(TList *list, node *delnode)
{
    if(list->first==NULL)
        return;
    if(list->first == delnode)
    {
        list->first  = list->first->next;
    }
    else
    {
        node *prenode = list->first;
        while(prenode->next != delnode)
        {
            prenode = prenode->next;
        }
        free(delnode);
    }
}

void xoaDS(TList *list)
{
    while(list->first !=NULL)
    {
        xoanode(list,list->first);
    }
}

node *timsinhvientheodata(TList *list,char *hoten)
{
    if(list->first== NULL)
        return NULL;
    node *i= list->first;
    while(i!=NULL)
    {
        if(strcmp(i->data.hoTen,hoten)==0)
        {
            return i;
        }
        i=i->next;
    }
    return NULL;
}
int main()
{

}
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<conio.h>
#include<windows.h>




//struct sinhvien

struct node
{
   sinhvien data;
   struct node *next;
};
typedef struct node node;

struct TList
{
    node *first;
};
typedef struct TList TList;

TList *capphatdanhsac()
{
    TList *list = (TList*)malloc(sizeof(Tlist));
    list->first ==NULL;
    return list;
}

node *taonoDe(sv x)
{
    node *pnode = (node*)malloc(sizeof(node));
    pnode->data = x;
    pnode->next NULL;
    return node;
}
sv nhapData()
{
    sv x;

}

void hienthisv(sv x)
{

}

void hienthidssv(TList *list)
{

}

void themphantudautien(TList *list, node *pnode)
{
    list->first = pnode;
    pnode->next = NULL;
}

void themvaodau(TList *list, node *pnode)
{
    if(list->first ==NULL)
    {
        themPhantudautien(list,pnode);
    }
    else
    {
        pnode->next = list->first;
        list->first = pnode;
    }
}

node *timphantucuoi(TList *list)
{
    if(list->first==NULL)
    {
        return NULL;
    }
    else
    {
        node *last = list->first;
        while(last->next!=NULL)
        {
            last = last->next;
        }
        return last;
    }
}

void themvaocuoi(TList *list, node *pnode)
{
    if(list->first==NULL)
    {
        return ;
    }
    else
    {
        node *prenode =timphantucuoi(list);
        prenode->next= pnode;
        pnode->next = NULL;

    }
}

void thempnodesauqnode(TList *list, node *pnode, node*qnode)
{
    if(list->first == NULL)
    {
        return;
    }
    else
    {
        pnode->next = qnode->next;
        qnode->next = pnode;
    }
}

void delnode(TList *list,node* pnode)
{
    if(list->first==NULL)
    {
        return;
    }
    else if(list->first = pnode)
    {
        list->first = list->first->next;
        free(pnode);
    }
    else
    {
        node *prenode = list->first;
        while(prenode->next!=NULL)
        {
            prenode= prenode->next;
        }
        prenode->next = pnode->next;
        free(pnode);
    }
}

void xoadanhsach(TList *list)
{
    while(list->first != NULL)
    {
        delnode(list,list->first);
    }
}

node timsinhvientheoDAta(TList *list,char *hoten)
{
    if(list->first == NULL)
    {
        return NULL;
    }

   node *i= list->first
   while(i!=NULL)
   {
       if(strcmp(i->data.hoTen,hoten)==0)
       {
           return i;
       }
       i=i->next;
   }
   return NULL;
}

int main()
{

}







