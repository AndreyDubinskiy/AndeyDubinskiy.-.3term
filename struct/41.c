#include <stdio.h>
#include <math.h>

struct point 
{
    double x;
    double y;
};
typedef struct point Point;

struct triangle 
{
    Point a;
    Point b;
    Point c;
};
typedef struct triangle Triangle;

void print_point(Point p) {
    printf("(%.2f, %.2f)", p.x, p.y);
}

void print_triangle(const Triangle *t) {
    printf("{");
    print_point(t->a);
    printf(", ");
    print_point(t->b);
    printf(", ");
    print_point(t->c);
    printf("}\n");
}

double distance(Point p1, Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}


double get_triangle_perimeter(const Triangle *t) {
    return distance(t->a, t->b) + distance(t->b, t->c) + distance(t->c, t->a);
}


Triangle moved_triangle(const Triangle *t, Point d) {
    Triangle new_triangle;
    new_triangle.a.x = t->a.x + d.x;
    new_triangle.a.y = t->a.y + d.y;
    new_triangle.b.x = t->b.x + d.x;
    new_triangle.b.y = t->b.y + d.y;
    new_triangle.c.x = t->c.x + d.x;
    new_triangle.c.y = t->c.y + d.y;
    return new_triangle;
}


void move_triangle(Triangle *t, Point d) {
    t->a.x += d.x;
    t->a.y += d.y;
    t->b.x += d.x;
    t->b.y += d.y;
    t->c.x += d.x;
    t->c.y += d.y;
}

int main()
{
    Triangle t = {{1.00, 0.00}, {0.50, 2.00}, {0.00, 1.50}};
    printf("Perimeter = %.2f\n", get_triangle_perimeter(&t));
    
    Point d = {1.00, 1.00};
    print_triangle(&t);
    
    Triangle new_t = moved_triangle(&t, d);
    print_triangle(&new_t);
    
    move_triangle(&t, d);
    print_triangle(&t);
    
    return 0;
}