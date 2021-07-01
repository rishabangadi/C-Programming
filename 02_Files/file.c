#include<stdio.h>
#include<string.h>

typedef struct info_t {
    char* name;
    char* email_id;
    char* git_link;
} info_t;
info_t data;

int main()
{
    FILE *fp =fopen("data.csv","r");
    char str[100];
   for(int i=0;i<2;i++)
   { 
    fscanf(fp,"%s",str);
    char *t=strtok(str,",");
    data.name=t;
    printf("Name = %s\n",t);
    t=strtok(NULL,"_");
    data.email_id=t;
    printf("Email id = %s\n",t);
    t=strtok(NULL,"_");
    data.git_link=t;
    printf("GitHub Link = %s\n\n",t);
   } 
    
    return 0;
}
