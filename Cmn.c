#include <stdio.h>
int main(int argc, char const *argv[])
{
    struct user
    {
        char username[50];
        char password[50];
    };
    int credentials(char username, char password)
    {
        FILE *fptr
            fptr = fopen("login.txt", "r");
        while (fread)
    }
    if (strcmp)
    {
        /* code */
    }
    printf("Username: ");
    scanf("%s", username);

    printf("Password: ");
    scanf("%s", password);

    if (credentials(username, password))
    {
        printf("Login successful.\n");
    }
    else
    {
        printf("Invalid username or password.\n");
    }

    return 0;
}