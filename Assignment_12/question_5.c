// Write a recursive function to print first N even natural numbers
#include <stdio.h>

int  print_even_natural_numbers(int n, int counter);
int main()
 {
    int N;
    printf("Enter the number of even natural numbers to print: ");
    scanf("%d", &N);
    print_even_natural_numbers(N, 1);
    printf("\n");
    return 0;
}
int  print_even_natural_numbers(int n, int counter)
{
    if (counter <= n) {
        printf("%d ", 2 * counter);
        print_even_natural_numbers(n, counter + 1);
    }
}

