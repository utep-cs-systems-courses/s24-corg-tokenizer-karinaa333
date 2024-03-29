#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"

// declare tokenizer.h functions

/* Return true (non-zero) if c is a whitespace character
   ('\t' or ' ').                                                             
   Zero terminators are not printable (therefore false)
*/
int space_char(char c) {
  if ((c == '\t' || c == ' ') && c != '0') {
    return 1;
  }
  else {
    return 0;
  }
}

/* Return true (non-zero) if c is a non-whitespace
   character (not tab or space).                                             
   Zero terminators are not printable (therefore false)
*/
int non_space_char(char c) {
  if ((c != '\t' || c != ' ') && c != '0') {
    return 1;
  }
  else {
    return 0;
  }
}

/* Returns a pointer to the first character of the next
   space-separated token in zero-terminated str.
   Return a zero pointer if str does not contain any tokens.
*/
char *token_start(char *str) {
  while (*str) {
    if (!(*str == ' ')) {
      return str;
    }
    ++str;
  }
  return 0;
}

/* Return a pointer terminator char following *token.
   Point to char after the end of the token.
*/
char *token_terminator(char *token) {
  while (*token != '\0' && *token != ' ') {
    token++;
  }
  return token;
}

/* Counts the number of tokens in the string argument.*/
int count_tokens(char *str) {
  int counter = 0;
  char *p = str;
  // iterate string until we reach the end
  while (*p != '\0') {
    // if start of token is not empty increment counter
    while (non_space_char(*str)) {
      if (*p != '\0') {
	counter++;
      }
    }
  }
  return counter;
}

/* Return a freshly allocated new zero-terminated string
   containing <len> chars from <inStr>
*/
char *copy_str(char *inStr, short len) {
  // allocate memory
  char* copy_of_str = malloc((len + 1) * sizeof(char));
  for (int i = 0; i < len; i++) {
    copy_of_str[i] = inStr[i];
  }
  return copy_of_str;
}

/* Return a freshly allocated zero-terminated vector of freshly allocated
   space-separated tokens from zero-terminated str.

   For example, tokenize("hello world string") would result in:
     tokens[0] = "hello"
     tokens[1] = "world"
     tokens[2] = "string"
     tokens[3] = 0
*/
char **tokenize(char* str) {
  int i = 0;
  // start of token
  while (*p != '\0') {

  }
}

/* Prints all the tokens. */
void print_tokens(char **tokens) {
  
}

/* Frees all tokens and the vector containing them. */
void free_tokens(char **tokens) {
  char **p = tokens;
  while (*p != NULL) {
    free(*p);
    p++;
  }
  free(tokens);
}
