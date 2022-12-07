#include <iostream>

using namespace std;

class CU{
    int l, m, cc;
public:
    void setL(int _l){
    l = _l;
    }
    void setM(int _m){
    if(m!=0) m = _m;
    else m = 1;
    }
    void setCC(int _cc){
    cc = _cc;
    }
    int getL(){
    return l;}
    int getM(){
    return m;}
    int getCC(){
    return cc;}
    CU(){
    l = 0;
    m = 1;
    cc = 0;}
    CU(int _l, int _m){
    setL(_l);
    setM(_m);}
    CU(int _l, int _m, int _cc){

    CU(_l, _m);
    setCC(_cc);}
    static int nwd(int l, int m){
    while (l !=m)
        {
            if (l>m) l-=m;
            else m-=l;
        }
        return l;
    }
    void skracanie(){
        if(l == 0 || m == 0) return;
        int d =nwd(l, m);
        l /=d;
        m /=d;
    }
    CU operator*(CU arg){
        CU wynik;
        wynik.l = l * arg.l;
        wynik.m = m * arg.m;
        wynik.skracanie();
        return wynik;
    }
    void show(){
    cout << l << "/" << m <<endl;}
};

int main()
{
    CU A(2,4);
    A.show();
    A.skracanie();
    A.show();

}
