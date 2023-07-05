#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    scanf("%d",&a);
    if(a%3==0)
    {
        if(a%5==0)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    else
    {
        printf("0");
    }

}

