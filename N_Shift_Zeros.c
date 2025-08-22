#include <stdio.h>
int shiftZeroes(int arr1[], int n)
{
    
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int arr1[] = shiftZeroes(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }
    return 0;
}
