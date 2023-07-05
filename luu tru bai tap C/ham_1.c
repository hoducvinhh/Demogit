#include<stdio.h>
#include<math.h>

int check(int a,int b)
{
    if(a>b) return a;
    else return b;
}

long long  int giaiThua(int n)
{

    long long int  giaithua=1;
    for(int i=1; i<=n; i++)
    {
        giaithua *= i;
    }
    return giaithua;
}

int mu(int a,int b)
{
    long long s;
    s=pow(a,b);
    return s;
}

int check1(int a)
{
    if(a<2) return 0;
    for (int i=2; i<=sqrt(a); i++)
    {
        if(a%i==0) return 0;
    }
    return 1;
}

int main()
{
    int n;
    //	int n,m;
    //	scanf("%d%d",&n,&m);
    scanf("%d",&n);
    //  printf("so lon hon la %d",check(n,m));
    //	printf("giai thua la %lld",giaiThua(n));
    //	printf("ham mu la %d",mu(n,m));
    for(int i=0; i<=n; i++)
    {
        if(check1(i))
            printf("%d   ",i);
    }
}
