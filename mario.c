#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Make variables for height, spaces, hashes and second hashes
    int height;
    int spaces;
    int hashes;
    int hashesSecond;
    //Prompt user for height
    do
    {
        height = get_int("Height: ");
    }
    //Set conditions
    while (height < 1 || height > 8);
    //Set rows
    for (int i = 1; i <= height; i++)
    {
        //Set columns of spaces
        for (spaces = 1; spaces <= (height-i); spaces++)
        {
            printf(" ");
        }
        //Set columns of hashes
        for (hashes = 1; hashes <= i; hashes++)
        {
            printf("#");
        }
        //Set the 2 columns of spaces between the hashes
        printf("  ");
        //Set columns of second hashes
        for (hashesSecond = 1; hashesSecond <= i; hashesSecond++)
        {
            printf("#");
        }
        //Set new lines
        printf("\n");
    }
    return 0;
}
