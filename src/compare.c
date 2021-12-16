#include<sstring.h>
#include<sstring_private.h>

int compare(String string1, String string2) {
        // If both strings are null they are equal
        if(string1 == NULL && string2 == NULL) {
                return 0;
        // If string1 is null it is less than string2
        } else if(string1 == NULL) {
                return -1;
        // If string2 is null it is less than string1
        } else if(string2 == NULL) {
                return 1;
        }

        int len1 = string1->len;
        int len2 = string2->len;

        // If the lengths are different use the length of the shorter string
        int min = len1 < len2? len1 : len2;

        // Compare the strings
        for(int i = 0; i < min; i++){
                if(string1->str[i] < string2->str[i]) {
                        return -1;
                } else if(string1->str[i] > string2->str[i]) {
                        return 1;
                }
        }

        // if one string is shorter than the other it is less
        if(len1 < len2) {
                return -1;
        } else if(len1 > len2) {
                return 1;
        }

        // If the strings are equal return 0
        return 0;
}
