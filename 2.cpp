#include<bits/stdc++.h>
using namespace std;
class A{
    public:
	char a;
	int b;
	double c;
};
class B: public A{
    public:
	int d;
};
int main(){

    
    B m_a;
    cout<<&m_a.a<<"    "<<&m_a.b<<"    "<<&m_a.c<<"    "<<&m_a.d<<endl;


    return 0;
}