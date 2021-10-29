/*---------------------------
        By Seyyed Ali Mahdi
----------------------------*/

#include<iostream>
using namespace std;
int main ()
{
    int m, n, i, j, A[10][10];

    cout << "Enter the number of rows: ";
    cin >> m ;
    cout <<"Enter the number of columns:" ;
    cin >> n;

    cout << "Enter the array elements One By One: ";
    
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++)
            cin >> A[i][j];

}
    cout << "Matrix : \n ";


    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            cout << A[i][j] << "  ";
        cout << "\n ";
    }
    return 0;
}