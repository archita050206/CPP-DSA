#include<iostream>
using namespace std;
class BasePiece{
    public:
    virtual void move()=0;
};
class King: public BasePiece{
    void move(){
        cout<<"Move 1 step in any direction"<<endl;
    }
};
class Queen: public BasePiece{
    void move(){
        cout<<"Move any number of steps in any direction"<<endl;
    }
};
class Bishop: public BasePiece{
    void move(){
        cout<<"Move diagonally any number of steps"<<endl;
    }
};
class Rook: public BasePiece{
    void move(){
        cout<<"Move any number of steps forward, backward or sideways"<<endl;
    }
};
class Knight: public BasePiece{
    void move(){
        cout<<"Move horizontally and vertically two steps"<<endl;
    }
};
class Pawn: public BasePiece{
    void move(){
        cout<<"Move 1 step forward"<<endl;
    }
};
int main(){
    BasePiece *bp=new King();
    bp->move();
}