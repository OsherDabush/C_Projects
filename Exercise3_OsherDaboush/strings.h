#ifndef STRINGS_H
#define STRINGS_H

#define MIN_STR_LENGTH 1
#define MAX_STR_LENGTH 100
#define SUCCESS 0
#define INVALID_LENGTH -1
#define NULL_ERROR -2
#define INVALID_NUMBER -3


int ReverseStr(char *_str);

/*
INPUT:
  *_str - Input string to be reversed.

OUTPUT:
  The input string is modified in place to contain its reversed version.

DESCRIPTION:
  This function reverses the given string in place by swapping characters from 
  the start and end of the string until they meet in the middle. The original 
  string is modified directly.
*/


int IsPalindrome(char *_str);

/*
INPUT:
  *_str - Input string to check if it is a palindrome.

OUTPUT:
  1 - If the string is a palindrome.
  0 - If the string is not a palindrome.

DESCRIPTION:
  This function checks if the given string is a palindrome. It compares 
  characters from the start and end of the string until they meet in the middle.
*/


int MyAToI(char *_str, int *_num);

/*
INPUT:
  *_str - Input string to be converted to an integer.
  *_num - Pointer to store the converted integer value.

OUTPUT:
  SUCCESS - If the conversion is successful.
  1 - If the string contains non-numeric characters.
  
DESCRIPTION:
  This function converts a numeric string to an integer. It handles negative 
  numbers and validates the input.
*/


int MyIToA(int _num, char *_buffer);

/*
INPUT:
  _num - Integer to be converted into a string.
  *_buffer - Buffer to store the resulting string.

OUTPUT:
  The buffer contains the string representation of the integer.

DESCRIPTION:
  This function converts an integer to its string representation. 
  The resulting string is stored in the provided buffer.
*/

#endif 
