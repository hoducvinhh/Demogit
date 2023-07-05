 /* #include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    for( int i =1 ; i<= n ; i ++){
        for( int j = 1 ; j<= n ; j++){
            printf("*");
        }
        printf("\n");
    }
}
*/
/*
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=n ; j++)
        {
            if ( i == 1 || i == n || j ==1  || j ==n)
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
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i =1 ; i<= a; i++)
    {
        for( int j =1; j<=b ; j ++)
        {
            if(i == 1 || i == a || j ==1 || j == b)
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
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i =1 ; i<= a; i++)
    {
        for( int j =1; j<=b ; j ++)
        {
            if(i == 1 || i == a || j ==1 || j == b)
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
int main()
{
    int n;
    printf("nhap chi so n la : ");
    scanf("%d",&n);
    for( int i =1 ; i<=n; i++)
    {
        for(int j=1 ; j<= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
*/
/*
#include<stdio.h>
#include<math.h>
int main()
{
    int n ;
    printf("nhap chi so n la : ");
    scanf("%d",&n);
    for (int i= 1 ; i<=n ; i++)
    {
        for(int j =1 ; j <=n ; j++)
        {
            if ( j <= n+1-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n")
    }
}
*/
/*
#include<stdio.h>
#include<math.h>
int main(){
  int n ;
  scanf("%d",&n);
  for(int i =n ; i>=1 ; i--){
    for(int j =1 ; j<=i;j ++){
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
    for(int i=1; i<=n ; i++){
        for(int j =1 ; j <=n ;j ++){
            if ( j <= n-i)
                printf(" ");
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
    int n=5;
    for(int i =n; i>= 1 ; i --){
        for ( int j =1; j <=n ; j ++){
            if ( j <= n -i )
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
}
*/
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i =1; i<=n ; i ++){
        for ( int j =1; j <=n ; j ++){
            if ( j <i )
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
}






