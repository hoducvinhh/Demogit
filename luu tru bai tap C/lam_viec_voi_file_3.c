/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *f = fopen("BAI1.txt","w");
	int n;
	int a[100];
	scanf("%d",&n);
	fprintf(f,"%d\n",n);
    if(f==NULL)
    {
        printf("LOI FILE");
        return 0;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        fprintf(f,"%d ",a[i]);
    }
    fclose(f);
}
*/


/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int a[100];
    FILE *f = fopen("BAI1.txt","r");
    if(f==NULL)
    {
        printf("LOI FILE khong ton tai\n");
        return 0;
    }
    fscanf(f,"%d",&n);
    printf("%d\n",n);
    for(int i=0; i<n; i++)
    {
        fscanf(f,"%d",&a[i]);
    }
    fclose(f);
    for(int i=0;i<n; i++)
    {
        printf("%d ",a[i]);
    }
}

*/
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *f=fopen("BAI1.txt","r");
    int n;
     //scanf("%d",&n);
    int a[100];
   /*
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        */
    //fprintf(f,"%d\n",n);
   /*
    if(f==NULL)
    {
        printf("LOI");
        return 0;
    }
        fscanf(f,"%d",&n);
    for(int i=0; i<n; i++)
    {
        fscanf(f,"%d",&a[i]);
        //fprintf(f,"%d ",a[i]);
    }
    fclose(f);
  //  printf("%d\n",n);
     /**
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
     **/

/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char s[50];
    FILE *f=fopen("BAI1.txt","w");
    if(f==NULL){
        printf("LOi FILE");
        return 0;
    }
    fprintf(f,"Cong Hoa Xa Hoi Chu Nghia Viet Nam");
    fclose(f);
}
*/
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char s[100];
    FILE *f=fopen("BAI1.txt","r");
    if(f==NULL)
{
    printf("LOi FILE");
    return 0;
}
    fgets(s,100,f);
    fclose(f);
    printf("%s",s);
}

*/


/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char s1[100],s2[100],s3[100],s4[100];
    FILE *f=fopen("BAI1.txt","r");
    if(f==NULL){
        printf("LOi FILE");
        return 0;
    }
    fgets(s1,100,f);
    fgets(s2,100,f);
    fgets(s3,100,f);
    fgets(s4,100,f);

    s1[strlen(s1)-1] = '\0';
    s2[strlen(s2)-1] = '\0';
    s3[strlen(s3)-1] = '\0';

    fclose(f);

    puts(s1);
    puts(s2);
    puts(s3);
    puts(s4);

}
*/
#include<stdio.h>
#include<stdlib.h>

void nhapFile(int n,int a[]){
    FILE *f = fopen("BAI1.txt","w");
	fprintf(f,"%d\n",n);
    if(f==NULL)
    {
        printf("LOI FILE");
        return ;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        fprintf(f,"%d ",a[i]);
    }
    fclose(f);

}

void nhapFile1(int n,int a[]){
    FILE *f = fopen("BAI2.txt","w");
	fprintf(f,"%d\n",n);
    if(f==NULL)
    {
        printf("LOI FILE");
        return ;
    }


    for(int i=0; i<n; i++)
    {
        fprintf(f,"%d ",a[i]);
    }
    fclose(f);

}
void xuatFile(int n,int a[]){
    FILE *f = fopen("BAI1.txt","r");
    if(f==NULL)
    {
        printf("LOI FILE khong ton tai\n");
        return ;
    }
    fscanf(f,"%d",&n);
    printf("%d\n",n);
    for(int i=0; i<n; i++)
    {
        fscanf(f,"%d",&a[i]);
    }
    fclose(f);
    for(int i=0;i<n; i++)
    {
        printf("%d ",a[i]);
    }
}




void sapSep(int a[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            int tam;
            if(a[i]>a[j])
            {
                tam=a[i];
                a[i]=a[j];
                a[j]=tam;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }

}
int main(){
    int n;
    scanf("%d",&n);
    int a[100];
    nhapFile(n,a);
    xuatFile(n,a);
    printf("\n");
    sapSep(a,n);
    nhapFile1(n,a);
}



















