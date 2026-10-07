// лаба 4.5
// варіант 13

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double R1, R2, x, y;
    
    cout << "R1 = "; cin >> R1;
    cout << "R2 = "; cin >> R2;

    for (int i=0; i<10; i++)
        {
        x = R1*2*rand()/RAND_MAX - R1;
        y = R1*2*rand()/RAND_MAX - R1;
        if ( (x*x + y*y <= R2*R2 && x <= 0 && y >= 0)
         || (x>=0 && y<=0 && x*x+y*y<=R1*R1 && x*x+y*y>=R2*R2))
            cout << setw(8) << setprecision(4) << x << " "
            << setw(8) << setprecision(4) << y << " " << "yes" << endl;
        else
            cout << setw(8) << setprecision(4) << x << " "
            << setw(8) << setprecision(4) << y << " " << "no" << endl;
        }
    return 0;


    cin.get();
    return 0;
}