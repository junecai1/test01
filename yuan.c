#include <stdio.h>
#include <limits.h>
void print_start();

int main(int argc, char const *argv[])
{
    int count_line = 0;
    for (int i = 0; i < 100; i++)
    {

        if (count_line % 10 == 0)
        {
            putchar('\n');
        }
        for (int j = 0; i < 100; j++)
        {
            print_start();
        }
        count_line++;
    }

    char c = getchar();
    if (c == 'y')
    {
        return 0;
    }
    // return 0;
}

void print_start()
{
    printf("*");
}