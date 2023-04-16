#include <stdio.h>
#include <cs50.h>

int main(void)
{
    #include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Step (1): Prompt the user for Pyramid Size
    int size;
    do
    {
        size = get_int("Size: ");
    } while (size < 1 || size > 8);

    // Step (2): Draw the Pyramid
    for (int i = 0; i < size; i++)
    {
        // Draw the spaces before the hashes
        for (int j = 0; j < size - i - 1; j++)
        {
            printf(" ");
        }

        // Draw the hashes
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }

        // Move to the next line
        printf("\n");
    }

    return 0; // Exit program with success status
}
