#include <iostream>

using namespace std;

long long binarny(int a){
    long long b=0,k=1;
    while(a!=0){
        b=b+(a%2)*k;
        a=a/2;
        k=k*10;
    }
    return b;
}

void zamiana(int a){
    if(a>=2)
    zamiana(a/2);
    cout << a%2;
}

long long sys(int a, int p){
    long long w=0, k=1;
    while(a!=0){
        w=w+(a%p)*k;
        a=a/p;
        k=k*10;
    }
    return w;
}

int zam(long long a){
    int w=0, i=1;
    while(a!=0){
        int z;
        z=a%10;
        w=w+z*i;
        i=i*2;
        a=a/10;
    }
    return w;
}


int main()
{
    cout << "z nia gruda nie smakuje  cos nie tak  to z gangiem sie podziele tym co mam  ubieram kominiarke  melanz trwa  puszczam lady gage lalala  wyruszamy w miasto ty i ja  robi sie tu masno staje czas  wchodzimy jak w maslo nanana  robi sie juz j jasno a my gaz  bo tylko z moim gangiem lece w tryb  bo kazdy w moiim gangu to jest swir  bo tylko z moim gangiem lece w tryb  bo kazdy w moim gangu to jest swir  kominiarki tancza tak  spiewam se jak michal szpak cztery glosy mam na tak  komin na lbie to moj znak  wjezdza tutaj masny jimmy nasza trojka cos tu kmini  styl mam gruby tak jak wini gbsa daj mordini  kawa kopie w jednej chwilii gruda weszla nie skminili  psy wjechaly pogonili nie bedziemy dla nich mili  pisza nam mandaty  jeden byl kumaty  to z nim zalatwiam sprawy  reszta wypad z chaty ksiega ulicy mowi jasno rudy to frajer wie to cale miasto rudy frajerskim dissem chlasnal a my go ogramy masno masno masno ja mam hajs ja mam flex a ty nawet nie masz ex jestes kamien spadasz na dno a ja lece tylko w gore a ty masz w mozgu dziure lap za moja rure (rure) lap za moja rure (rure) lap za moja rure jp cie chwyca" << endl;
    return 0;
}
