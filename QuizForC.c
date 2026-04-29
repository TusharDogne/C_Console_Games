#include <stdio.h>

struct Question {
    char *question;
    char *options[4];
    char correct;
};

int main() {
    struct Question quiz[20] = {

        {"Which data structure uses FIFO?", {"Stack","Queue","Tree","Graph"}, 'b'},
        {"Time complexity of binary search?", {"O(n)","O(log n)","O(n log n)","O(1)"}, 'b'},
        {"Which is not a programming language?", {"Python","HTML","Java","C++"}, 'b'},
        {"Which keyword is used to exit loop?", {"break","exit","stop","return"}, 'a'},
        {"Which operator is used for address?", {"*","&","#","@"}, 'b'},

        {"Which sorting is fastest (avg)?", {"Bubble","Selection","Quick","Insertion"}, 'c'},
        {"Which DS uses LIFO?", {"Queue","Stack","Array","Tree"}, 'b'},
        {"Which is dynamic memory?", {"malloc","printf","scanf","return"}, 'a'},
        {"Which is not OOP concept?", {"Encapsulation","Polymorphism","Compilation","Inheritance"}, 'c'},
        {"Which is pointer symbol?", {"*","&","/","#"}, 'a'},

        {"Which loop runs at least once?", {"for","while","do-while","none"}, 'c'},
        {"Which function reads input?", {"printf","scanf","input","read"}, 'b'},
        {"Which is not linear DS?", {"Array","Stack","Tree","Queue"}, 'c'},
        {"Which symbol ends statement?", {";",";",":","."}, 'a'},
        {"Which is fastest access?", {"Array","Linked List","Queue","Stack"}, 'a'},

        {"Which is used for file handling?", {"fopen","open","file","read"}, 'a'},
        {"Which is not valid variable?", {"int a","float b","int 1a","char c"}, 'c'},
        {"Which DS uses nodes?", {"Array","Linked List","Stack","Queue"}, 'b'},
        {"Which is compile-time error?", {"Syntax","Runtime","Logic","Memory"}, 'a'},
        {"Which is OS?", {"Linux","Python","C","HTML"}, 'a'}
    };

    int score = 0;
    char ans;

    printf("\n=== ADVANCED QUIZ GAME ===\n");

    for(int i = 0; i < 20; i++) {
        printf("\nQ%d: %s\n", i+1, quiz[i].question);

        printf("a) %s\n", quiz[i].options[0]);
        printf("b) %s\n", quiz[i].options[1]);
        printf("c) %s\n", quiz[i].options[2]);
        printf("d) %s\n", quiz[i].options[3]);

        printf("Your answer: ");
        scanf(" %c", &ans);

        if(ans == quiz[i].correct || ans == quiz[i].correct - 32) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong! Correct: %c\n", quiz[i].correct);
        }
    }

    printf("\n=== FINAL RESULT ===\n");
    printf("Score: %d / 20\n", score);

    if(score >= 18)
        printf("Outstanding.\n");
    else if(score >= 14)
        printf("Strong performance.\n");
    else if(score >= 10)
        printf("Decent.\n");
    else
        printf("Needs work.\n");

    return 0;
}