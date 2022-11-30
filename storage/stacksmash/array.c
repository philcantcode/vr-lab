#include <stdio.h>
#include <string.h>

void exe(char args[])
{
    char buff[12] = {0};
    strcpy(buff, args);

    // printf("Got buffer: %s\n", buff);

    return;    
}

void vuln()
{
    printf("This functon should never be called!!!!!!!!\n");
}

int main(int argc, char *argv[])
{
    exe(argv[1]);
    printf("Done");

    return 0;
}