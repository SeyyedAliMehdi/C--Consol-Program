#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float a, b , c ,x1 ,x2;

    cout << "\nEnter a:  ";
    cin >> a;
    cout << "\nEnter b:  ";
    cin >> b;
    cout << "\nEnter c:  ";
    cin >> c;
int delta = b*b - 4*a*c;
    //cout << delta;1

    if (delta > 0)
    {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);

        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }


    else if (delta == 0)
    {
        cout << "Delta is equal to 0. \n";
        cout << "Roots are real and same"<<endl;
        x1 = -b / (2*a);

        cout << "X = " << x1 << endl;
    }
    
    else{
        cout << "The equation does not have any roots";
    }
    

return 0;
}