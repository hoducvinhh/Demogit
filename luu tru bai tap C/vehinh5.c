/* #include<stdio.h>
#include<math.h>
int main(){
    int n ;
    scanf("%d",&n);
    for(int i=1; i<=n ;i++){
        for(int j=1; j<=n ;j++){
            if((i+j)%2==0)
                printf("1");
            else printf("0");
        }
        printf("\n");
    }
}
*/
/*
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        int dem=i;
        for(int j=1; j<=n; j++){
            printf(" %d",dem);
            dem++;
        }
    printf("\n");
    }
}
*/
/*
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Nhap chi so cua n la : ");
    scanf("%d",&n);
     int dem=1;
    for(int i=1; i<=n;i++){
        for(int j=1; j<=n;j++){
            printf("%d ", dem);
            dem++;
        }
        printf("\n");
    }
}
*/
/*
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n ; i++){
        for(int j=1; j<=n;j++){
            if(j<=n-i)
                printf("~");
            else printf("%d",i);
        }
        printf("\n");
    }
}
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        int dem1=i;
        int dem2=n-1;
        for(int j=1; j<=i; j++)
        {
            printf("%d ",dem1);
            dem1+=dem2;
            dem2--;
        }
        printf("\n");
    }

}






