#include<sstring.h>
#include<sstring_private.h>

String substringFromIndex(String string, int start) {
        return substring(string, start, string->len);
}
