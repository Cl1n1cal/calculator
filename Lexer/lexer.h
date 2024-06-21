#include <stdio.h>
#include <stdint.h>

enum Token_Type
{
    NUMBER,
    BINARY_OPERATOR,
    UNARY_OPERATOR,
    L_PAREN,
    R_PAREN
};

typedef struct {
    Token_Type token;
    double     value;
} Token;



void tokenize(char* input);