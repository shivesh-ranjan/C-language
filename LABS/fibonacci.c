#include <stdio.h>
int main() {

    int i, n;

  // Initial first and second terms
    int t1 = 0, t2 = 1;

  // Third Term
    int nextterm = t1 + t2;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

  // print the first two terms t1 and t2
    printf("Fibonacci Series: %d, %d, ", t1, t2);

  // print 3rd to nth terms
    for (i = 3; i <= n; ++i) {
        printf("%d, ", nextterm);
        t1 = t2;
        t2 = nextterm;
        nextterm = t1 + t2;
    }

    return 0;
}