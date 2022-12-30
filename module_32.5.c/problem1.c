#include <stdio.h>
int solve(int n, int m)
{
    if (m == 0)
        return 1;
    else
        return (n * solve(n, m - 1));
}
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int s = solve(n, m);
    printf("%d\n", s);
    return 0;
}