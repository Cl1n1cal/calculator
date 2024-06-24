#include "lexer.h"


Token generate_token(char c) {
    Token token;

    //Check if digit
    if (isdigit(c)) {
        token.token_t = NUMBER;
        token.value   = c - '0'; //Number calculation (ASCII)
        return token;
    }

    //Check if operator or similar
    switch (c)
    {
    case '5':
        token.token_t = NUMBER;
        token.value   = c - '0';
        break;
    case '+':
        token.token_t = PLUS;
        break;
    default:
        printf("Invalid input string\n");
        break;
    }
    return token;
}


void tokenize(char* input, Token* tokens) {
    char* src = (char *) malloc(sizeof(input));

    //Iterate thogh string and make tokens
    for(int i = 0; i < strlen(input); i++) {
        char character = (char) input[i];
        tokens[i] = generate_token(character); //TODO
    }
}

void print_token(Token token) {
    Token_Type token_type = token.token_t;
    if (token_type == NUMBER) {
        printf("NUMBER");
    }
    if (token_type == PLUS) {
        printf("PLUS");
    }
}

void print_tokens(Token* tokens, int input_size) {
    for (int i = 0; i < input_size; i++) {
        print_token(tokens[i]);
    }
}

void test_1() {
    Token t = generate_token('5');
}


void run_tests() {
    test_1();
    //test_2();
}

int main() {

    char input_string[] = "5+5\0";
    for (int i = 0; i < strlen(input_string); i++) {
        printf("i: %c\n", input_string[i]);
    }

    int input_size = strlen(input_string);
    Token* tokens = (Token*) malloc(sizeof(Token)*input_size);

    tokenize(input_string, tokens);
    Token first_token = tokens[0];
    Token_Type first_token_type = first_token.token_t;
    if (first_token_type == NUMBER) {
        printf("TOKEN 0\n");
    }

    print_tokens(tokens, input_size);
    return 0;
}