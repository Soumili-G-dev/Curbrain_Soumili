
#include <stdio.h>

int main()
{
    int n, start, end;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter start and end indices: ");
    scanf("%d %d", &start, &end);

    while(start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    printf("Reversed array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
