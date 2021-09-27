#include <stdio.h>
int count = 0;
int main()
{
    if (count < 10)
    {
        printf("%d\n", count);
        count++;
        main();
    }
    return 0;
}