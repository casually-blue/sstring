#include<sstring.h>
#include<sstring_private.h>

#include<stdlib.h>

void deleteString(String string) {
        // if the string is null we can't do anything
        if(string != NULL) {
                // Free the string data
                free(string->str);
                // Free the string struct
                free(string);
        }
}
