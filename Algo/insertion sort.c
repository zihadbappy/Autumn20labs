#include <math.h> 
#include <stdio.h> 

int main() 
{ 
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    int key, j; 
	for (int i = 1; i < n; i++) { 
		key = arr[i]; 
		j = i - 1; 

		while (j >= 0 && arr[j] > key) { 
			arr[j + 1] = arr[j]; 
			j--;; 
		} 
		arr[j + 1] = key; 
        
	for (int i = 0; i < n; i++) 
		printf("%d ", arr[i]); 
        printf("\n");
	} 
 
	for (int i = 0; i < n; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 

	return 0; 
} 
