#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

// Function to generate a random password
void generate_password(char *password)
{
    int i;

    // Seed the random number generator with the current time
    srand(time(NULL));

    // Loop to fill the password array with random characters
    for (i = 0; i < PASSWORD_LENGTH - 1; i++) {
        // Generate a random character between ASCII 32 (space) and 126 (~)
        password[i] = (rand() % 95) + 32;
    }
    // Null-terminate the password string
    password[PASSWORD_LENGTH - 1] = '\0';
}

int main(void)
{
    char password[PASSWORD_LENGTH];

    // Generate a random password
    generate_password(password);

    // Print the generated password
    printf("Generated password: %s\n", password);

    return 0;
}

