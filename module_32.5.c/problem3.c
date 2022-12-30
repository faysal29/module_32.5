#include <stdio.h>
void solve(int n, int m)
{
    if (n > m)
        return;
    printf("%d\n", n);
    solve(n + 1, m);
}
int main()
{
    int n;
    scanf("%d", &n);
    solve(1, n);
    return 0;
}