/* Given the string, check if it is a palindrome. */

/*   Example */

/*   For inputString = "aabaa", the output should be */
/*   checkPalindrome(inputString) = true; */
/*   For inputString = "abac", the output should be */
/*   checkPalindrome(inputString) = false; */
/*   For inputString = "a", the output should be */
/*   checkPalindrome(inputString) = true. */

/*   Input/Output */

/*   [execution time limit] 0.5 seconds (c) */
/*       [input] string inputString */
/*       A non-empty string consisting of lowercase characters. */
/*         Guaranteed constraints: */
/*           1 ≤ inputString.length ≤ 105. */
/*       [output] boolean */
/*         true if inputString is a palindrome, false otherwise. */

#include <string.h>

int check_palindrome(char *input_string) {
  int j = strlen(input_string);
  for (int i = 0; i < strlen(input_string); i++) {
    if (input_string[i] != input_string[j]) return 0;
    j--;
  }
  return 1;
}

int main() {
  if (check_palindrome("abba") == 0) return -1;
  return 0;
}
