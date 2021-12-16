#include<stdlib.h>
#include<string.h>

#include<sstring.h>
#include<sstring_private.h>

String concat(String string1, String string2) {
        // If both strings are null return null
        if(string1 == NULL && string2 == NULL) {
                return NULL;
        // If string1 is null return string2
        } else if(string1 == NULL) {
                return copyString(string2);
        // If string2 is null return string1
        } else if(string2 == NULL) {
                return copyString(string1);
        }

        // Allocate memory for the new string
        String s = malloc(sizeof(struct String));
        // Allocate memory for the string data with the size of both strings
        s->len = string1->len + string2->len;
        // Allocate memory for the string data plus the null terminator
        s->str = malloc(s->len + 1);
        // Copy the string data from string1
        memcpy(s->str, string1->str, string1->len);
        // Copy the string data from string2
        memcpy(s->str + string1->len, string2->str, string2->len);
        // Null terminate the string
        s->str[s->len] = '\0';
        return s;
}
