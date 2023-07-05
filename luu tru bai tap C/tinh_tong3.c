#include <stdio.h>
#include <math.h>

int main()
{
   int n;
   float s=0;
    scanf("%d",&n);
    for (int i=1 ; i<=n; i++)
    {
        s += (float)1/(i*(i+1));
    }
    printf ("%.2f",s);
}
