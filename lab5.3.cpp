#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double z(const double x); // прототип функції

int main()
{
    double pp, pk;
    int n;

    cout << "pp = "; cin >> pp;
    cout << "pk = "; cin >> pk;
    cout << "n  = "; cin >> n;

    double dp = (pk - pp) / n;
    double p = pp;

   
    cout << fixed << setprecision(5);
    cout << "-----------------------" << endl;
    cout << "|" << setw(8) << "p" << " |" << setw(10) << "result" << " |" << endl;
    cout << "-----------------------" << endl;

  
    while (p <= pk)
    {
        double c = z(p * p) + 2 * z(2 * p + p * p) + 1;
        cout << "|" << setw(8) << setprecision(2) << p << " |"
            << setw(10) << setprecision(5) << c << " |" << endl;
        p += dp;
    }
    cout << "-----------------------" << endl;

    return 0;
}

double z(const double x)
{
    if (abs(x) >= 1)
    {
        return (cos(2 * x) + 1) / (cos(x) + sin(x) * sin(x));
    }
    else
    {
        double a = 2 * x; 
        double S = a;     

        for (int k = 1; k <= 6; k++)
        {
            double R = (4 * x * x) / ((2 * k) * (2 * k + 1));
            a *= R;       
            S += a;
        }
        return S;
    }
}