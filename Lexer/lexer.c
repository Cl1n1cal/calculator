#include "lexer.h"

Token generate_token();


tokenize(char* input, Token* output) {
    char* src = (char *) malloc(sizeof(input));

    //Iterate thogh string and make tokens
    for(int i = 0; i < sizeof(input); i++) {
        char character = input[i];
        Token token = generate_token(); //TODO
    }


    
}


int main() {

    char input_string[50];

    Token* tokens = (Token*) malloc(sizeof(Token)*sizeof(input_string));

    tokenize(input_string, tokens);
    return 0;
}