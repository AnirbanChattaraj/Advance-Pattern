//*      *
//**    **
//***  ***
//********
//***  ***
//**    **
//*      *
#include <stdio.h>
int main() {
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);

    // upper half (excluding middle line)
    int nst1 = 1;
    int nsp1 = 2 * n - 2;

    for (int i = 1; i <= n - 1; i++) {
        // left stars
        for (int j = 1; j <= nst1; j++) {
            printf("*");
        }
        // spaces
        for (int j = 1; j <= nsp1; j++) {
            printf(" ");
        }
        // right stars
        for (int j = 1; j <= nst1; j++) {
            printf("*");
        }
        nst1++;
        nsp1 -= 2;
        printf("\n");
    }

    // middle line (only once!)
    for (int i = 1; i <= 2 * n; i++) {
        printf("*");
    }
    printf("\n");

    // lower half
    int nst = n - 1;
    int nsp = 2;

    for (int i = 1; i <= n - 1; i++) {
        // left stars
        for (int j = 1; j <= nst; j++) {
            printf("*");
        }
        // spaces
        for (int j = 1; j <= nsp; j++) {
            printf(" ");
        }
        // right stars
        for (int j = 1; j <= nst; j++) {
            printf("*");
        }
        nst--;
        nsp += 2;
        printf("\n");
    }

    return 0;
}
