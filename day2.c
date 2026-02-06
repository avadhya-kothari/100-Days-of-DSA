#include <stdio.h>
int main()
{
    int n, pos;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
 
int arr[n];

    printf("Enter the elements: ");
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the element you want to delete: ");
    scanf("%d", &pos);

    //Shifting elements to left
    for (int i=pos-1; i<n-1; i++) {
        arr[i] = arr[i+1];
    }
    //print the updated array of size n-1
    printf("The updated array is: ");
    for(int i=0; i<n-1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}