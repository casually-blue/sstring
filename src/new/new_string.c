#include<stdlib.h>
#include<string.h>
#include<sstring.h>

#include<sstring_private.h>

String newString(const char* cstring, int length) {
        if(cstring == NULL) {
                return NULL;
        }

        // Allocate memory for the string struct
        String s = malloc(sizeof(struct String));

        // Allocate memory for the string data
        s->str = malloc(length + 1);
        s->len = length;

        // Copy the string data
        memcpy(s->str, cstring, length);

        // Null terminate the string
        s->str[length] = '\0';
        return s;
}
