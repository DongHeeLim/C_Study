#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person{
    char name[30];
    int age;
};

int main(){

    struct Person* p[5];

    for (int i = 0; i < sizeof(p)/sizeof(struct Person*); i++)
    {
        p[i] = malloc(sizeof(struct Person));
    }
    
    // scanf("%s %d %s %d %s %d %s %d %s %d", p[0]->name, p[0]->age, p[1]->name, p[1]->age, p[2]->name, p[2]->age, p[3]->name, p[3]->age, p[4]->name, p[4]->age);
    scanf("%s %d %s %d %s %d %s %d %s %d", p[0]->name, &p[0]->age, p[1]->name, &p[1]->age, p[2]->name, &p[2]->age, p[3]->name, &p[3]->age, p[4]->name, &p[4]->age);

    // scanf("%s", p[1]->name);

    printf("%s\n", p[1]->name);
    // strcpy(p[0]->name, "박제가");
    // strcpy(p[1]->name, "서유구");
    // strcpy(p[2]->name, "박지원");
    // strcpy(p[3]->name, "홍대용");
    // strcpy(p[4]->name, "정약용");

    // p[0]->age = 30;
    // p[1]->age = 16;
    // p[2]->age = 43;
    // p[3]->age = 49;
    // p[4]->age = 18;

    int old = p[0]->age;
    int flag = 0;
    for (int i = 0; i < (sizeof(p)/sizeof(struct Person*)-1); i++)
    {   
        if(old < p[i+1]->age){
            old = p[i+1]->age;
            flag = i+1;
            printf("%d\n",flag);
        }
    }
    
    printf("%d\n", old);
    printf("%s\n", p[flag]->name);

    for (int i = 0; i < sizeof(p)/sizeof(struct Person*); i++)
    {
        free(p[i]);
    }
    

    return 0;
}