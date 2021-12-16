#ifndef __SSTRING_H__
#define __SSTRING_H__

typedef struct String* String;

String newString(const char *str, int len);
String newStringFromCString(const char *str);
String copyString(String s);
void deleteString(String s);

int compare(String s1, String s2);
String concat(String s1, String s2);

String substring(String s, int start, int end);
String substringFrom(String s, int start);
String substringTo(String s, int end);
String substringWithLength(String s, int start, int len);

#endif // __SSTRING_H__
