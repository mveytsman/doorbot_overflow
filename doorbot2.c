#include <stdio.h>
#include <string.h>

char* SECRET_HACKERSCHOOL_PASSWORD = "hunter1";

int check_password() {
    char password_guess[32];
    puts("Enter the password to open the door");
    scanf("%[^\n]", password_guess);
    if (strcmp(password_guess, SECRET_HACKERSCHOOL_PASSWORD) == 0) {
        return 1;
    } else {
        return 0;
    }
}

void open_door() {
    puts("Opening Hacker School Door.");
    //TODO learn how to solder;
}

int main(int argc, char **argv) {
    puts("Hi there!\nWelcome to Hacker School.");
    if (check_password()) {
        open_door();
    } else {
        puts("I can't let you do that Dave");
    }
    return 0;
}
