#include <stdio.h>

int main() {
    char name[50];
    int age;

    // Taking input from the user
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);  // Using fgets to read string input
    printf("Enter your age: ");
    scanf("%d", &age);

    // Displaying the input data
    printf("Hello, %s", name);
    printf("You are %d years old.\n", age);

    return 0;
}
