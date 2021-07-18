#include <stdio.h>
void factorial() {
int n, i;
unsigned long long fact = 1;
printf("\nEnter an integer: ");
scanf("%d", &n);

if (n < 0)
printf("Error! Factorial of a negative number doesn't exist.");
else {
for (i = 1; i <= n; ++i) {
fact *= i;
}
printf("Fact of %d = %llu\n", n, fact);
}
}




