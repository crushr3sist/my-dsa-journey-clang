#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

typedef const char *str;

str t1 = "tacocat";
str t2 = "racecar";
str t3 = "pop";

bool is_palindrome(str word)
{
    int forward = 0;
    int backward = strlen(word) - 1;

    while (forward < backward)
    {
        if (word[forward] != word[backward])
        {
            return false;
        }
        else
        {
            forward += 1;
            backward -= 1;
        }
    }
    return true;
}

int main()
{
    printf("%d\n", is_palindrome(t1));
    printf("%d\n", is_palindrome(t3));
    printf("%d", is_palindrome(t2));
    return 0;
}
