#include "header.h"

int main()
{
    FILE *fp = fopen("text.txt", "r");
    char *result;
    char *sentence = (char *)malloc(sizeof(char) * 60);
    if(fp == NULL) {
      perror("Error opening file");
      return(-1);
     }
    while( fgets (sentence, 60, fp)!=NULL )
    {
        result=split(sentence);
        puts(result);
    }
    fclose(fp);

    return 0;
}
