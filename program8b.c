#include <stdio.h>

#include <string.h>

int main() {
char start_delimiter = '!';
char end_delimiter = '!';
char escape_character = '\\';
char input_string[100], stuffed_string[100];
int i, j = 0;
printf("Enter the input string: ");
scanf("%s", input_string);
stuffed_string[j++] = start_delimiter;
for (i = 0; i < strlen(input_string); i++) {
if (input_string[i] == start_delimiter || input_string[i] == end_delimiter || input_string[i] == escape_character) {
stuffed_string[j++] = escape_character;
}
stuffed_string[j++] = input_string[i];
}
stuffed_string[j++] = end_delimiter;
stuffed_string[j] = '\0';
printf("The stuffed string is: %s", stuffed_string);
return 0;
}
