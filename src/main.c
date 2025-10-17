#include <stdio.h>

int main()
{
    int arr[100];
    int rc;
    int n=0;

    while (rc = scanf("%d", &arr[n]) == 1)
    {
        n++;
    }

    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                int slot = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = slot;
            }
        }
    }

    for (int i = 0; i < n; i++) 
    {
        if (i < n-1)
        {
            printf("%d ", arr[i]);
        }
        else
        {
            printf("%d\n", arr[i]);
        }
    }

    return 0;

}