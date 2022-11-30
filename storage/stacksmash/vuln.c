#include <stdio.h>
#include <stdio.h>

int exe()
{
    char buff[12] = {0};
    int pass = 0;
    char otherBuff[12] = "Hello World";

    printf("1/ Please attempt to smash the stack, all protections disabled\n");
    gets(buff);

    // printf("2/ ... Other buffer: %s\n", otherBuff);
    // printf("3/ ... Pass var: %x\n", pass);
    // printf("4/ ... Buff arr: %s\n", buff);

    int returnVariable = 777;
    return returnVariable;    
}

void vuln()
{
    printf("This functon should never be called!!!!!!!!\n");
}

int main()
{
    int a = exe();
    printf("2/ ... Return value: %d\n", a);

    return 0;
}