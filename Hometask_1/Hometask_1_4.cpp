#include <iostream>
using namespace std;

int SymmetricNumber(int x) {

    int a = x/1000;
    int b = (x-a*1000)/100;
    int c = (x - a*1000 - b*100)/10;
    int d = x - a*1000 - b*100 - c*10;
    int product=0;

    // There are 4 possibilities that abcd is symmetric: 
    // 1: a==d && b==c => (a-d)^2+(b-c)^2=0
    // 2: a==0 && b==d => a + (b-d)^2=0
    // 3: a==b==0 && c==d => (a+b)^2+(c-d)^2=0
    // 4: a==b==c==0 => (a+b+c)^2=0
    // The product of the 4 cases 1)+2)+3)+4) is 0 if and only if one of the factors is 0. (All factors are positive.)
    // So we first print the product: 

    product = ((a-d)*(a-d)+(b-c)*(b-c))*
        (a+(b-d)*(b-d))*
        ((a+b)*(a+b)+(c-d)*(c-d))*
        ((a+b+c)*(a+b+c));

    return product+1;

}

int main() {
    cout << "The given numbers are symmetric, if integer 1 is printed: ";
    cout << SymmetricNumber(33) << endl;;
    return 0;
}