#include<iostream>
using namespace std;

int main(int arg, char* args[]){
    for(int i=0; i<arg; i++){
        cout<<i<<" : "<<args[i]<<'\n';
    }
}