#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {

        scanf("%d",&a[i]);
    }
    printf("\n");
    for(int i=n-1; i>=0; i--)
    {
        printf("%d ",a[i]);
    }

    printf("\n");
    float s1=0, s2=0,s3=0,s4=0;
    int dem1=0,dem2=0,dem3=0,dem4=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            dem1++;
            s1+=a[i];
        }
        else
        {
            dem2++;
            s2+=a[i];
        }
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]>=0)
        {
            dem3++;
            s3+=a[i];
        }
        else
        {
            dem4++;
            s4+=a[i];
        }

    }
    if(dem4==0)
    {
        int dem4=1;
    }

    printf("Tong trung binh cac phan tu chan la %.f\n",s1/dem1);
    printf("Tong trung binh cac phan tu le la %.f\n",s2/dem2);
    printf("Tong trung binh cac phan tu duong la %.f\n",s3/dem3);
    printf("Tong trung binh cac phan tu am la %.f\n",s4/dem4);



    int tam;
    for(int i=0; i<=n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                tam=a[i];
                a[i]=a[j];
                a[j]=tam;
            }

        }
        printf("%d  ",a[i]);

    }
    printf("\n");
    int tam1;
    for(int i=0; i<=n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]<a[j])
            {
                tam1=a[i];
                a[i]=a[j];
                a[j]=tam1;
            }

        }
        printf("%d  ",a[i]);
    }
    printf("\n");
    for(int i=0; i<n ; i++)
    {
        if(a[i]%2==0)
        {
            printf("%d ",a[i]);
        }

    }
    printf("\n");
    for(int i=0; i<n ; i++)
    {
        if(a[i]%2!=0)
        {
            printf("%d ",a[i]);
        }
    }
}



