//Write a recursive function to print binary of a given decimal number
#include <stdio.h>
void printBinary(int n);
int main()
 {
    int decimal = 10;
    printBinary(decimal);
    printf("\n");
    return 0;
}
void printBinary(int n)
{
    if (n == 0)
    {
        return;
    }

    printBinary(n/2);
    printf("%d", n % 2);
}

