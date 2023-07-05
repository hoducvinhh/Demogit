/*
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1 ; i<=n;i++){
        for(int j=1 ; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}
/
*/
 /*
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n; i++ ){
        for(int j=1;j<=n+i-1;j++){
            if(j<=n-i)
                printf("~");
            else printf("*");
        }
        printf("\n");
    }
    for(int i=1; i<=n-1; i++){
        for(int j=1;j<=2*n-i-1;j++){
            if(j<=i)
                printf("~");
            else printf("*");
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
    for(int i=1 ; i<=n ;i++){
        for(int j=1; j<=2*n; j++){
            if(j<=n-i+1 || j>= n+i)
                printf("*");
            else printf("~");
        }
        printf("\n");
    }
    for(int i=1 ; i<=n-1; i++){
        for(int j=1; j<=2*n; j++){
            if(j<=i+1||j>=2*n-i)
                printf("*");
            else printf("~");
        }
        printf("\n");
    }
}
*/














