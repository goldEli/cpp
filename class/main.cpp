//
//  main.cpp
//  cpp_x
//
//  Created by 缪宇 on 2021/7/15.
//

#include <iostream>
#include "circle.hpp"
#include "point.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    Circle c1;
    c1.setR(10);
    Point center;
    center.m_X = 10;
    center.m_Y = 0;
    c1.setCenter(center);

    Point point;
    point.m_X = 10;
    point.m_Y = 11;

    cout << c1.isInCircle(point) << endl;
    return 0;
    return 0;
}

