#include<iostream>
using namespace std;
int main() {
 int i,j;
    for(i=1;i<=6;i++){
        for(j=1;j<=i;j++){
            std::cout<<"*";
        }
        std::cout<<endl;
    }
    return 0;
}