#include<stdio.h>
#include<math.h>  // is used to add the library so we can have sin, cos, tan, and exponential

// The switch statement selects one of many code blocks to be executed:
// The switch expression is evaluated once
// The value of the expression is compared with the values of each case
// If there is a match, the associated block of code is executed
// The break statement breaks out of the switch block and stops the execution
// The default statement is optional, and specifies some code to run if there is no case match
// %lf is used for long double. number with 15 decimal places


int main() {
    double num1, num2, result;
    char operation;
    
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    printf("Enter the operation (+ for addition, - for subtraction, * for multiplication, / for division, s for sine, c for cosine, t for tangent, e for exponential): ");
    scanf(" %c", &operation);

    switch (operation) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf", num1, num2, result);  // .2 is used to limit to 2 decimal places
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf", num1, num2, result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Cannot divide by 0.");
            } else {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf", num1, num2, result);
            }
            break;
        case 's':
            result = sin(num1 * M_PI / 180);
            printf("Sine of %.4lf degrees: %.4lf", num1, result);        // .4 is used to limit to 4 decimal places
            break;
        case 'c':
            result = cos(num1 * M_PI / 180);
            printf("Cosine of %.4lf degrees: %.4lf", num1, result);
            break;
        case 't':
            result = tan(num1 * M_PI / 180);
            printf("Tangent of %.4lf degrees: %.4lf", num1, result);
            break;
        case 'e':
            result = pow(num1, num2);
            printf("%.4lf^%.4lf = %.4lf", num1, num2, result);
            break;
        default:
            printf("Wrong choice Entered.");
    }
    return 0;
}