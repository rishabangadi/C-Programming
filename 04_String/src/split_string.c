#include "header.h"

char * split(char *str)
{

    char first = '$', last = ';';
    char *start = strrchr(str, first);
    char *end = strchr(str, last);
    int n = strlen(start) - strlen(end);
    char *duplicate=(char*) malloc((n+1)*sizeof(char));
    strncpy(duplicate, start, n + 1);
    return duplicate;
}
