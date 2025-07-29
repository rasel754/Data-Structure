#include <stdio.h>
// Function to perform linear search
int linearSearch(int arr[], int n, int target) {
for (int i = 0; i < n; i++) {
if (arr[i] == target)
return i; // Return the index if target is found
}
return -1; // Return -1 if target is not found
}
int main() {
int n, target;
// Input array size
printf("Enter the size of the array: ");
scanf("%d", &n);
int arr[n];
// Input array elements
printf("Enter %d elements:\n", n);
for (int i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
// Input the target element to search
printf("Enter the element to search: ");
scanf("%d", &target);
// Perform linear search
int index = linearSearch(arr, n, target);
// Display result
if (index != -1) {
printf("Element found at index: %d\n", index);
} else {
printf("Element not found in the array.\n");
}
return 0;
}
