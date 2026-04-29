#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// Set console text color
void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

// Position cursor (not used now but useful for improvements)
void gotoxy(int x, int y) {
    COORD coord = {x, y};
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// Generate dice value (1–6)
int rd() {
    int rem;
A:
    rem = rand() % 7;
    if (rem == 0)
        goto A;
    return rem;
}

// Print the game board with player
void displaychart(int curp1, int curp2) {
    int i, j, t, c, sft = 0, diceres;

    for (i = 10; i > 0; i--) {
        t = i - 1;
        if ((sft % 2) == 0) {
            c = 0;
            for (j = 10; j >= 1; j--) {
                diceres = (i * j) + (t * c++);
                if (curp1 == diceres && curp2 == diceres) {
                    setColor(13); // Purple if both on same cell
                    printf("BOTH\t");
                } else if (curp1 == diceres) {
                    setColor(14); // Yellow for P1
                    printf("P1\t");
                } else if (curp2 == diceres) {
                    setColor(11); // Cyan for P2
                    printf("P2\t");
                } else if (diceres == 25 || diceres == 65 || diceres == 99) {
                    setColor(12); // Snake head
                    printf("S\t");
                } else if (diceres == 13 || diceres == 60 || diceres == 70) {
                    setColor(10); // Ladder
                    printf("L\t");
                } else {
                    setColor(7);
                    printf("%d\t", diceres);
                }
            }
        } else {
            c = 9;
            for (j = 1; j <= 10; j++) {
                diceres = (i * j) + (t * c--);
                if (curp1 == diceres && curp2 == diceres) {
                    setColor(13);
                    printf("BOTH\t");
                } else if (curp1 == diceres) {
                    setColor(14);
                    printf("P1\t");
                } else if (curp2 == diceres) {
                    setColor(11);
                    printf("P2\t");
                } else if (diceres == 25 || diceres == 65 || diceres == 99) {
                    setColor(12);
                    printf("S\t");
                } else if (diceres == 13 || diceres == 60 || diceres == 70) {
                    setColor(10);
                    printf("L\t");
                } else {
                    setColor(7);
                    printf("%d\t", diceres);
                }
            }
        }
        sft++;
        printf("\n\n");
    }

    setColor(7);
    printf("--------------------------------------------------------------------------\n");
}

// Main game loop
int main() {
    int dice, cur_pos1 = 0, cur_pos2 = 0;
    char ch;

    while (1) {
        setColor(11);
        printf("\n\t=== SNAKE AND LADDER GAME ===\n");
        printf("Snakes: 25?9, 65?40, 99?1 | Ladders: 13?42, 60?83, 70?93\n");
        setColor(7);
        printf("\nCurrent Positions ? Player 1: %d | Player 2: %d\n", cur_pos1, cur_pos2);
        printf("Choose your move:\n");
        printf("1. Player 1 plays\n");
        printf("2. Player 2 plays\n");
        printf("3. Exit\n");
        scanf(" %c", &ch);

        switch (ch) {
            case '1':
                dice = rd();
                printf("\n?? Player 1 rolled: %d\n", dice);
                if (dice == 6) printf("?? Extra turn for rolling 6!\n");
                cur_pos1 += dice;

                if (cur_pos1 <= 100) {
                    // Snakes
                    if (cur_pos1 == 99) cur_pos1 = 1;
                    else if (cur_pos1 == 65) cur_pos1 = 40;
                    else if (cur_pos1 == 25) cur_pos1 = 9;

                    // Ladders
                    else if (cur_pos1 == 70) cur_pos1 = 93;
                    else if (cur_pos1 == 60) cur_pos1 = 83;
                    else if (cur_pos1 == 13) cur_pos1 = 42;
                } else {
                    cur_pos1 -= dice;
                    printf("? Move exceeds board. Staying at %d\n", cur_pos1);
                }

                if (cur_pos1 == 100) {
                    setColor(10);
                    printf("\n?? Player 1 Wins!\n");
                    exit(0);
                }

                displaychart(cur_pos1, cur_pos2);
                break;

            case '2':
                dice = rd();
                printf("\n?? Player 2 rolled: %d\n", dice);
                if (dice == 6) printf("?? Extra turn for rolling 6!\n");
                cur_pos2 += dice;

                if (cur_pos2 <= 100) {
                    // Snakes
                    if (cur_pos2 == 99) cur_pos2 = 1;
                    else if (cur_pos2 == 65) cur_pos2 = 40;
                    else if (cur_pos2 == 25) cur_pos2 = 9;

                    // Ladders
                    else if (cur_pos2 == 70) cur_pos2 = 93;
                    else if (cur_pos2 == 60) cur_pos2 = 83;
                    else if (cur_pos2 == 13) cur_pos2 = 42;
                } else {
                    cur_pos2 -= dice;
                    printf("? Move exceeds board. Staying at %d\n", cur_pos2);
                }

                if (cur_pos2 == 100) {
                    setColor(10);
                    printf("\n?? Player 2 Wins!\n");
                    exit(0);
                }

                displaychart(cur_pos1, cur_pos2);
                break;

            case '3':
                printf("Game Exited. Thanks for playing!\n");
                exit(0);

            default:
                printf("?? Invalid input. Try again.\n");
        }
    }
}

