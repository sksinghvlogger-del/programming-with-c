#include <stdio.h>
int main() {
     printf("Sneha Mishra-11375\n");
    int a, x, y; float b; char c; double d;   
    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("Enter a float: ");
    scanf("%f", &b);
    printf("Enter a character: ");
    scanf(" %c", &c); 
    printf("Enter a double value: ");
    scanf("%lf", &d);
    printf("\n--- Output ---\n");
    printf("Integer: %d\n", a);
    printf("Float: %.2f\n", b);
    printf("Character: %c\n", c);
    printf("Double: %.4lf\n", d);
    printf("\nEnter two integers to swap:\n");
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);
    int temp = x; x = y; y = temp;
    printf("\nAfter swapping:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    return 0;
}
