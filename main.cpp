#include "Shape.cpp"
#include "Line.cpp"
#include "Rect.cpp"
#include "Circle.cpp"
#include"Shape.hpp"
#include <iostream>
#include <vector>

int main(int argc, char *argv[]) {
    std::vector<Shape*> v;
    int ichr;

    std::cout << "This is Graphic editor." << std::endl;
    while (true) {
        std::cout << "Insert :1, delete :2, Show all :3, exit :4 >> ";
        std::cin >> ichr;

        if (ichr == 4) {
            std::cout << "Exited" << std::endl;
            break;
        }
        if (ichr > 4 || ichr < 1) {
            std::cout << "Retry" << std::endl;
            continue;
        }

        switch (ichr) {
            case 1: {
                std::cout << "Line : 1, Circle : 2, Rect : 3 >> ";
                int cs1Insert;
                std::cin >> cs1Insert;
                switch (cs1Insert) {
                    case 1: {
                        Line *ln = new Line();
                        v.push_back(ln);
                        break;
                    }
                    case 2: {
                        Circle *cr = new Circle();
                        v.push_back(cr);
                        break;
                    }
                    case 3: {
                        Rect *rt = new Rect();
                        v.push_back(rt);
                        break;
                    }
                }
                break;
            }
            case 2:
                // Implement deletion logic
                break;
            case 3: {
                for (Shape* shape : v) {
                    shape->paint();
                }
                break;
            }
        }
    }

    // Clean up dynamically allocated memory
    for (Shape* shape : v) {
        delete shape;
    }

    return 0;
}
