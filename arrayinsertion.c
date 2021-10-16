#include <stdio.h>

void display(int arr[], int n)
{
    //code for traversal
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}
int indinsert(int arr[], int size, int element, int capacity, int index)
{
    //code for insertion
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}
void indeletion(int arr[], int size, int index1)
{
//code with deletion
    for (int i = index1; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}
int main()
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, element = 45, index = 2,index1=1;
    display(arr, size);
    indinsert(arr, size, element, 100, index);
    size += 1;
    display(arr, size);
    if (arr[index] == element)
    {
        printf("INSERTION SUCCESSFULL\n");
    }
    else
    {
        printf("INSERTION UNSUCCESSFULL\n");
    }
    indeletion(arr, size, index1);
    size-=1;
    display(arr, size);
    return 0;
}
