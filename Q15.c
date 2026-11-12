#include <stdio.h>

int main()
{
    int n, i, minValue;
    long long minAbs, absValue;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    minValue = arr[0];

    if(arr[0] < 0)
        minAbs = -(long long)arr[0];
    else
        minAbs = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] < 0)
            absValue = -(long long)arr[i];
        else
            absValue = arr[i];

        if(absValue < minAbs)
        {
            minAbs = absValue;
            minValue = arr[i];
        }
    }

    printf("Element with minimum absolute value: %d", minValue);

    return 0;
}