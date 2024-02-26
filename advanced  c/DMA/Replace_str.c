#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *mystrreplacestr(char *str, char *substr, char *repstr)
{
    int mainlen = strlen(str);
    int sublen = strlen(substr);
    int replen = strlen(repstr);
    
    char *result = malloc(mainlen + 1);
    if (!result)
    {
        printf("Memory allocation failed\n");
        return NULL;
    }
    
    int i = 0, j = 0;
    while (i < mainlen)
    {
        if (strncmp(&str[i], substr, sublen) == 0)
        {
            strncpy(&result[j], repstr, replen);
            i += sublen;
            j += replen;
        }
        else
        {
            result[j++] = str[i++];
        }
    }
    result[j] = '\0';
    
    return result;
}

int main()
{
    char str[100];
    char substr[20];
    char repstr[20];
    printf("enter the main string:");
    scanf(" %[^\n]s", str);
    printf("enter the substring:");
    scanf(" %[^\n]s", substr);
    printf("enter the replace string:");
    scanf(" %[^\n]s", repstr);
    char *result = mystrreplacestr(str, substr, repstr);
    if (result)
    {
        printf("after string replaced=%s\n", result);
        free(result);
    }
    else
    {
        printf("Memory allocation failed\n");
    }
    return 0;
}
