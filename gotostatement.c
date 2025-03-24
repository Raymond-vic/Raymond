#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) {
        goto positive;
    } else if (number < 0) {
        goto negative;
    } else {
        goto zero;
    }

positive:
    printf("The number is positive.\n");
    goto end;

negative:
    printf("The number is negative.\n");
    goto end;

zero:
    printf("The number is zero.\n");

end:
    return 0;
}