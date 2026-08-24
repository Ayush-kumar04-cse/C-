# include <iostream>
using namespace std;
void sum(int x,int y,int  z);

int main()
{
    int a,b,c;
    cout<<"Enter three numbers a, b, c: ";
    cin>>a>>b>>c;
    sum(a, b, c);
    return 0;
}
void sum(int x,int y,int  z)
{
    int result;
    result=x+y+z;
    cout<<"The sum of three numbers is: "<<result<<endl;
}


# include <iostream>
using namespace std;
int sum(int x,int y,int  z);

int main()
{ 
    int a,b,c;
    cout<<"Enter three numbers a, b, c: ";
    cin>>a>>b>>c;
    int result = sum(a, b, c);
    cout<<"The sum of three numbers is: "<<result<<endl;
    return 0;
}
int sum(int x,int y,int  z)
{
    int result;
    result=x+y+z;
    return result;
    
}



# include <iostream>
using namespace std;
int sum(int x =2 ,int y = 2,int  z = 3);

int main()
{
    int a,b,c,result1,result2,result3,result4;

    
    result1 = sum();
    result2 = sum(10);
    result3 = sum(10, 20);
    result4 = sum(10, 20, 30);
    cout<<"The sum of three numbers is in result1: "<<result1<<endl;
    cout<<"The sum of three numbers is in result2: "<<result2<<endl;
    cout<<"The sum of three numbers is in result3: "<<result3<<endl;
    cout<<"The sum of three numbers is in result4: "<<result4<<endl;
    return 0;
}
int sum(int x,int y,int  z)
{
    int result;
    result=x+y+z;
    return result;
    
}


