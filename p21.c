#include <stdio.h> 
int main() 
{ 
int arr[100]; 
int i, n, sum=0; 
/* Input size of the array */ 
printf("Enter size of the array: "); 
    scanf("%d", &n); 
 
    /* Input elements in array */ 
    printf("Enter %d elements in the array: ", n); 
    for(i=0; i<n; i++) 
    { 
        printf(“arr[i]=%d”,i); 
        scanf("%d", &arr[i]); 
 
    /* 
     * Add each array element to sum 
     */ 
       
  sum = sum + arr[i]; 
} 
 
    printf("Sum of all elements of array = %d", sum); 
 
    return 0; 
} 
