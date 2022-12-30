#include <stdio.h>
void solve(int n, int m)
{
    if (n > m)
        return;
    solve(n + 1, m);
    printf("%d\n", n);
}
int main()
{
    int n;
    scanf("%d", &n);
    solve(1, n);
    return 0;
}