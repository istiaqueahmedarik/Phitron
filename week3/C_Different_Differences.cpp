#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int k, n;
        scanf("%d%d", &k, &n);
        int i = 1;
        int j = 1;
        int temp;
        for (int m = 0; m < k; m++)
        {
            i += m;
            if (i <= n && i + (k - (m + 1)) <= n)
            {
                printf("%d ", i);
                // printf("ELEMENT REMAINING -->%d \n", k - (m + 1));
                temp = i;
            }
            else
            {
                temp++;
                printf("%d ", temp);
            }
        }
        printf("\n");
    }
}