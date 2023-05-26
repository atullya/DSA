#include <stdio.h>
#include <stdlib.h> // Include the <stdlib.h> header for malloc()

void display(int a[], int b) {
    for (int i = 0; i < b; i++) {
        printf("%d ", a[i]); // Add a space after %d to separate the numbers
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n); // Add an ampersand (&) before n to correctly scan the value

    int *ptr;
    ptr = (int *)malloc(sizeof(int) * n); // Cast the result of malloc() to (int *)

    int a[n];
    for (int i = 0; i < n; i++) {
        printf("Enter: ");
        scanf("%d", &a[i]);
    }
    display(a, n);

    free(ptr); // Free the dynamically allocated memory

    return 0;
}
