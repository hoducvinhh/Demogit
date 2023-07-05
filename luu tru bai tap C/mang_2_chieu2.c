/*
#include<stdio.h>
#include<math.h>
int sum1(int a[][3],int n,int m){
   for(int i=0; i<n; i++)
    {
        int s=0;
        for(int j=0; j<m; j++)
        {
            s+=a[i][j];
        }
        printf("%d",s);
        printf("\n");
    }

}
int sum2(int a[][3],int n,int m){
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=a[j][i];
        }
        printf("%d   ",sum);
    }
}
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
   // sum1(a,n,m);
       sum2(a,n,m);

}
*/
/*
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int  kiemTra(int b)
{
    if(b<2) return 0;
    for(int i=2; i<=sqrt(b); i++)
    {
        if(b%i==0) return 0;
        else return 1;
    }
    return b>1;
}

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        int a[n][m];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        int max1=-1e9,max2=-1e9,hang=0,cot=0;
        for(int i=0; i<n; i++)
        {
            int sum1=0;
            for(int j=0; j<m; j++)
            {
                sum1 += a[i][j];
            }
            if(sum1>max1)
            {
                max1=sum1;
                hang=i;
            }
        }
        for(int i=0; i<m; i++)
        {
            int sum2=0;
            for(int j=0; j<n; j++)
            {
                sum2+= a[j][i];
            }
            if(sum2>max2)
            {
                max2=sum2;
                cot=i;
            }
        }
        printf("#TC %d\n",i);

        for(int i=0; i<n; i++)
        {
            if(hang!=i)
            {
                for(int j=0; j<m; j++)
                {
                    if(cot!=j)
                    {
                        printf("%d ",a[i][j]);
                    }
                }
                printf("\n");
            }
        }
    }
}
*/
   /*
    printf("\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

        int max=0,hang=0;                      // tim hang co nhieu so nguyen to nhat va in cac gia tri day ra man hinh
        for(int i=0;i<n;i++){
                int dem=0;
            for(int j=0;j<m;j++){
                if(kiemTra(a[i][j])==1){
                    dem++;
                }
            }
          if(dem>max){
            max=dem;
            hang = i;
          }
        }
        printf("Hang con so nguyen to nhieu nhat la %d\n",hang+1);
        for(int i=0;i<m;i++){
            if(kiemTra(a[hang][i])){
                printf("%d  ",a[hang][i]);
            }
        }

    }



// tim cot co nhieu so nguyen to nhat va in gia tri do ra man hinh.
    int max =0,cot=0;
    for(int i=0; i<m; i++)
    {
        int dem=0;
        for(int j=0; j<n; j++)
        {
            if(kiemTra(a[j][i])==1)
            {
                dem++;
            }
        }
        if(dem>max)
        {
            max=dem;
            cot=i;
        }
    }
    printf("Cot con so nguyen to nhieu nhat la %d\n",cot+1);
    for(int i=0; i<n; i++)
    {
        if(kiemTra(a[i][cot]))
        {
            printf("%d  ",a[i][cot]);
        }
    }
}
*/

// Hoan vi hai hang cua ma tran
/*
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int x,y;
    scanf("%d%d",&x,&y);
    for(int i=0;i<m;i++){
        int temp = a[x-1][i];
        a[x-1][i]=a[y-1][i];
        a[y-1][i]= temp;
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
     }

}
*/
// Hoan vi hai cot cua ma tran

/*
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int x,y;
    scanf("%d%d",&x,&y);
    for(int i=0;i<n;i++){
        int temp = a[i][x-1];
        a[i][x-1]=a[i][y-1];
        a[i][y-1]= temp;
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
     }
}

*/

// Hoan vi hai duong cheo cua ma tran vuong

/*
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d%d",&n,&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        int temp = a[i][i];
        a[i][i]=a[i][n-i-1];
        a[i][n-1-i]= temp;
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
     }
}

*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int check(int a){
    if(a<2) return 0;
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0) return 0;
    }
      return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int dem =0;
    for(int i=0;i<n;i++){
        if(check(a[i][i])) dem++;
        if(check(a[i][n-i-1])) dem ++;
    }
    if(n%2==1){
        if(check(a[n/2][n/2])==1) dem --;
    }
    printf("%d",dem);

}

