#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int arr[2][2];
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }
        int sit = -1;
        if (arr[0][0] < arr[0][1] && arr[1][0] < arr[1][1] && arr[0][0] < arr[1][0] && arr[0][1] < arr[1][1])
            sit = 0;
        else if (arr[1][0] < arr[0][0] && arr[1][1] < arr[0][1] && arr[1][0] < arr[1][1] && arr[0][0] < arr[0][1])
            sit = 0;
        else if (arr[1][1] < arr[1][0] && arr[0][1] < arr[0][0] && arr[1][1] < arr[0][1] && arr[1][0] < arr[0][0])
            sit = 0;
        else if (arr[0][1] < arr[1][1] && arr[0][0] < arr[1][0] && arr[0][1] < arr[0][0] && arr[1][1] < arr[1][0])
            sit = 0;
        if (sit == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}