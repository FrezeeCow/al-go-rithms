#include<stdio.h>
int linearSearch(int arr[], int start ,int end, int x)
{

    if (start<=end) {
        for(size_t i = start; i<end; i++)
        {
            
            if (arr[i] == x) {
                return i;
            }
        }
        
    }
    return -1;
    
}

int main()
{
	int arr[] = { 2, 3, 7, 8, 78, 99, 102, 5555 };
	int x = 99;
    int result = linearSearch(arr, 0, sizeof(arr) / sizeof(arr[0]), x);

	if (result == -1) {
		printf("Element not present!\n");
	}
	else {
		printf("Element found at index %d!\n", result);
	}
    input_to_quit();

    return 0;
}
