#include <stdio.h>
#include <stdlib.h>

struct Point2D{
    int x;
    int y;
};

int main(){

    struct Point2D* p[3];

    // printf("%d\n", sizeof(p));   // 12
    // printf("%d\n", sizeof(struct Point2D*)); // 4

    for(int i=0; i< sizeof(p)/sizeof(struct Point2D*); i++){
        p[i] = malloc(sizeof(struct Point2D));
    }
    for (int i = 0; i < sizeof(p)/sizeof(struct Point2D*); i++)
    {
        free(p[i]);
    }
    
    

    return 0;
}