# include <iostream>
using namespace std;
int x = 10;
int main(){

     x = 20;
    {
        x = 30;
    }
    cout << "x = " << x << endl;
    return 0;
}

# include <iostream> 
using namespace std;
int x = 1, y = 2, z = 3;
int main(){
    // int x = 10, y = 20;
    cout << "x = " << x <<", y = " << y <<", z = " << z << endl;
    {
        int x = 10,y = 20;
        cout << "x = " << x <<", y = " << y <<", z = " << z << endl;
        {
            int z = 100;
            cout << "x = " << x <<", y = " << y <<", z = " << z << endl;
        }
    }
    return 0;
}
