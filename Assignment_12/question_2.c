// Write a recursive function to print first N natural numbers in reverse order
#include <stdio.h>

int print_natural_numbers_reverse(int n); 
int main() 
{
    int N;
    printf("Enter the number of natural numbers to print: ");
    scanf("%d", &N);
    print_natural_numbers_reverse(N);
    printf("\n");
    return 0;
}
int print_natural_numbers_reverse(int n)
{
    if (n > 0) {
        printf("%d ", n);
        print_natural_numbers_reverse(n - 1);
    }
}

