#include <stdio.h>

int main(void)
{
    char a,b,c;
    char password_1, password_2, password_3;

    /* You give the program 3 letters and the reverse is given to you. */
    printf("Enter 3 letters :\n");
    scanf("%c%c%c", &a, &b, &c);
    printf("The reverse of %c%c%c is %c%c%c\n", a,b,c,c,b,a);

    /* The program checks the 3 letters and compare them to the 3 letters that has been set as the password. */
    /* After that the program will say to you if your letters were correct. */
    password_1 = 'L';
    password_2 = 'M';
    password_3 = 'X';
    if (password_1==c & password_2==b & password_3==a)
    {
        printf("Code is correct, your in\n");
    }
    else
    {
        printf("Code is incorrect, your not in\n");
    }
    return 0;
}