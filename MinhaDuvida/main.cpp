#include <iostream>

using namespace std;

void fa(){
    cout << "funcao A" << endl;
}

void fb(){
    cout << "funcao B" << endl;
}

void fexterna(int i, f){
    cout << "funcao externa e ";
    f();
}

int main()
{
    fexterna(4, fa);
    return 0;
}
