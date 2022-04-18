#include <iostream>

class vector{
private:
    int x, y;
public:
    vector() = default;
    vector(int a,int b):x(a), y(b) {};
    friend int innerProduct(vector, vector);
};
int innerProduct(vector v1, vector v2){
    return v1.x*v2.x+v1.y * v2.y;
}
int main() {
    vector v1 = vector(2,3);
    vector v2 = vector(-1,9);
    std::cout << innerProduct(v1, v2) << std::endl; // 2*(-1) + 3*9 = 25
    return 0;
}
