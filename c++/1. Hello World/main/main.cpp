#include <iostream>
#include <complex>
#include <vector>
using namespace std;
double square (double x){
    return x*x;
}
void print_square(double x){
    cout<<"Kwadrat liczby : "<<x<<" wynosi : "<<square(x)<<endl;
}
void jakasFunkca(){
    double d = 2.2;
    int i = 7;
    d = d+i;
    i = d*i;
}
bool accept(){
    cout<<"Czy chcesz kontynuowac? (t lub n) \n";
    char answer = 0;
    cin>>answer;

    if(answer=='t')return true;
    return false;
}
bool accept2(){
    cout<<"Czy chcesz kontynuowac? (t lub n) \n";

    char answer = 0;
    cin>>answer;

    switch(answer){
    case 't':
        return true;
    case 'n':
        return false;
    default:
        cout<<"Chyba raczej nie.\n";
        return false;
    }
}
bool accept3(){
    int tries = 1;
    while (tries<4) {
        cout<<"Czy chcesz kontynuowac? (t lub n)\n";
        char answer = 0;
        cin>>answer;

        switch(answer){
        case 't':
            return true;
        case 'n':
            return false;
        default:
            cout<<"Niestety, nie zrozumialem.\n";
            ++tries;
        }
    }
    cout<<"Chyba raczej nie.\n";
    return false;
}
void copyFCT(){
    int v1[10] = {0,1,2,3,4,5,6,7,8,9};
    int v2[10];

    for(int i=0; i!=10; i++)
        v2[i]=v1[i];
}
void printA(){
    int v[] = {0,1,2,3,4,5,6,7,8,9};

    for(int x : v)//dla kazdego x w v
        cout<< x << "\n";
}
void increment(){
    int v[] = {0,1,2,3,4,5,6,7,8,9};
    for(int& x : v){
        ++x;
        cout<<x;
    }
}
int countX(char*p, char x){
    if(p==nullptr) return 0;
    int count = 0;
    for(;*p!=0; ++p)
        if(*p==x)
            ++count;
    return count;
}

int main()
{
    /*
    print_square(1.234);
    double d1 = 2.3;
    double d2 {2.3};

    complex<double> z1 = 1;
    complex<double> z2 {d1,d2};
    complex<double> z3 = {1.2};
    vector<int> v {1,2,3,4,5,6};


    cout<<"d1 : "<<d1<<" zajmuje miejsca : "<<sizeof(d1)<<endl;
    cout<<"d2 : "<<d2<<" zajmuje miejsca : "<<sizeof(d2)<<endl;
    cout<<"z1 : "<<z1<<" zajmuje miejsca : "<<sizeof(z1)<<endl;
    cout<<"z2 : "<<z2<<" zajmuje miejsca : "<<sizeof(z2)<<endl;
    cout<<"z3 : "<<z3<<" zajmuje miejsca : "<<sizeof(z3)<<endl;
    cout<<"v : "<<v<<endl;

    auto b = true;
    auto ch = 'x';
    auto i = 123;
    auto d = 1.2;
    auto z = sqrt(y);

    cout<<accept3();

    char v[6];
    char*p=&v[3];//wskaznik na czwarty element tablicy
    char x = *p;//*p jest obiektem, na który wskazuje p

    printA();
    increment();

    int a[n];//tablica intow 'a' o 'n' wartosci
    int*p;//wskaznik na intach
    int&a//referencja na tablice a
    double *pd = nullptr;
    Link<Record>*lst = nullptr;//wskaźnik do łącza rekordu
    int x = nullptr;//error nullptr jest wskaznikiem a nie liczba*/

    return 0;
}
