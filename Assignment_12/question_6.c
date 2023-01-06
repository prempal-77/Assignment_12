//Write a recursive function to print first N even natural numbers in reverse order
#include <stdio.h>

int  print_even_natural_numbers_reverse(int n, int counter);
int main() 
{
    int N;
    printf("Enter the number of even natural numbers to print: ");
    scanf("%d", &N);
    print_even_natural_numbers_reverse(N, 1);
    printf("\n");
    return 0;
}
int  print_even_natural_numbers_reverse(int n, int counter)
{
    if (counter <= n) {
        print_even_natural_numbers_reverse(n, counter + 1);
        printf("%d ", 2 * counter);
    }
}

