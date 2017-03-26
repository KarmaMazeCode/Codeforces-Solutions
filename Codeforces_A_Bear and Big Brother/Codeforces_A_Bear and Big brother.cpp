#include <bits/stdc++.h>
int main()
{
    int a, b, aux=0;
    scanf("%d %d", &a, &b);
    while(a<=b)
    {
        a=3*a;
        b=2*b;
        aux++;
    }
    printf("%d\n", aux);
    return 0;
}
