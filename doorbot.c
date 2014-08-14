#include <stdio.h>
#include <string.h>

char* SECRET_HACKERSCHOOL_PASSWORD = "hunter1";

int check_password() {
    // int success = 0;
    char password_guess[32];
    puts("Enter the password to open the door");
    fflush(stdout);
    scanf("%[^\n]", password_guess);
    return (strcmp(password_guess, SECRET_HACKERSCHOOL_PASSWORD) == 0);
}

void open_door() {
    puts("Opening Hacker School Door.");
    //TODO learn how to solder;
    fflush(stdout);
}

int main(int argc, char **argv) {
    puts("Hi there!\nWelcome to Hacker School.");
    fflush(stdout);
    if (check_password()) {
        open_door();
    } else {
        puts("I can't let you do that Dave");
        fflush(stdout);
    }
    return 0;
}
