#include <stdio.h>

void reverse(int n, int arr[])
{
    int i, j;

    int temp = 0;
    for (int i = 0; i < n; i++)
    {

        printf("%d", arr[i]);
    }
    printf("\n");

    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for (int i = 0; i < n; i++)
    {

        printf("%d", arr[i]);
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    reverse(5, arr);
}