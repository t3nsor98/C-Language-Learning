#include <stdio.h>

void namaste();
void arigato();

int main()
{
    char user[100];
    scanf("%99s", user);
    if (user == "Indian")
    {
        namaste(user);
    }
    else
    {
        arigato(user);
    }
}

void namaste(user)
{
    printf("Namste!!! %s", user);
}

void arigato(user)
{
    printf("Arigato!!!! %s", user);
}