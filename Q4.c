#include <stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int nst = 2 * n - 1; // stars in first row
    int nsp = 0;         // spaces before stars

    //  Top half
    for (int i = 1; i <= n; i++) {
        // spaces
        for (int s = 1; s <= nsp; s++) {
            printf(" ");
        }
        // stars/hollow
        for (int j = 1; j <= nst; j++) {
            if (j == 1 || j == nst || i == 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
        nsp++;
        nst -= 2;
    }

    // reset for bottom half
    nsp = n - 1;
    nst = 1;

    //  Bottom half
    for (int i = 1; i <= n; i++) {
        // spaces
        for (int s = 1; s <= nsp; s++) {
            printf(" ");
        }
        // stars/hollow
        for (int j = 1; j <= nst; j++) {
            if (j == 1 || j == nst || i == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
        nsp--;
        nst += 2;
    }

    return 0;
}
