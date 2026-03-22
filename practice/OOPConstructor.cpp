#include<iostream>
using namespace std;
class Car{
public:
    Car(string a, int p, int m){
        name =a;
        price=p;
        model=m;
        cout<<"Made object Car with name: "<<name<<" price: "<<price<<" and model: "<<model<<endl;
    }
    Car(string a){
        name=a;
        price=100000;
        model=2026;
        cout<<"Made default Car with name: "<<name<<endl;
    }
    string getname(){
        return name;
    }
    int getprice(){
        return price;
    }
    int getmodel(){
        return model;
    }
private:

    string name;
    int price;
    int model;

};
int main(){
    Car Car1("Car1");
    Car Car2("Car2",10,2020);
    cout<<Car1.getname()<<Car2.getname()<<endl;
    cout<<Car1.getmodel()<<Car2.getmodel()<<endl;
    cout<<Car1.getprice()<<Car2.getprice()<<endl;
}