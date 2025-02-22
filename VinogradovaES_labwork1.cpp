#include <iostream>
#include <cmath>
using namespace std;

void calculateRectangleOperations(float width, float length) {
    float area = width * length;
    float perimeter = 2 * (width + length);
    float diagonal = sqrt(pow(width, 2) + pow(length, 2));

    cout << "Rectangle:" << endl;
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;
    cout << "Diagonal: " << diagonal << endl;
}

void calculateTriangleOperations(float side_a, float side_b, float side_c) {
    if (side_a + side_b <= side_c || side_a + side_c <= side_b || side_b + side_c <= side_a) {
        cout << "Invalid triangle!" << endl;
        return;
    }

    float perimeter = side_a + side_b + side_c;
    float half_perimeter = perimeter / 2;
    float area = sqrt(half_perimeter * (half_perimeter - side_a) * (half_perimeter - side_b) * (half_perimeter - side_c));

    cout << "Triangle:" << endl;
    cout << "Perimeter: " << perimeter << endl;
    cout << "Area: " << area << endl;
    cout << "Isosceles: ";
    if (side_a == side_b || side_a == side_c || side_b == side_c) {
        cout << "Yes" << endl;
    }
    else {cout << "No" << endl;    
    }
}


void calculateTrapezoidOperations(float side_a, float side_b, float side_c, float side_d, float height) {
    float perimeter = side_a + side_b + side_c + side_d;
    float area = ((side_a + side_b) / 2) * height;
    float median = (side_a + side_b) / 2;

    cout << "Trapezoid:" << endl;
    cout << "Perimeter: " << perimeter << endl;
    cout << "Area: " << area << endl;
    cout << "Median length: " << median << endl;
}

void calculateCircleOperations(float radius, float sector_angle) {
    const float pi = 3.141592653589793;
    float area = pi * pow(radius, 2);
    float circumference = 2 * pi * radius;
    float sector_area = (sector_angle / 360.0) * area;

    cout << "Circle:" << endl;
    cout << "Area: " << area << endl;
    cout << "Circumference: " << circumference << endl;
    cout << "Sector Area (" << sector_angle << " degrees): " << sector_area << endl;
}

int main() {
    int shape_number;

    while (true) {
        cout << "\nChoose a shape:\n";
        cout << "1. Rectangle\n2. Triangle\n3. Trapezoid\n4. Circle\n0. Exit\n";
        cout << "Enter the shape number: ";
        cin >> shape_number;

        switch (shape_number) {
        case 1: {
            float rectangle_width, rectangle_length;
            cout << "Enter width and length: ";
            cin >> rectangle_width >> rectangle_length;
            calculateRectangleOperations(rectangle_width, rectangle_length);
            break;
        }
        case 2: {
            float triangle_side_a, triangle_side_b, triangle_side_c;
            cout << "Enter the three sides of the triangle: ";
            cin >> triangle_side_a >> triangle_side_b >> triangle_side_c;
            calculateTriangleOperations(triangle_side_a, triangle_side_b, triangle_side_c);
            break;
        }
        case 3: {
            float trapezoid_side_a, trapezoid_side_b, trapezoid_side_c, trapezoid_side_d, trapezoid_height;
            cout << "Enter the four sides and height of the trapezoid: ";
            cin >> trapezoid_side_a >> trapezoid_side_b >> trapezoid_side_c >> trapezoid_side_d >> trapezoid_height;
            calculateTrapezoidOperations(trapezoid_side_a, trapezoid_side_b, trapezoid_side_c, trapezoid_side_d, trapezoid_height);
            break;
        }
        case 4: {
            float circle_radius, sector_angle;
            cout << "Enter the radius and sector angle: ";
            cin >> circle_radius >> sector_angle;
            calculateCircleOperations(circle_radius, sector_angle);
            break;
        }
        case 0:
            return 0;
        default:
            cout << "Invalid option! Try again.\n";
        }
    }
}
