/* #include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1 ; i<=n ; i++){
        for(int j=1 ;j<=n ;j++){
            if(j<=i)
            printf("*");
            else
            printf("~");
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
    for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ;j<=i ;j++){
            printf("*");
        }
    for(int j=1 ;j<=n-i; j++){
        printf("~");
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
    for(int i=1; i<=n;i++){
        for(int j =1 ; j<=n ;j++){
            if(j<= n-i+1)
            printf("*");
            else
            printf("~");
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
    for(int i=1; i<=n;i++){
        for(int j =1 ; j<=n-i+1 ;j++){
            printf("*");
        }
           for(int j =1 ; j<=i-1;j++){
           printf("~");
        }
        printf("\n");
    }
}
*/
/*
#include<stdio.h>
#include<math.h>
int main(){
    int n ,m;
    scanf("%d%d",&n,&m);
    for(int i=1; i<=n ; i++){
        for(int j =1 ; j<= m +i -1; j++){
            if(j<=i-1)
            printf("~");
            else
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
    int n ,m;
    scanf("%d%d",&n,&m);
    for(int i=1; i<=n ; i++){
        for(int j =1 ; j<= i-1; j++){
            printf("~");
        }
        for(int j=1; j<=m; j++){
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
    for(int i=1;i<=n;i++){
        for(int j=1 ; j<=n;j++){
            if(j<=n-i)
            printf("~");
            else if (i==n|| j==n||j==n+1-i||i==1)
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
    for(int i=1;i<=n;i++){
        for(int j=1 ; j<=n-i;j++){
            printf("~");
        }
           for(int j=1 ; j<=i;j++){
          if(j==1||i==n||i==1||j==i)
            printf("*");
                else
            printf(" ");
        }
        printf("\n");
    }
}
*/
