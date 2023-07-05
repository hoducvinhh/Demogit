
// Tinh tong cot cua ma tran.
/*
#include<stdio.h>
#include<math.h>

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++){
       int sum=0;
        for(int j=0;j<n;j++){
            sum+=a[j][i];
        }
        printf("%d ",sum);
    }
}
*/
/*
// Nhan hai ma tran.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,m,p;
    scanf("%d%d%d",&n,&m,&p);
    int a[n][m],b[m][p],c[n][p];


    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<p; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<p; j++)
        {
            c[i][j]=0;
            for(int k=0; k<m; k++)
            {
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<p; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}


*/

/*
// nhan hai ma tran chuyen vi cua nhau

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m],b[m][n],c[n][n];


    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            b[i][j] = a[j][i];
        }
    }
    printf("\n");

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            c[i][j]=0;
            for(int k=0; k<m; k++)
            {
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}


*/

// ma tran xoan oc  tran vuong.


#include<stdio.h>
#include<stdlib.h>

int main()
{
//    c1    c2
//hi  1 2 3 4
//    5 6 7 8
//    9 10 11 12
//h2  13 14 15 16

    int n,dem =1;
    scanf("%d",&n);
    int a[n][n];
    int hang1 =0,hang2=n-1,cot1=0,cot2=n-1 ;

  while(hang1<=hang2 && cot1<=cot2)
    {
        for(int i=cot1; i<=cot2; i++)
        {
            a[hang1][i] = dem;
            dem++;
        }
        hang1++;
        for(int i=hang1; i<=hang2; i++)
        {
            a[i][cot2]=dem;
            dem ++;
        }
        cot2--;
        if(cot1<=cot2)
        {

            for(int i=cot2; i>=cot1; i--)
            {
                a[hang2][i]=dem;
                dem++;
            }
            hang2--;
       }
           if(hang1<=hang2)
            {
                for(int i=hang2; i>=hang1; i--)
                {
                    a[i][cot1]=dem;
                    dem++;
                }
                cot1++;
            }
   }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}




