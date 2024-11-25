#ifndef __GRAPHICEDITOR_HPP__
#define __GRAPHICEDITOR_HPP__
#include"Shape.hpp"
#include<vector>
#include <iostream>

#include"Circle.hpp"
#include"Line.hpp"
#include"Rect.hpp"

using namespace std;

class GraphicEditor {
    vector<Shape*> shapes;
public:
    ~GraphicEditor() {
        for (Shape* shape : shapes) {
            delete shape;}
    }

    void insertShape(int type) {
        Shape* shape = nullptr;
        switch (type) {
            case 1:
                shape = new Line();
                break;
            case 2:
                shape = new Circle();
                break;
            case 3:
                shape = new Rect();
                break;
            default:
                cout << "Invalid type" << endl;
                return;}
        shapes.push_back(shape);
        cout << "Shape inserted." << endl;
    }

    void deleteShape(int index) {
        if (index < 0 || index >= shapes.size()) {
            cout << "Invalid index" << endl;
            return;}
        delete shapes[index];
        shapes.erase(shapes.begin() + index);
        cout << "Shape deleted." << endl;
    }

    void showAllShapes() {
        for (int i = 0; i < shapes.size(); i++) {
            cout << i << ": ";
            shapes[i]->draw();}
    }

    void run() {
        int choice;
        while (true) {
            cout << "1: Insert Shape, 2: Delete Shape, 3: Show All, 4: Exit" << endl;
            cin >> choice;
            if (choice == 4) break;
            switch (choice) {
                case 1:
                    int type;
                    cout << "Enter type (1: Line, 2: Circle, 3: Rect): ";
                    cin >> type;
                    insertShape(type);
                    break;
                case 2:
                    int index;
                    cout << "Enter index to delete: ";
                    cin >> index;
                    deleteShape(index);
                    break;
                case 3:
                    showAllShapes();
                    break;
                default:
                    cout << "Invalid choice" << endl;}}
    }
};

#endif 
