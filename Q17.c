
#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int maxFreq = 0;
    int ans = arr[0];

    for(int i = 0; i < n; i++)
    {
        int count = 0;

        for(int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        if(count > maxFreq || (count == maxFreq && arr[i] < ans))
        {
            maxFreq = count;
            ans = arr[i];
        }
    }

    printf("Most popular item: %d\n", ans);

    return 0;
}
