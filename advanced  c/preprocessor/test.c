#include <stdio.h>

#define MSSG "I am going to institute on Sunday\n"
#define AND &&
#define OR ||
#define BEGAIN int main() {
#define END return 0; }
#define INFINITE while (1)
#define NEW_LINE printf("\n")

BEGAIN
    printf(MSSG);
    printf("%s", (1 AND 1) ? "AND is true" : "AND is false");
    printf("%s", (1 OR 0) ? "OR is true" : "OR is false");
    INFINITE {
        printf(NEW_LINE);
    }
END
