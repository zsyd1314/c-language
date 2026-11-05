#include <stdio.h>

struct point {
    int x;
    int y;
};

struct point* getStruct(struct point*);    /* 第 8 行 */
void output(struct point);                 /* 第 9 行 */
void print(const struct point* p);         /* 第 10 行 */

int main(int argc, char const* argv[])     /* 第 12 行 */
{
    struct point y = { 0, 0 };
    getStruct(&y);
    output(y);
    output(*getStruct(&y));
    print(getStruct(&y));
}

struct point* getStruct(struct point* p)   /* 第 21 行 */
{
    scanf("%d", &p->x);
    scanf("%d", &p->y);
    printf("%d, %d", p->x, p->y);
    return p;
}

void output(struct point p)
{
    printf("%d, %d", p.x, p.y);
}

void print(const struct point* p)
{
    printf("%d, %d", p->x, p->y);
}
