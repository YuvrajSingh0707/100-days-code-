#include <stdio.h>

int main() {
    int num1, num2;
    int sum, diff, prod, quot;
    
    // User se 2 numbers input lena
    scanf("%d %d", &num1, &num2);
    
    // Sum, Difference aur Product calculate karna
    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;
    
    // Output ka pehla hissa print karna
    printf("Sum=%d, Diff=%d, Product=%d, ", sum, diff, prod);
    
    // Division by zero ko handle karna
    if (num2 != 0) {
        quot = num1 / num2;
        printf("Quotient=%d\n", quot);
    } else {
        printf("Quotient=Undefined (Cannot divide by zero)\n");
    }
    
    return 0;
}
