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
    CU(int _l, _m){
    setL(_l);
    setM(_m)}
    CU(int _l, _m, _cc){
    CU(_l, _m);
    set cc = _cc;
};

int main()
{

}
