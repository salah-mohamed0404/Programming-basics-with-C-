#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

#define len 5

typedef struct {
    int x,y;
}point;

void duplecate(point *p){
    (*p).x *= 2;
    (*p).y *= 2;
}

int main(){
    point p[len] = {{0,2},{0,3},{5,10},{9,1},{2,8}};

    int i;
    for(i = 0; i < len; i++)
        duplecate(&p[i]);

    for(i = 0; i<len; i++)
        printf("%d : %d %d\n",i,p[i].x,p[i].y);
}
