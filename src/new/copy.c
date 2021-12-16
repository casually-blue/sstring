#include<stdlib.h>

#include<sstring.h>
#include<sstring_private.h>

String copyString(String string) {
        return string == NULL? NULL : newString(string->str, string->len);
}
