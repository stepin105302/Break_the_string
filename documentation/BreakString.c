/**
* @file BreakString.c
*
*/


#include "String_header.h"

/**
* Global variable to store the substrings
*/

char broken_string[MAX_ROW][MAX_LEN];

/**
* Function to split the given string into an array of strings using a delimiter '_'
* @param[in] Given string
* @return Address of the array of substrings
*/

char *break_string(char given_string[MAX_LEN])
{

   char *delimit_string;
   int temp = 0;
   delimit_string = strtok(given_string, "_");

   while( delimit_string != NULL ) {
      strcpy(broken_string[temp], delimit_string);
      delimit_string = strtok(NULL, "_");
      temp++;
   }

   return (broken_string) ;
}

