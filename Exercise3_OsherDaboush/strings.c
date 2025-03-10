#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "strings.h"

// Check string length
int CheckStringLength(int _length) {
  if (_length < MIN_STR_LENGTH || _length > MAX_STR_LENGTH) {
    return INVALID_LENGTH;
  } else {
    return SUCCESS;
  }
}

// Check for NULL
int CheckNULL(char *_str) {
  if (_str == NULL) {
    return NULL_ERROR;
  }
  return SUCCESS;
}

// Reverse a string
int ReverseStr(char *_str) {
  int checkLength = CheckStringLength(strlen(_str));
  if (checkLength != SUCCESS) {
    return checkLength;
  }

  int nullError = CheckNULL(_str);
  if (nullError != SUCCESS) {
    return nullError;
  }

  int start = 0;
  int end = strlen(_str) - 1;

  while (start < end) {
    char temp = _str[start];
    _str[start] = _str[end];
    _str[end] = temp;
    ++start;
    --end;
  }
  return SUCCESS;
}

// Check if string is a palindrome
int IsPalindrome(char *_str) {
  int checkLength = CheckStringLength(strlen(_str));
  if (checkLength != SUCCESS) {
    return checkLength;
  }

  int nullError = CheckNULL(_str);
  if (nullError != SUCCESS) {
    return nullError;
  }

  int start = 0;
  int end = strlen(_str) - 1;

  while (start < end) {
    if (_str[start] != _str[end]) {
      return 1; 
    }
    ++start;
    --end;
  }
  return SUCCESS;
}

// Convert string to integer
int MyAToI(char *_str, int *_num) {
  int checkLength = CheckStringLength(strlen(_str));
  if (checkLength != SUCCESS) {
    return checkLength;
  }

  int nullError = CheckNULL(_str);
  if (nullError != SUCCESS) {
    return nullError;
  }

  *_num = 0;
  int i = 0;
  int digitFound = 0;
  int isNegative = 0;

  while (isspace(_str[i]) || isalpha(_str[i])) {
    ++i;
  }

  if (_str[i] == '-') {
    isNegative = 1;
    ++i;
  } 

  while (_str[i] != '\0') {
    if (isdigit(_str[i])) {
      digitFound = 1; 
      *_num = *_num * 10 + (_str[i] - '0');
    } else if (digitFound) {
        break;
    }
    
    ++i;
  }
    
  if (!digitFound) {
    return INVALID_NUMBER;
  }

  if (isNegative) {
    *_num = -*_num;
  }

  return SUCCESS;
}

// Convert integer to string
int MyIToA(int _num, char *_buffer) {
  int nullError = CheckNULL(_buffer);
  if (nullError != SUCCESS) {
    return nullError;
  }
  
  int i = 0;
  int isNegative = 0;
  
  if (_num == 0) {
    _buffer[0] = '0';
    _buffer[1] = '\0';
    return SUCCESS;
  }
  
  if (_num < 0) {
    isNegative = 1;
    _num = -_num;
  }
  
  while (_num > 0) {
    _buffer[i++] = (_num % 10) + '0';
    _num /= 10;
  }
  
  if (isNegative) {
    _buffer[i++] = '-';
  }
  
  _buffer[i] = '\0';
  
  int start = 0;
  int end = i - 1;
  
  while (start < end) {
    char temp = _buffer[start];
    _buffer[start] = _buffer[end];
    _buffer[end] = temp;
    ++start;
    --end;
  }
  return SUCCESS;
}

