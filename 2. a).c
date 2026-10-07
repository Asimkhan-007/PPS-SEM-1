#include <stdio.h>
int main ()
{
    int n, original, reverse = 0, reminder;
    printf("enter a Number");
    scanf("%d", &n);
    original = n;
    while (n! = 0)
    {
        reminder = n% 10;
        reverse = reverse * 10 + reminder;
        n = n/10;
    }
    if (orginal == reverse)
        printf("%d is a palindrome number.\n", original);

    else
        printf("%d is not a palindrome.\n", original);
    return 0;
}
