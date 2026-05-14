#include <stdio.h>

// Algorithm 2: Recursive

int isFound(int A[], int n, int val) {
    if (n == 0)
        return 0;
    if (A[0] == val)
        return 1;
    return isFound(A + 1, n - 1, val);
}


int findMissing(int A[], int n, int current) {
    if (current > n + 1)
        return current;
    if (isFound(A, n, current) == 0)
        return current;
    return findMissing(A, n, current + 1);
}

int missingInteger_recursive(int A[], int n) {
    return findMissing(A, n, 1);
}

int main() {
    int n, i;

    printf("Enter array size: ");
    scanf("%d", &n);

    int A[n];

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
    }

    printf("\nResult: %d\n", missingInteger_recursive(A, n));

    return 0;
}
