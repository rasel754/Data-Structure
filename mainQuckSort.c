#include <stdio.h>

// Function to swap two elements
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function to find the pivot position and partition the array
int partition(int a[], int low, int high)
{
    int pivot = a[high]; // Choosing the last element as pivot
    int i = (low - 1);   // Index of smaller element

    for (int j = low; j <= high - 1; j++)
    {
        // If the current element is smaller than the pivot
        if (a[j] < pivot)
        {
            i++; // Increment index of smaller element
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i + 1], &a[high]);
    return (i + 1);
}

// Quick sort function
void quick_sort(int a[], int low, int high)
{
    if (low < high)
    {
        // pi is partitioning index, a[pi] is now at the right place
        int pi = partition(a, low, high);

        // Recursively sort elements before partition and after partition
        quick_sort(a, low, pi - 1);
        quick_sort(a, pi + 1, high);
    }
}

int main()
{
    int a[] = {10, 5, 2, 8, 7};
    int n = sizeof(a) / sizeof(a[0]);

    quick_sort(a, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

