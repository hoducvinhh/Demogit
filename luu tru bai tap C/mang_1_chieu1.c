
#include<stdio.h>
#include<math.h>
int nguyenTo(int n);
int nguyenTo(int n)
{
    for(int i=2; i<= sqrt(n); i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return n>1;
}


int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    /*
    int max=-1e9;
    int min=1e9;
    for(int i=0; i<n; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min )
        {
            min=a[i];
        }
    }
    printf("\n");
    printf("%d %d",max,min);
    printf("\n");
    int demc=0;
    int deml=0;
    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            demc++;
        }
        else {
            deml++;
        }
    }
    printf("so chan :%d\n",demc);
     printf("so le :%d",deml);
     printf("\n");
     */
   /*  for(int i=0; i<n; i++){
        if(nguyenTo(a[i])){
        printf("%d ",a[i]);
        }
     }
     */
     /*
   int max= -1e9, min= 1e9,sothutumin,sothutumax;
   for (int i=0; i<n; i++){
    if(a[i] < min){
        min=a[i];
        sothutumin = i;
    }
   }
   printf("%d",sothutumin);
   printf("\n");
   for(int i=0; i<n; i++){
    if(a[i]>max){
        max=a[i];
        sothutumax=i;
    }
   }
   printf("%d",sothutumax);
*/
/*
    int max1=-1e9,max2= -1e9,min1=1e9,min2=1e9;
    for(int i=0; i<n ; i++)
    {
        if(a[i]>max1)
        {
            max2=max1;
            max1=a[i];
        }
        if(a[i]>max2)
        {
            max2=a[i];
        }
    }
    printf("%d %d",max1,max2);
    for(int i=0; i<n ; i++)
    {
        if(a[i]<min1)
        {
            min2=min1;
            min1=a[i];
        }
        if(a[i]<min2)
        {
            min2=a[i];
        }
    }
    printf("\n");
    printf("%d %d",min1,min2);
*/
/*
 int max1=-1e9,max2= -1e9,min1=1e9,min2=1e9;
    for(int i=0; i<n ; i++)
    {
        if(a[i]>max1)
        {
            max2=max1;
            max1=a[i];
        }
        if(a[i]>max2 && a[i] !=max1)
        {
            max2=a[i];
        }
    }
    if(max2==-1e9){
        printf("%d %d\n",max1,-1);
    }
        else
      printf("%d %d",max1,max2);

    }
*/
/*
    int demle =0;
    for(int i=0; i<n;i++){
        if(a[i]%2==1){

            demle++;
        }
         printf("%d ",a[i]);
    }
    printf("%d\n",demle);
    }

*/





