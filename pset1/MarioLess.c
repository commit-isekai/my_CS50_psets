#include <cs50.h>
#include <stdio.h>

int main(void)
{
    do
    {
        int height = get_int("Height: ");

        if (height > 8 || height < 1)
        {
            main();
        }
        else
        {
            for (int line = 0; line < height; line++)
            {
                for (int spaces = height - line - 1; spaces > 0; spaces--)
                {
                    printf(" ");
                }
                for (int hashes = 0; hashes <= line; hashes++)
                {
                    printf("#");
                }
                printf("\n");
            }
            exit(0);
        }
    } while (true);
}