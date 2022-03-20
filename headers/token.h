#pragma once

#define OPEN_BRACKET          1
#define CLOSE_BRACKET         2
#define OPEN_CURLY_BRACE      3
#define CLOSE_CURLY_BRACE     4
#define OPEN_SQUARE_BRACKET   5
#define CLOSE_SQUARE_BRACKET  6
#define COLON                 7
#define SEMICOLON             8

char s_char_token[9] = {
    '(', ')', '{', '}', '[', ']', ':', ';', '=',
};

static void 
