#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *left;
    node *right;
    node(int val){
        data=val;
        left=nullptr;
        right=nullptr;
    }
};
