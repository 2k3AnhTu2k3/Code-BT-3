#include <iostream>
using namespace std;

void print(int x, int y) {
    cout << "Binh X: " << x << " lit, Binh Y: " << y << " lit\n";
}

void binhNuoc(int VX, int VY, int Z) {
    int x = 0, y = 0; 

    while (x != Z && y != Z) {
        print(x, y);

        if (x == VX) {
            x = 0;
            cout << "Ap dung Luat 1: Do het nuoc trong binh X.\n";
        }
        else if (y == 0) {
            y = VY;
            cout << "Ap dung Luat 2: Do day nuoc vao binh Y.\n";
        }
        else {
            int pour = min(VX - x, y);
            x += pour;
            y -= pour;
            cout << "Ap dung Luat 3: Trut " << pour << " lit nuoc tu binh Y sang binh X.\n";
        }
    }

    cout << "Da dat duoc " << Z << " lit nuoc.\n";
    print(x, y);
}

int main() {
    int VX, VY, Z;

    cout << "Nhap the tich binh X: ";
    cin >> VX;
    cout << "Nhap the tich binh Y: ";
    cin >> VY;
    cout << "Nhap so lit nuoc can dong Z: ";
    cin >> Z;

    binhNuoc(VX, VY, Z);

    return 0;
}