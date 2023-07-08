#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n + 5];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int left = 0;
    int right = 1;
    int ans = 0;

    for (int i = 0; right + 1 <= n; i++)
    {
        ans += fabs(arr[left] - arr[right]);
        left += 2;
        right += 2;
    }

    printf("%d", ans);
}