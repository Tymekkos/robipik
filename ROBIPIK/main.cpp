#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

bool palindrom(string a){
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]!= a[a.size()-i-1]){
            return false;
        }
    }
    return true;
}
bool pierwszaostatnia(string a){
    if(a[0]!= a[a.size()-1]){
        return false;
    }
    return true;
}

int main()
{
    string b;
    srand(time(NULL));
    for(int i=0; i<10; i++){
        for(int i=100;i<500;i++){
                b=i;
            if(pierwszaostatnia(b)){
                cout << b << " ";
            }
    }
}
    /*
    string a;
    cout << "podaj lancuch znakow: ";
    cin >> a;
    if(palindrom(a))
    {
        cout << "lancuch znakow jest palindromem";
    }else{
        cout <<"lancuch znakow nie jest palindromem";
    }
    */
    return 0;
}
