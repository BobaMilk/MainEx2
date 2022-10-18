#include <iostream>

using namespace std;

class Circle {
public:
    Circle();
    Circle(double r);
    double getArea() const;
    double getRadius() const;
    void setRadius(double r);
    bool operator<(Circle& const obj1); //Operator overload
    bool operator<=(Circle& const obj1); //Operator overload
    bool operator>(Circle& const obj1); //Operator overload
    bool operator>=(Circle& const obj1); //Operator overload
    bool operator==(Circle& const obj1); //Operator overload
    bool operator!=(Circle& const obj1); //Operator overload
private:
    double radius;
};

Circle::Circle() {
    radius = 0;
}
Circle::Circle(double r) {
    radius = r;
}
double Circle::getArea() const {
    return 3.14159265 * radius * radius; //Math to find the area
}
double Circle::getRadius() const {
    return radius;
}
void Circle::setRadius(double r) {
    radius = r;
}
bool Circle::operator<(Circle& const obj1) {  //Operator overload
    if (radius < obj1.getRadius()) {
        return true;
    }
    return false;
}
bool Circle::operator<=(Circle& const obj1) { //Operator overload
    if (radius <= obj1.getRadius()) {
        return true;
    }
    return false;
}
bool Circle::operator>(Circle& const obj1) { //Operator overload
    if (radius > obj1.getRadius()) {
        return true;
    }
    return false;
}
bool Circle::operator>=(Circle& const obj1) { //Operator overload
    if (radius >= obj1.getRadius()) {
        return true;
    }
    return false;
}
bool Circle::operator==(Circle& const obj1) { //Operator overload
    if (radius == obj1.getRadius()) {
        return true;
    }
    return false;
}
bool Circle::operator!=(Circle& const obj1) { //Operator overload
    if (radius != obj1.getRadius()) { 
        return true;
    }
    return false;
}

void compare(Circle& obj1, Circle& obj2) { //Compares the radius of obj1 and obj2
    if (obj1 == obj2) {
        cout << "They are both the same\n";
    }
    if (obj1 != obj2) {
        cout << "Does not equal\n";
    }
    if (obj1 < obj2) {
        cout << "First radius is less than the second radius\n";
    }
    if (obj1 > obj2) {
        cout << "First radius is greater than the second radius\n";
    }
    if (obj1 <= obj2) {
        cout << "First radius is less than or equal to the second radius\n";
    }
    if (obj1 >= obj2) {
        cout << "First radius is greater than or equal to the second radius\n";
    }
    cout << endl;
}

int main()
{
    double userInput;

    do { //Runs until the user is done. Gets the radius values, prints the area for both and then compares them both.
        cout << "Please enter a number for the first radius or -1 to quit:\n";
        cin >> userInput;
        if (userInput == -1) {
            break;
        }
        Circle obj1(userInput);
        cout << "Please enter a number for the second radius:\n";
        cin >> userInput;
        Circle obj2(userInput);
        cout << "\nFirst radius's area: " << obj1.getArea() << endl;
        cout << "Second radius's area: " << obj2.getArea() << "\n\n";
        compare(obj1, obj2);
    } while (userInput != -1);
}
