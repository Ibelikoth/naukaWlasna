#include <iostream>
#include <cstdlib>
using namespace std;
void losuj(int pierwszy){
    int index=0;
    srand(time(0));
    for(int i=0;i<9;i++){
        //tu musze przez wskaźnik odwołać się do kolejnych komórek w pamięci
        pierwszy=rand();
        pierwszy+=index;
        index+=4;
    }
}
void wypisz(int pierwszy){
    int index=0;
    for(int i=0; i<9; i++){
        cout<<pierwszy<<endl;
        pierwszy+=index;
        index+=4;
    }
}


int main(){
    /*
    int tab[10]={0,1,2,3,4,5,6,7,8,9};
    int *pocz=&tab[0];
    int *kon=&tab[9];
    cout<<kon<<" "<<pocz<<endl;//<-wyoisuje adres do komórki pamięci
    cout<<&tab[0]<<" "<<&tab[10]<<endl;
    cout<<*pocz<<" "<<*kon<<endl;//<- a tu powinna być wartość ALE NIE MA hue
*/
    int tab[10];
    int *pocz=&tab[0];
    int *temp=&tab[1];
    cout<<"index 0 = "<<pocz<<" index 1 = "<<temp;
    losuj(*pocz);
    wypisz(*pocz);
    return 0;
}
