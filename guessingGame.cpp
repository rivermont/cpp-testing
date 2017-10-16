// A simple guessing game.

//#include <random>
#include <stdio.h>
#include <time.h>
#include <iostream>

using namespace std;

int prng_from_time() {
    time_t seconds;
    seconds = time(NULL);
    int result = seconds*seconds;
    return result;
}

int main() {
    int i;
    // Choose random number between 1 and 100
    // While the guess is incorrect:
        // Ask user to guess
        // Tell user whether their guess was too high or too low
    // If the guess is correct:
        // Tell user their guess was correct

    return 0; // Exit
}
