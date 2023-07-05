/*
#include<stdio.h>
#include<math.h>
int tong(int *n,int *m){
    return *n + *m;
}
int hieu(int *a,int *b){
    return *a-*b;
}
int tich(int *a,int *b){
    return *a * *b;
}
float thuong(int *a,int *b){
    float s= *a/ *b;
    return s ;
}

int main(){
    int n,m ;
    scanf("%d %d",&n,&m);
    printf("%d\n",tong(&n,&m));
    printf("%d\n",hieu(&n,&m));
    printf("%d\n",tich(&n,&m));
    printf("%.2f\n",thuong(&n,&m));
    return 0;
}
*/


#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void nhapMang(int *n,int b)
{
    for(int i=0; i<b; i++)
    {
        scanf("%d",n+i);
    }
}
void xuatMang(int *n,int b)
{
    for(int i=0; i<b; i++)
    {
        printf("%d  ",*(n+i));
    }
}
void sapXep(int *a,int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(*(a+i)<*(a+j))
            {
                int temp = *(a+i);
                *(a+i)= *(a+j);
                *(a+j)= temp;
            }
        }
    }
}
int main()
{
    /*
     int n;
     scanf("%d",&n);
     int *a;
     a=(int *)malloc(n*sizeof(int));
     nhapMang(a,n);
     xuatMang(a,n);
     printf("\n");
     printf("mang sap xep lai la :\n");
     sapXep(a,n);
     xuatMang(a,n);
     free(a);
     */
    int n,m;
    int *a;
    scanf("%d%d",&n,&m);
    a=(int *)malloc(n*m*sizeof(int));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d",a+i*m+j);
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d  ",*(a+i*m+j));
        }
        printf("\n");
    }
    int max=-1e9;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(*(a+i*n+j)>max)
            {
                max=*(a+i*n+j);
            }
        }
    }
    printf("%d",max);

    free(a);
}













