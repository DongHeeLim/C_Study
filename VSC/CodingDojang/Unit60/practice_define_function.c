#include <stdio.h>

void printHostname();
void printIPAddress();

int main()
{
    printHostname();
    printIPAddress();

    return 0;
}

void printHostname()
{
    printf("saturn\n");
}

void printIPAddress()
{
    printf("192.168.10.6\n");
}