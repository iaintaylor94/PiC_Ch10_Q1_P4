// Program to test if two strings are equal

#include <stdio.h>
#include <stdbool.h>

// Declare Functions
bool areEqual (const char [], const char []);

int main(void) {

  // Define Strings
  const char s1[] = "string compare test";
  const char s2[] = "string";

  printf ("%d\n", areEqual(s1, s2));
  printf ("%d\n", areEqual(s1, s1));
  printf ("%d\n", areEqual(s2, "string"));
  
  return 0;
}

// Define Functions
bool areEqual (const char str1[], const char str2[]) {
  int i = 0;
  bool equal;

  while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0') {
    i++;
  }

  if (str1 [i] == '\0' && str2 [i] == '\0')
    equal = true;
  else
    equal = false;

  return equal;
}