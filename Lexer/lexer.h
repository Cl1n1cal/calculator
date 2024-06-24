#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <ctype.h>
#include <string.h>

typedef enum
{
    NUMBER,
    PLUS,
    MINUS,
    UNARY_OPERATOR,
    L_PAREN,
    R_PAREN
} Token_Type;

typedef struct {
    Token_Type token_t;
    double          value;
} Token;




void tokenize(char* input, Token* output);