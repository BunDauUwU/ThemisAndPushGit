#include <bits/stdc++.h>

using namespace std;

#define           Elaina  signed main()
#define             FAST  cin.tie(nullptr) -> ios_base::sync_with_stdio(false);

typedef        long long  ll;
typedef      long double  ld;
typedef      pair<ll,ll>  pii;

const ll      N  =  1e5 + 5;
const ll      M  =  1e5 + 5;
const ll    mod  =  1e9 + 7;
const ll    INF  =  1e18;
string NFILE[] = {"case1", "case2", "case3"};

/////////////////////////
///.........../\__/\..///
///..........(=o_o= ).///
///.....[Blackcat!]<\.///
/////////////////////////

bool checkCase(string NAME){
    ifstream inp (NAME+".inp");
    ofstream outCase ("uwu.inp");
    
    stringstream ss;
    ss << inp.rdbuf();
    outCase << ss.str();

    outCase.close();
    inp.close();

    system("g++ main.cpp -o main");
    system("main.exe");
    system("g++ trau.cpp -o trau");
    system("trau.exe");

    return system("fc uwu.out uwu.ans") == 0;
}

Elaina {
    FAST

    ll NCASE = 2;
    for(int i = 0; i < NCASE; i++){
        if(checkCase(NFILE[i]) == 1){
            cout << "Case " << i + 1<< ":" << " Passed\n"; 
        }else{
            cout << "Case " << i + 1<< ":" << " Wrong answer\n"; 
        }
    }

    return 0;
}
