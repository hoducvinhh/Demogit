#include <stdio.h>
#include <math.h>

int main()
{
    unsigned long long int n,s=0;
    scanf("%llu",&n);
    for ( int i=1 ; i<=n ; i++)
    {
        s += pow(i,2);
    }
    printf ("%llu",s);

}
