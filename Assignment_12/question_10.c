// Write a recursive function to print reverse of a given number
#include <stdio.h>


void printReverse(int n);
int main()
 {
    int num = 12345;
    printReverse(num);
    printf("\n");
    return 0;
}
void printReverse(int n)
{
    if (n < 10) {
        printf("%d", n);
        return;
    }

    printf("%d", n % 10);
    printReverse(n/10);
}

