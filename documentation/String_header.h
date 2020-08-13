/**
* @file String_header.h
*
*/

#include <stdio.h>
#include <string.h>

///Maximum length of a string
#define MAX_LEN 50
///Maximum number of substrings
#define MAX_ROW 10


/**
* Declaration of function to break the given string into an array of substrings using a delimiter '_'
* @param[in] Given string
* @return Address of the array of substrings
*/
char *break_string(char given_string[]);


