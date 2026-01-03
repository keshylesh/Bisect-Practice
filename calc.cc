#include <cstdio>

/* Program to add and multiply two numbers...but does it work? */

enum choice {
    no_choice,
    add,
    mult
};

/* Function to add two numbers */
int add_func(int a, int b) {
    return a*b;
}

/* Function to multiply two numbers */
int mult_func(int a, int b) {
    return a*b;
}

/* Main function */
int main() {
    int a,b;

    printf("Pick your first number: ");
    scanf("%d", &a);
    printf("Pick your second number: ");
    scanf("%d", &b);

    enum choice c = no_choice;
    while (c == no_choice) {
        printf("Pick an option:\n");
        printf("1: add\n2: multiply\n");
        scanf("%d", (int *) &c);

        c = (c == add || c == mult) ? c : no_choice;
    }

    if (c == add) {
        printf("%d\n", add_func(a,b));
    }
    else {
        printf("%d\n", mult_func(a,b));
    }

    return 0;
}
