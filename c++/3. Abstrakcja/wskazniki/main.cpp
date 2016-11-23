#include <iostream>
using namespace std;
struct Vector{
    int sz;//liczba elementow
    double *elem;//wskaznik do elementow
};
void vectorInit(Vector &v, int s){
    v.elem=new double[s];
    v.sz=s;
}
double readAndSum(int s){
    Vector v;
    vectorInit(v,s);
    for(int i=0; i!=0; ++i)
        cin>>v.elem[i];
    double sum=0;
    for(int i=0; i!=s;++i)
        sum+=v.elem[i];
    return sum;
}
void f(Vector v, Vector& rv, Vector* pv){
    int i1= v.sz;
    int i2= rv.sz;
    int i4= pv->sz;
}
class Vector1
{
public:
    Vector1(int s) :elem{new double[s]}, sz{s} {}
    double& operator[](int i){return elem[i];}
    int size() {return sz;}
private:
    double *elem;
    int sz;
};
double readAndSum2(int s){
    Vector1 v(s);
    for(int i=0; i!=v.size(); ++i)
        cin>>v[i];

    double sum=0;
    for(int i=0; i!=v.size();++i)
        sum+=v[i];
    return sum;
}

int main(){
    Vector v;
    Vector1 v1(6);
    return 0;
}
