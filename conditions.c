#include <stdio.h>

void guessNumber(int guess) {
    if (guess < 555) {
        printf("Your guess is too low.\n");
    } else if (guess > 555) {
        printf("Your guess is too high.\n");
    } else {
        printf("Correct. You guessed it!\n");
    }
}

int main() {
    int target = 10;
    if (target == 10) {
        printf("Target is equal to 10");
    }

    int foo = 1;
    int bar = 2;

    if (foo < bar) {
        printf("foo is smaller than bar.");
    } else if (foo == 3) {
        printf("Else If Statements");
    } else {
        printf("foo is greater than bar.");
    }

    // Nested If else
    int peanuts_eaten = 22;
    int peanuts_in_jar = 100;
    int max_peanut_limit = 50;

    if (peanuts_in_jar > 80) {
        if (peanuts_eaten < max_peanut_limit) {
            printf("Take as many peanuts as you want!\n");
        }
    } else {
        if (peanuts_eaten > peanuts_in_jar) {
            printf("You can't have anymore peanuts!\n");
        }
        else {
            printf("Alright, just one more peanut.\n");
        }
    }

    // Operators
    foo = 1;
    bar = 2;
    int moo = 3;

    if (foo < bar && moo > bar && foo != 4) {
        printf("foo is smaller than bar AND moo is larger than bar.");
    }

    if (foo < bar || moo > bar) {
        printf("foo is smaller than bar OR moo is larger than bar.");
    }

    // Lesson
    guessNumber(500);
    guessNumber(600);
    guessNumber(555);

    return 0;
}