/*   #include<stdio.h>
#include<math.h>
int check(int a,int b){
    if(a==0||b==0) return a+b;
     else{
        while(a!=b){
            if(a>b)
                a=a-b;
            else
                b=b-a;
        }
    return a;
     }
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int dem=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(check(a[i],a[j])==1)
                dem++;
        }
    }
    printf("%d",dem);
    return 0;
}
*/
/*
#include<stdio.h>
#include<math.h>
int check(int a,int b);
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max1=-1e9,max2=-1e9,min1=1e9,min2=1e9;
    for(int i=0;i<n;i++){
        if(a[i]>max1){
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2){
            max2=a[i];
        }
        if(a[i]<min1){
            min2=min1;
            min1=a[i];
        }
        else if(a[i]<min2){
            min2=a[i];
        }
    }
  //  printf("%d",min1);
   printf("%d",check(max1*max2,min1*min2));
}
int check(int a,int b){
        if(a>b) return a;
        else return b;
 }
 */





















