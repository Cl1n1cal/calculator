#include "parser.h"


void parse(char* s) {

}

int main() {
    printf("Welcome to Calculator:\nInput:");

    
    char input_buffer[50];

    fgets(input_buffer, 49, stdin);

    parse_string(input_buffer);



    return 0;
}