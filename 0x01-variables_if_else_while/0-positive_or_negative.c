#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*The main function is where the program starts.
*This program uses if functions to test the number type and return 0.
*Return = Always 0 to indicate success.
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0) {
printf("%d is positive\n", n);
}
else if (n < 0) {
printf("%d is negative\n", n);
}
else {
printf("%d is zero\n", n);
}
return (0);
}

