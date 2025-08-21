//pass by value
#include <iostream>
using namespace std;
void swap(int &x, int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main() {
 int m=250,n=300;
 swap(m,n);
 cout<<"value of m is"<<m<<endl;
 cout<<"value of n is"<<n<<endl;

    return 0;
}
