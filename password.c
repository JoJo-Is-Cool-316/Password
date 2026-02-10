#include <stdio.h>
#include <string.h>

int main(void)
{
    char password1[16];
    printf("What would you like your password to be?: ");
    fgets(password1, sizeof(password1), stdin);

    char password2[16];
    printf("Password: ");
    fgets(password2, sizeof(password2), stdin);

    if (strcmp(password1, password2) == 0)
    {
        printf("You Got the Password Correct!\n");
        return 0;
    }
    else
    {
        printf("ERROR\n");
        return 1;
    }
}