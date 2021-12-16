#include<stdlib.h>
#include<string.h>

#include<sstring.h>
#include<sstring_private.h>

String substring(String string, int start, int end) {
        // Sanity check the start and end
        // and check for null string
        if(string == NULL || start < 0 || end < 0 || start > end || end > string->len) {
                return NULL;
        }

        // Allocate memory for the new string
        String s = malloc(sizeof(struct String));

        // Allocate memory for the string data with the size of the substring
        s->len = end - start;
        s->str = malloc(s->len + 1);

        // Copy the string data from the substring
        memcpy(s->str, string->str + start, s->len);
        s->str[s->len] = '\0';
        return s;
}
