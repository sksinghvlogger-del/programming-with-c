#include <stdio.h>
int main() {
    printf("Sneha Mishra-11375\n");
    int num, a, b, c, choice;
    float x, y;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("%d is Even\n", num);
    else printf("%d is Odd\n", num);
    printf("\nEnter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b) {
        if (a > c)
            printf("Max = %d\n", a);
        else printf("Max = %d\n", c);
    } else {
        if (b > c) printf("Max = %d\n", b);
        else printf("Max = %d\n", c);
    }
    int small = (a < b) ? a : b;
    printf("Smaller of a and b using ternary = %d\n", small);
    printf("\nCalculator\nEnter two numbers: ");
    scanf("%f %f", &x, &y);
    printf("Choose operation: 1-Add  2-Sub  3-Mul  4-Div\n");
    scanf("%d", &choice);
    switch (choice) {
        case 1: printf("Result = %.2f\n", x + y); break;
        case 2: printf("Result = %.2f\n", x - y); break;
        case 3: printf("Result = %.2f\n", x * y); break;
        case 4: printf("Result = %.2f\n", x / y); break;
        default: printf("Invalid choice\n");
    }
    return 0;
}
