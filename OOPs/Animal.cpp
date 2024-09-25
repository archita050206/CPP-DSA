#include<iostream>
using namespace std;
class Animal{
    protected:
    string species;
    int age;
    float weight;
    public:
    Animal(string s, int a, float w){
        species=s;
        age=a;
        weight=w;
    }
    void displayinfo(){
        cout<<"Species of the animal: "<<species<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"weight: "<<weight<<endl;
    }
};
class Mammal : public Animal{
    protected:
    string furColor;
    public:
    Mammal(string s, int a, float w, string f):
        Animal(s,a,w),furColor(f){}
    
    void makeSound(){
        cout<<species<<" makes sound!"<<endl;
    }
};
class Bird: public Animal{
    protected:
    float wingSpan;
    public:
    Bird(string s, int a, float w, float wing):
        Animal(s,a,w),wingSpan(wing){}
      
    
    void fly(){
        cout<<species<<" is flying with a wingspan of "<<wingSpan <<" meters"<<endl;
    }
};
class Reptile: public Animal{
    protected:
    bool isVenomous;
    public:
    Reptile(string s, int a, float w, bool b):
        Animal(s,a,w),isVenomous(b){}
        
    
    void crawl(){
        cout<<species<<" is crawling\n";
    }
};
class Lion: public Mammal{
    protected:
    int prideSize;
    public:
    Lion(string s, int a, float w, string f,int pride):
        Mammal(s,a,w,f),prideSize(pride){}
        
    
    void hunt(){
        cout<<species<<" hunts with a pride of "<<prideSize<<" members\n";
    }
};
class FlyingReptile: public Bird, public Reptile{
    public:
    FlyingReptile(string s, int a, float w, float wing, bool venum):
        Bird(s, a, w, wing), Reptile(s, a, w, venum) {} 
    void glide(){
        cout<<"Flying reptile is gliding with a wingspan of "<<wingSpan<<" meters"<<endl;
    }
    void displayinfo(){
        Bird::displayinfo();
    }

};
class Elephant: public Mammal{
    private:
    float trunkLength;
    public:
    Elephant(string s, int a, float w, string f, float len):
    Mammal(s,a,w,f),trunkLength(len){}
    void useTrunk(){
        cout<<species<<" uses its trunk to drink water\n";
    }
    
};
int main(){
    Lion lion("Lion",5,190,"Golden",6);
    lion.displayinfo();
    lion.makeSound();
    lion.hunt();
    Bird parrot("Parrot",2,1.5,0.8);
    parrot.displayinfo();
    parrot.fly();
    Reptile croc("Crocodile",12,400,false);
    croc.displayinfo();
    croc.crawl();
    Elephant ele("Elephant",10,5000,"Grey",2);
    ele.displayinfo();
    ele.makeSound();
    ele.useTrunk();
    FlyingReptile flyrep("Pterodactyl",3,50,3,true);
    flyrep.displayinfo();
    flyrep.fly();
    flyrep.crawl();
    flyrep.glide();

}
// Multpiple inheritance: multiple parents one child
//Hierarchial inheritance: one parent multiple children
