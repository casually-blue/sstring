#include<stdlib.h>
#include<string.h>

#include<sstring.h>

String newStringFromCString(char* cstring) {
        // If we have a cstring calculate the length
        // and then create the string
        return cstring == NULL? NULL : newString(cstring, strlen(cstring));
}
