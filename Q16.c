#include <stdio.h>

int main()
{
    int n, i;
    int highest = -1, second = -1;

    printf("Enter the number of athletes: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the scores:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(arr[i] > highest)
        {
            second = highest;
            highest = arr[i];
        }
        else if(arr[i] < highest && arr[i] > second)
        {
            second = arr[i];
        }
    }

    printf("Second highest unique score: %d", second);

    return 0;
}