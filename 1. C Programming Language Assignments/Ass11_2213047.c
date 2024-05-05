/*Concept: File Handling
Lab 12: Write a program to read a file and display contents with its line numbers.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fs;
    char ch;
    int i=1;
    fs=fopen("TEXT.txt","r+");
    if(fs==NULL)
    {
        printf("can't open source file");
    }
    printf("%d ",i++);
    while(1)
    {
        ch=fgetc(fs);
        if(ch==EOF)
        {
            break;
        }
        printf("%c",ch);
        if(ch=='\n')
        {
            printf("%d ",i);
            i++;
        }
    }
    fclose(fs);
}






