/*
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i ++){
        for(int j =1 ; j <= i ; j++){
            if(i==1||i==n ||j==1||j==i )
               printf("*");
            else
                printf(" ");
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
    for(int i=1; i<= n ; i ++){
        for(int j =1 ; j<= n-i; j++){
            printf(" ");
        }
        for(int j=1;j<=2*i-2+1;j++){
            printf("*");
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
    for(int i=1 ; i<=n; i++){
        for(int j = 1;j<=n+i-1;j++){
            if(j<=n-i){
                printf(" ");
            }
            else{
                printf("*");
            }
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
    for(int i=1; i<= n ; i ++){
        for(int j =1 ; j<= n+i-1 ; j++){
            if(j<=n-i)
                printf(" ");
            else if(i==1|| i==n || j==n+1-i||j== n+i-1)
                printf("*");
            else
                printf(" ");

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
    for(int i=1; i<= n ; i ++){
        for(int j =1 ; j<= n-i; j++){
          printf(" ");
        }
        for(int j=1 ; j<= 2*i-1; j++){
            if(i==1||i==n||j==1||j==2*i-1)
            printf("*");
            else
            printf(" ");
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
    for(int i=1 ; i<= n; i++){
        for(int j =1; j<= i-1;j++){
            printf(" ");
        }
        for(int j=1; j<= 2*(n-i+1)-1; j++){
            printf("*");
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
    for(int i=1 ; i<= n; i++){
        for(int j =1; j<= 2*n-i;j++){
                if(j<=i-1)
                printf(" ");
                else
              printf("*");
        }
        printf("\n");
    }
}
*/











