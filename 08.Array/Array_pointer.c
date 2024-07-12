#include <stdio.h>
int main()
{
	int arr[5] = { 10, 20, 30, 40, 50 };
	int* ptr = &arr[0];
	printf("Address Stored in Array name: %p\n ",arr);
    printf("Address of 1st Array Element: %p\n",&arr[0]);
	printf("Array elements using pointer: ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", *ptr++);
	}
	return 0;
}
