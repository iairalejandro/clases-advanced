#ifndef _POINT_H_
#define _POINT_H_

#include <iostream>

class Point{
    private:
        int x, y;
    public:
        Point(int x = 0, int y = 0){
            this->x = x;
            this->y = y;
        }
        ~Point() {
            std::cout << "Invocando al destructor" << std::endl;
        }
        void setX(int x){
            this->x = x;
        }
        void setY(int y){
            this->y = y;
        }
        int getX() const{
            return x;
        }
        int getY() const{
            return y;
        }


};

#endif