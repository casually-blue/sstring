#include<sstring.h>
#include<sstring_private.h>

char getCharAtIndex(String string, int index) {
        // If the string is null or the index is out of bounds
        if(string == NULL || index < 0 || index >= string->len) {
                // Return a null character
                return '\0';
        }

        // Return the character at the index
        return string->str[index];
}

int getLength(String string) {
        // If the string is null return 0
        return string == NULL? 0 : string->len;
}

const char* toCString(String string) {
        // get the char array of the string
        return string == NULL? NULL : string->str;
}
