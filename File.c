#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    
    // Printing addresses of all elements in the array
    printf("Addresses of elements in the array:\n");
    for (int i = 0; i < 5; ++i) 
    {
        printf("Address of arr[%d]: %u\n", i, &arr[i]);
    }
    
    return 0;
}
