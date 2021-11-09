#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> extMcd(int a, int b)
{
    vector<int> temp;
    int q = a / b;
    int res = a - (q * b);

    int s1;
    s1 = 1;
    int s2;
    s2 = 0;
    int s = s1 - (q * s2);

    int t1;
    t1 = 0;
    int t2;
    t2 = 1;
    int t = t1 - (q * t2);

    while (res > 0)
    {
        a = b;
        b = res;
        q = a / b;
        res = a - (q * b);

        s1 = s2;
        s2 = s;
        s = s1 - (q * s2);

        t1 = t2;
        t2 = t;
        t = t1 - (q * t2);

    }
    temp.push_back(b);
    temp.push_back(s2);
    temp.push_back(t2);

    return temp;
}

int inverse(int n, int mod){
	vector<int>rpts=extMcd(n,mod);
	int gcd=rpts.at(0);
	int inv=rpts.at(1);
	if(gcd==1){
		cout<<"La inversa multiplicativa de "<<n<<" en modulo "<<mod<<" es "<<inv;
		return inv;
	}
	else{
		cout<<n<<" No tiene inversa multiplicativa en modulo "<<mod;
	}
}

main(){
	cout<<"Inversa Multiplicativa"<<endl<<endl;
	int x,y;
	x=5;
	y=7;
	int inversa=inverse(x, y);
}
