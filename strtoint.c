#include "myio.h"
  int strtoint(char* str) {
    int base = 10;
    char* p = str;
    // function is going to get string input like  where the digits after the underscore are the base
    // and the digits before the underscore are the number
    // while loop to get the base
    while (*p != '\0') {
        if (*p == '_') {
            p++;
            if (*p >= '0' && *p <= '9') {
                base = *p - '0';
            } else if (*p >= 'a' && *p <= 'f') {
                base = *p - 'a' + 10;
            } else if (*p >= 'A' && *p <= 'F') {
                base = *p - 'A' + 10;
            } else {
                return 0;
            }
            p++;
            while (*p >= '0' && *p <= '9') {
                base = base * 10 + (*p - '0');
                p++;
            }
            break;
        }
        p++;
    }
    // for loop for the number
    // take the pointer back to the beginning of the string
    p = str;
    int num = 0;
    while (*p != '\0' && *p != '_') {
        if (*p >= '0' && *p <= '9') {
            num = num * base + (*p - '0');
        } else if (*p >= 'a' && *p <= 'f') {
            num = num * base + (*p - 'a' + 10);
        } else if (*p >= 'A' && *p <= 'F') {
            num = num * base + (*p - 'A' + 10);
        } else {
            return 0;
        }
        p++;
    }
    return num; // return the converted integer value
}
