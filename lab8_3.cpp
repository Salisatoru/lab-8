#include<iostream>
using namespace std;

char before(char x){
    if(x=='A'){
        return 'Z';
    }
    if('A'<x and x<='Z'){
        return x-1;
    }else{
        return '0';
    }
}


