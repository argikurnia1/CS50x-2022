#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);



//  Instead of the do while loop from earlier, we can use a while loop:
//     while (true)
// {
//     n = get_int("Size: ");
//     if (n > 1)
//     {
//         break;
//     }
// }

    // For each row
    for (int i = 0; i < n; i++)
    {
        // For each column
        for (int j = 0; j < n; j++)
        {
            // Print a brick
            printf("#");
        }

        // Move to next row
        printf("\n");
    }   
}