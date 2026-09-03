// # include <iostream>
// using namespace std;
// int x = 10;
// int main(){

//      x = 20;
//     {
//         x = 30;
//     }
//     cout << "x = " << x << endl;
//     return 0;
// }

// # include <iostream> 
// using namespace std;
// int x = 1, y = 2, z = 3;
// int main(){
//     // int x = 10, y = 20;
//     cout << "x = " << x <<", y = " << y <<", z = " << z << endl;
//     {
//         int x = 10,y = 20;
//         cout << "x = " << x <<", y = " << y <<", z = " << z << endl;
//         {
//             int z = 100;
//             cout << "x = " << x <<", y = " << y <<", z = " << z << endl;
//         }
//     }
//     return 0;

// }


/*  friend function  */

# include <iostream>
using namespace std;
class sample{
    private:
    int a;
    int b;
    public:
    void setvalue(){
        a = 20;
        b = 30;
    }
    void display(){
        cout << "a = " << a << ", b = " << b << endl;
    }
    friend float mean(sample obj);

};
float mean(sample obj){
    return (obj.a + obj.b)/2.0;
}
int main(){
    sample obj;
    obj.setvalue();
    obj.display();
    cout << "Average = " << mean(obj) << endl;
    return 0;
}

# include <iostream>
using namespace std;
class xyz; 
class abc{
    int a;
    public:
    void setvalue(int x){
        a = x;
    }
    void display(){
        cout << "a = " << a << endl;
    }
    friend void add(abc obj1, xyz obj2);
};
class xyz{
    int x;
    public:
    void setvalue(int y){
        x = y;
    }
    void display(){
        cout << "x = " << x << endl;
    }
    friend void add(abc obj1, xyz obj2);
};


void add(abc obj1, xyz obj2){
    cout << obj1.a + obj2.x << endl;
}

int main(){
    abc obj1;
    xyz obj2;
    obj1.setvalue(10);
    obj2.setvalue(20);
    add(obj1, obj2);
    return 0;
}
