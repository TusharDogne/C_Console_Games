#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_TRIES 6

void displayWord(char word[], char guessed[]) {
    for (int i = 0; i < strlen(word); i++) {
        if (guessed[i] == 1)
            printf("%c ", word[i]);
        else
            printf("_ ");
    }
    printf("\n");
}

int isWordGuessed(char guessed[], int length) {
    for (int i = 0; i < length; i++) {
        if (!guessed[i]) return 0;
    }
    return 1;
}

int main() {
    char word[] = "code";   // you can change this
    int length = strlen(word);

    char guessed[100] = {0};
    char used[26] = {0};

    int tries = MAX_TRIES;
    char ch;

    printf("\n=== HANGMAN GAME ===\n");

    while (tries > 0) {
        printf("\nWord: ");
        displayWord(word, guessed);

        printf("Tries left: %d\n", tries);
        printf("Enter a letter: ");
        scanf(" %c", &ch);
        ch = tolower(ch);

        if (used[ch - 'a']) {
            printf("Already used this letter.\n");
            continue;
        }

        used[ch - 'a'] = 1;

        int found = 0;
        for (int i = 0; i < length; i++) {
            if (word[i] == ch) {
                guessed[i] = 1;
                found = 1;
            }
        }

        if (!found) {
            tries--;
            printf("Wrong guess!\n");
        }

        if (isWordGuessed(guessed, length)) {
            printf("\nYou guessed the word: %s\n", word);
            printf("You Win!\n");
            return 0;
        }
    }

    printf("\nGame Over! The word was: %s\n", word);
    return 0;
}