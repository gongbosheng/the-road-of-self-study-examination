#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{   
    FILE *fp;
    char ch[100];
    char filename[10] =  "./1.txt";
    fp = fopen(filename, "w+");
    if (fp == NULL)
    {
        printf("文件打开错误!\n");
        exit(0);
    }

    int seek = feof(fp);
    printf("指针位置： %d\n", seek);

    while (ch[0] != '#')
    {
        fprintf(fp,"%s\n",ch);
        // fputs(ch,fp);
        scanf("%s",ch);
        // fgets(ch,20,stdin);
        printf("%s", ch);
        getchar();
    }

    rewind(fp);
    char rn[1001];
    while (1)
    {
        fgets(rn, 1001, fp);
        if (feof(fp))
        {
            break;
        }
        printf("%s", rn);
        
    }
    fclose(fp);
}