#include <iostream>

#include <iomanip>

using namespace std;



int main() {


    int C[4][4];

    int angka = 1;


    for (int i = 0; i < 4; i++) {

        for (int j = 0; j < 4; j++) {

            C[i][j] = angka++;

        }

    }



    cout << "Matriks 4x4 :\n";



    for (int i = 0; i < 4; i++) {

        for (int j = 0; j < 4; j++) {

            cout << setw(4) << C[i][j];

        }

        cout << endl;

    }



    return 0;

}