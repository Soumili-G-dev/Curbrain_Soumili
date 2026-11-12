#include <stdio.h>

int main()
{
    int n, threshold, i, k = 0;

    printf("Enter the number of sales figures: ");
    scanf("%d", &n);

    int sales[n], result[n];

    printf("Enter the sales figures:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &sales[i]);
    }

    printf("Enter the threshold: ");
    scanf("%d", &threshold);

    for(i = 0; i < n; i++)
    {
        if(sales[i] >= threshold)
        {
            result[k] = sales[i];
            k++;
        }
    }

    printf("Filtered sales: ");
    for(i = 0; i < k; i++)
    {
        printf("%d ", result[i]);
    }

    if(k == 0)
    {
        printf("Empty array");
    }

    return 0;
}