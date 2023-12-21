#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isStrongPassword(const char *password) {
    int length = strlen(password);
    int hasLowerCase = 0, hasUpperCase = 0, hasDigit = 0, hasSpecialChar = 0;
    for (int i = 0; i < length; i++) {
        if (islower(password[i])) {
            hasLowerCase = 1;
        } else if (isupper(password[i])) {
            hasUpperCase = 1;
        } else if (isdigit(password[i])) {
            hasDigit = 1;
        } else if (strchr("!@#$%^&*()-+", password[i])) {
            hasSpecialChar = 1;
        }
    }
    return (length >= 8) && hasLowerCase && hasUpperCase && hasDigit &&
           hasSpecialChar;
}
int main() {
    char password[50];
    printf("Enter the password: ");
    scanf("%s", password);
    if (isStrongPassword(password)) {
        printf("The password is strong.\n");
    } else {
        printf("The password is not strong.\n");
    }
    return 0;
}