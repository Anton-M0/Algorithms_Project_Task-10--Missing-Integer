#include <stdio.h>

// Algorithm 1: Non-Recursive

int missingInteger_iterative(int A[], int n) {
    int i, ans;
    int size = n + 2;

    int exist[size];
    for (i = 0; i < size; i++)
        exist[i] = 0;

    for (i = 0; i < n; i++) {
        if (A[i] > 0 && A[i] < size)
            exist[A[i]] = 1;
    }


    for (i = 1; i < size; i++) {
        if (exist[i] == 0) {
            ans = i;
            break;
        }
    }

    return ans;
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

    printf("\nResult: %d\n", missingInteger_iterative(A, n));

    return 0;
}


