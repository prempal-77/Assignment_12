//Write a recursive function to print squares of first N natural numbers
#include <stdio.h>

 int  print_squares(int n, int counter);
 
int main() 
{
    int N;
    printf("Enter the number of squares to print: ");
    scanf("%d", &N);
    print_squares(N, 1);
    printf("\n");
    return 0;
}
 int  print_squares(int n, int counter)
{
    if (counter <= n) {
        printf("%d ", counter * counter);
        print_squares(n, counter + 1);
    }
}

