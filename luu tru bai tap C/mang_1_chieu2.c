

#include<stdio.h>
#include<math.h>
// int kiemTra1(int a[],int n);
//int kiemTra1(int a,int b);
//int kiemTra2(int a,int b);
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    /*
    if(kiemTra1(a,n)) printf("Yes");
    else printf("No");
    */
    /*
    if(kiemTra2(a,n)) printf("Yes");
    else printf("No");
    */

    // int ok=1;
    /*
     for(int i=0; i<n;i++){
             int ok=1;
         for(int j=0; j<i;j++){
             if(a[j]>a[i]){
                 ok=0;
                 break;
             }

         }
        if(ok==1) printf("%d ",a[i]);
         */
    /*
    int max=a[0];
    for(int i=0;i<n;i++){

    if(a[i]>=max){
        printf("%d ",a[i]);
    }
    if(a[i]>max){
        max=a[i];
    }
    }
    */
    /*
    for(int i=0;i<n;i++){
    if(i==0)
        printf("%d %d\n",a[1]-a[0],a[n-1]-a[0]);
    else if(i==n-1)
        printf("%d %d\n",a[n-1]-a[n-2],a[n-1]-a[0]);
    else{
        printf("%d %d\n",kiemTra2(a[i+1]-a[i],a[i]-a[i-1]),kiemTra1(a[n-1]-a[i],a[i]-a[0]));
    }

    */










}

/*
int kiemTra1(int a[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        if(a[i]<a[i+1]) {}

        else
            return 0;
    }
    return 1;
}
int kiemTra2(int a[],int n)
{
    for(int i =0; i<n; i++)
    {
        if(a[i]>a[i+1]) {}
        else return 0;
    }
    return 1;
}
*/
/*
int kiemTra1(int a, int b){
    if(a>b) return a;
   else return b;
}
int kiemTra2(int a,int b){
    if(a<b) return a;
    return b;

}
*/









