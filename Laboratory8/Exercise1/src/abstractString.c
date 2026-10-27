#include <stdio.h>
#include <stdlib.h>

#include <string.h>

#include "../includes/abstractString.h"

#define INITIAL_SIZE 50

struct String {
    char *character;
    unsigned int len;
    char *lenAllocated;
};

String *CreateString() {
    String *string = NULL;

    string = (String*)malloc(sizeof(String));

    if (string == NULL) {
        printf("Error! Alocation to Abstract Data Type string failed.\n.");
        exit(1);
    }

    string->character = NULL;

    string->character = (char*)calloc(INITIAL_SIZE, sizeof(char));

    if (string->character == NULL) {
        printf("Error! Alocation to array of character in Abstratct Data Type string failed.\n");
        exit(1);
    }

    string->len = 0;
    string->lenAllocated = INITIAL_SIZE;

    return string;
}