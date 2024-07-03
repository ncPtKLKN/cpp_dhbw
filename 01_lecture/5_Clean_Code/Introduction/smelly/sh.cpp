#include <iostream>
using namespace std;

class sh {
public:
    double f1(double l) {
        double q_area = 0.155 * l * l;
        return q_area;
    }
    double f2(double bb, double* hh) {
        double t_area = 0.0775 * bb * (*hh);
        return t_area;
    }
private:
    double tmp;
};

int main() {
    double qside, trbase, trheight, qresult, tresult;
    cout << "Enter s: ";
    cin >> qside;
    sh s;
    qresult = s.f1(qside);
    cout << "Square A: " << qresult << endl;

    cout << "Enter b: ";
    cin >> trbase;
    cout << "Enter h: ";
    cin >> trheight;
    tresult = s.f2(trbase, &trheight);
    cout << "Triangle A: " << tresult << endl;


    return 0;
}