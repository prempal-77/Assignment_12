//Write a recursive function to print first N natural numbers
#include <stdio.h>

int  print_natural_numbers(int n);
    int main()
 {
    int N;
    printf("Enter the number of natural numbers to print: ");
    scanf("%d", &N);
    print_natural_numbers(N);
    printf("\n");
    return 0;
}
int print_natural_numbers(int n)
{
    if (n > 0) {
        print_natural_numbers(n - 1);
        printf("%d ", n);
    }
}

