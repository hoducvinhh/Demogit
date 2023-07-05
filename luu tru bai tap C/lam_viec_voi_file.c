/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    FILE *f;
    f = fopen("VIDU1.txt","w");
    if(f==NULL)
    {
        printf("\nLOI TAO FLIE");
        return;
    }
   // fprintf(f,"CONG HOA XA HOI CHU NGHIA VIET NAM");
    int n;
    scanf("%d",&n);
    fprintf(f,"%d",n);
    fclose(f);
}
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
///*
int main()
{
    FILE *a;
    a=fopen("VIDU1.txt","r");
    if(a==NULL)
    {
        printf("LOI FILE");
        return;
    }
    unsigned long long int  n;
    fscanf(a,"%lld",&n);
    printf("SO O TRONG FILE LA : %lld",n);
    fclose(a);
}
//*/













