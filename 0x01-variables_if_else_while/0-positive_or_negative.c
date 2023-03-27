#include <stdio.h>

int main() {
    char letter = 'a'; // Start with the letter 'a'

    // Loop through each letter of the alphabet
    while (letter <= 'z') {
        putchar(letter); // Print the current letter
        letter++; // Move to the next letter
    }

    putchar('\n'); // Print a newline character at the end

    return 0;
}

