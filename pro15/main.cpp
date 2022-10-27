#include <bits/stdc++.h>
using namespace std;
class Burger{
private:
string name;
string bread;
string meat;
int price;
string addition1;
string addition2;
string addition3;
string addition4;
int addition1price=0;
int addition2price=0;
int addition3price=0;
int addition4price=0;

public:
    Burger(string name,string bread, string meat,int price){
        this ->name=name;
        this ->bread=bread;
        this->meat=meat;
        this ->price=price;

    cout<<"orderd : "<<name<<" "<<bread<<" "<<meat<<"for price in LE : "<<price<<endl;
    }
void setaddition1(string name,int price){
this ->addition1=name;
this ->addition1price=price;
cout<<"we add : "<<addition1<<"and the price is :"<<addition1price<<endl ;


}
void setaddition2(string name,int price){
this ->addition2=name;
this ->addition2price=price;
cout<<"we add : "<<addition2<<"and the price is :"<<addition2price<<endl ;


}
void setaddition3(string name,int price){
this ->addition3=name;
this ->addition3price=price;
cout<<"we add : "<<addition3<<"and the price is :"<<addition3price<<endl ;


}
void setaddition4(string name,int price){
this ->addition4=name;
this ->addition4price=price;
cout<<"we add : "<<addition4<<"and the price is :"<<addition4price<<endl ;


}
int bringtotal(){
int res=this->price;
res+=addition1price;
res+=addition2price;
res+=addition3price;
res+=addition4price;
return res;
}
};

class HealthyBurger :public Burger   {
private:
string healthyaddition1;
string healthyaddition2;

int healthyaddition1price=0;
int healthyaddition2price=0;
public:
    HealthyBurger(string name, string meat, int price) :Burger (name,"brown",meat,price ){

    cout<<"we are in health burger:"<<endl;
    }

void sethealthyaddition1price(string name,int price)
{
 this ->  healthyaddition1=name;
 this ->healthyaddition1price=price;
 cout<<"we add : "<<healthyaddition1<<"and the price is :"<<healthyaddition1price<<endl ;


}
void sethealthyaddition2price(string name,int price)
{
 this ->  healthyaddition2=name;
 this ->healthyaddition2price=price;
 cout<<"we add : "<<healthyaddition2<<"and the price is :"<<healthyaddition2price<<endl ;


}
void setaddition1(string name,int price){
cout<<"cant add this addition"<<endl;

}
void setaddition2(string name,int price){

cout<<"cant add this addition"<<endl;

}
void setaddition3(string name,int price){

cout<<"cant add this addition"<<endl;

}
void setaddition4(string name,int price){
cout<<"cant add this addition"<<endl;
}

int bringtotal(){
int res= Burger::bringtotal();
res+=healthyaddition1price;
res+=healthyaddition2price;


return res;
}

};
class Delux :public Burger {


public:
    Delux():Burger("Delux","chiken","white",40)
    {
    Burger::setaddition1("chips",10);
    Burger::setaddition2("pepsi",15);
    }
void setaddition1(string name,int price){
cout<<"cant add this addition"<<endl;

}
void setaddition2(string name,int price){

cout<<"cant add this addition"<<endl;

}
void setaddition3(string name,int price){

cout<<"cant add this addition"<<endl;

}
void setaddition4(string name,int price){
cout<<"cant add this addition"<<endl;
}
};
int main (){


    Burger burger("normal","white","meat",23);
    burger.setaddition1("coca",10);
   cout<<"the total price : "<< burger.bringtotal()<<endl;
cout<<"*****************************"<<endl;
HealthyBurger hb1("healthy","chiken",40);
hb1.sethealthyaddition1price("orange",10);
cout<<"your total is"<<hb1.bringtotal()<<endl;
cout<<"*************************"<<endl;
Delux delux;
delux.setaddition1("chips", 10 );
cout<<"your total is"<<delux.bringtotal()<<endl;

 return 0;
}
