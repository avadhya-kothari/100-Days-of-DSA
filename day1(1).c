/* Problem : Write a C program to insert an element x at a given 1-based position
 pos in an array of n integers. Shift existing elements to the right to make space. */

#include <stdio.h>
int main() {
    int n, pos, x;
    printf("Enter n: ");
    scanf("%d", &n);
    
    int a[1000];
    printf("Enter the array of elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the position: ");
    scanf("%d", &pos);
    printf("Enter the element you want to insert: ");
    scanf("%d", &x);

    int idx = pos - 1;
    
    //Shift elements to the right starting from the end of the array
    for ( int i=n-1; i>=idx; i--){
        a[ i + 1] = a[i];
    }

    //Inset x at the required position
        a[idx] = x;

    //Print the updated array of size n+1
    printf("The updated array is: ");
    for (int i=0 ; i<n+1; i++){
        printf("%d", a[i]);
        if (i < n) printf(" ");
    }

    return 0;
}