#include <iostream>
#include <vector>

using namespace std;

class Shape {
public:
    Shape(double area) : area_(area) {}

    double getArea() const {
        return area_;
    }

private:
    double area_;
};

class Drawing {
public:
    // Додавання фігури до масиву об'єктів
    void addShape(const Shape& shape) {
        shapes_.push_back(shape);
    }

    // Обчислення загальної площі всіх фігур у колекції
    double totalArea() const {
        double total = 0.0;
        for (const Shape& shape : shapes_) {
            total += shape.getArea();
        }
        return total;
    }

private:
    vector<Shape> shapes_;
};

int main() {
    Drawing drawing;

    // Додавання різних фігур
    Shape circle(3.14); // Площа круга
    Shape rectangle(6.0); // Площа прямокутника
    Shape triangle(2.5); // Площа трикутника

    drawing.addShape(circle);
    drawing.addShape(rectangle);
    drawing.addShape(triangle);

    // Обчислення загальної площі
    double totalArea = drawing.totalArea();

    cout << "Total area of all shapes: " << totalArea << endl;

    return 0;
}
