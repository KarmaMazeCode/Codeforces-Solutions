#include <bits/stdc++.h>
int main()
{
    long long int n, m, a, col=0, lin=0;
    scanf("%lld %lld %lld", &n, &m, &a);
    col=n/a;
    lin=m/a;
    if(n%a!=0) col++;
    if(m%a!=0) lin++;
    printf("%lld\n", lin*col);
    return 0;
}
