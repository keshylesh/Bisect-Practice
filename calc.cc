#include <cstdio>

/* Basic program to add two numbers! (Now with multiplication! o_o)*/

enum choice {
    no_choice,
    add,
    mult
};

int main() {
    int a,b;

    scanf("%d", &a);
    scanf("%d", &b);

    enum choice c = no_choice;
    while (c == no_choice) {
        printf("1: add\n2: multiply\n");
        scanf("%d", (int *) &c);

        c = (c == add || c == mult) ? c : no_choice;
    }

    if (c == add) {
        printf("%d\n", a+b);
    }
    else {
        printf("%d\n", a*b);
    }

    return 0;
}
