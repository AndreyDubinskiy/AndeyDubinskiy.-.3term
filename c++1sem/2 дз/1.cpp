#include <iostream>
#include <cmath>
#include "point.hpp"

class Circle
{
private:
    Point center;
    float radius;
public:
    Circle (const Point& center, float z) {
        std::cout<<"Constructor"<<std::endl;
        this->center = center;
        radius = z;
    }
    Circle () {
        std::cout<<"Default"<<std::endl;
        center.x = 0;
        center.y = 0;
        radius = 1.0f;
    }
    Circle (const Circle& circle) {
        std::cout<<"Copy"<<std::endl;
        center = circle.center;
        radius = circle.radius;
    }
    void setRadius(float r) {
        if (r > 0) {
            radius = r;
        }
        else {
            radius = 0;
        }
    }
    float getRadius() const {
        return radius;
    } 
    void setCenter(const Point& c) {
        center = c;
    }
    Point getCenter() const { 
        return center; 
    } 
    
    float area() const {
        return M_PI*pow(radius, 2);
    }
    float distance (const Point&p) const {
        float centerdistance;
        centerdistance = std::sqrt(pow((p.x - center.x),2) + pow((p.y - center.y),2));
        return std::max(0.0f, centerdistance - radius);
    }
    bool isColliding (const Circle& c) const {
        float distanceBetweenCenters = center.distance(c.getCenter());
        return distanceBetweenCenters <= (radius + c.getRadius());
    }
    void move (const Point& p) {
        center = center + p;
    }
};