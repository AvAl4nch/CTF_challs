#include <stdio.h>
#include <stdlib.h>

void setup() {
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);
}

int main() {

    setup();

    int userNumber;
    int num = 2144444444 ;
    int favorite_number = -42000000;
    char flag[] = "PlaygroundsCTF{pharaohs_0verflow}";
    // correct num = 2108522852


    printf("Enter a number: ");
    while (scanf("%d", &userNumber) != 1) {
        printf("Invalid input! Please enter a number: ");
        while (getchar() != '\n'); // Clear input buffer
    }

    if (userNumber < 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }

    int result = userNumber + num;
    printf("The result is: %d\n", result);
    
    if (result == favorite_number) {

        printf("Congratulations! You win! The flag is: %s\n", flag);

    } else {
        printf("Sorry, you didn't get my favorite number. Try again!\n");
        printf("Psst... It's %d.\n", favorite_number);
    }

    return 0;
}
