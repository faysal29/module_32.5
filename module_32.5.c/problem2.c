#include <stdio.h>
int solve(int ara[], int m)
{
    if (m == 0)
        return 0;
    int s = solve(ara + 1, m - 1);
    return s + ara[0] % 10; // ara[o]
}
int main()
{
    int m;
    scanf("%d", &m);
    int ara[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &ara[i]);
    }
    int s;
    s = solve(ara, m);
    printf("%d\n", s);
    return 0;
}
