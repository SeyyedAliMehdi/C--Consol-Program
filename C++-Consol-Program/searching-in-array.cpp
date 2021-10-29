#include <iostream>
#include <string>
using namespace std;

int main(){

string city[4] = {"London", "Paris" , "Monigh", "Rio"};
string cityname ;
getline (cin, cityname);
for(int i = 0; i < 4; i++){
  
    

    if (city[i] == cityname){
    
        cout << "The City found !\n";
        cout << "The index of item is:"<< i <<endl;
        
    } else {
        cout << "The City Not Found\n\n";
    }

}

    return 0;
}