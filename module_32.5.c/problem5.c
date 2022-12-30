#include <stdio.h>
int solve(int n, int m)
{
    if (n > m)
        return 0;
    int s = solve(n + 1, m);
    return s + n;
}
int main()
{
    int n;
    scanf("%d", &n);
    int s = solve(1, n);
    printf("%d\n", s);
    return 0;
}