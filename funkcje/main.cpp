#include <iostream>

using namespace std;

bool pierwsza(int a){
    if(a<2){
        return false;
    }
    for(int i=2; i*i<=a; i++){
        if(a%i==0){
            return false;
        }else{
            return true;
        }
    }
}
int suma_cyfr(int a){
    int s=0;
    while(a){
        s+=a%10;
        a=a/10;
    }
    return s;
}

bool pierwsza_i_ostatnia(string a){
    if(a[0]!=a[a.size()-1]){
        return false;
    }else{
        return true;
    }
}

bool pierwsza_i_ostatnia_int(int a){
    int s=0;
    int b=a;
    while(a){
        s++;
        a=a/10;
    }
    if(a==b/10*s*a){
        return true;
    }else{
        return false;
    }
}

int nwd(int a, int b){
    while(a!=b){
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }
    }
    return a;
}

int nwd2(int a, int b){
    if(b==0){
        return a;
    }else{
    return nwd(b, a%b)
    }
}

int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fib(n-1)+fib(n-2);
}

int main()
{
    int n, m;
    cin >> n >> m;
    cout <<"nwd "<< nwd(n, m);
    return 0;
}
