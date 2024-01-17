#include <stdio.h>
#include <string.h>

int main()
{
    char nationality[50];

    printf("Enter your nationality: ");
    scanf("%s", nationality);

    // Convert input to lowercase for case-insensitive comparison
    for (int i = 0; nationality[i]; i++)
    {
        nationality[i] = tolower(nationality[i]);
    }

    if (strcmp(nationality, "indian") == 0)
    {
        printf("Namaste!\n");
    }
    else
    {
        printf("Arigato!\n");
    }

    return 0;
}
