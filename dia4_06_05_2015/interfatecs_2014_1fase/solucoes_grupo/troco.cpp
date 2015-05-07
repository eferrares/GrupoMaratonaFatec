#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    int loop;
    cin >> loop;
    while(loop--){
        int a, b, c, r;
        cin >> a;
        r = 0;
        while (a--){
            cin >> b >> c;
            r += b*c;
        }
        int t;
        cin >> t;
        if( r > t){
            cout << "DINHEIRO INSUFICIENTE\n";
        }else{
            cout << t - r<< endl;
        }
    }
    return 0;
}
