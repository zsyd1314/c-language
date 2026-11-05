#include <stdio.h>
struct point{
	int x;
	int y;
};
struct point *getstruct(struct point* p) {
	
	scanf("%d",&p->x );
	scanf("%d",&p->y );
	printf("%d %d\n",p->x,p->y);
	return p;

}
struct point restruct(const struct point *p) {
	printf("%d %d",p->x,p->y);
}
struct point print(struct point p) {
	printf("%d %d\n", p.x, p.y);
}
int main() {
	struct point y = { 0,0 };
	y = *getstruct(&y);
	restruct(getstruct(&y));
	print(*getstruct(&y));



}