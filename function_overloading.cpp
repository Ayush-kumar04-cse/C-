// # include <iostream>
// # include  <cmath>
// using namespace std;
// int main(){
//     int x = - 5;
//     float y = -5.343;
//     cout<<"The absolute value of x is: "<<abs(x)<<endl;
//     cout<<"The absolute value of y is: "<<fabs(y)<<endl;
//     return 0;
// }

# include <iostream>
using namespace std;
int Sum(int a, int b){
    return a+b;
}
float Sum(float a, float b){
    return a+b;
}
double Sum(double a, double b){
    return a+b;
}
int Sum(int a, int b, int c){
    return a+b+c;
}
void Sum(char a, char b){
    cout<<a<<b<<endl;
}
int main(){
    cout<<Sum(10,20)<<endl;
    cout<<Sum(2.4,4.5)<<endl;
    cout<<Sum(10,20,30)<<endl;
    Sum('A','B');
    return 0;
}