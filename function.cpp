// # include <iostream>
// using namespace std;
// void sum(int x,int y,int  z);

// int main()
// {
//     int a,b,c;
//     cout<<"Enter three numbers a, b, c: ";
//     cin>>a>>b>>c;
//     sum(a, b, c);
//     return 0;
// }
// void sum(int x,int y,int  z)
// {
//     int result;
//     result=x+y+z;
//     cout<<"The sum of three numbers is: "<<result<<endl;
// }


/*# include <iostream>
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
    
}*/



/*# include <iostream>
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
*/

/*  next day */ 

/*  the setbase is the function of the library of "iomainip" 
this is the use of setbase() in the () you have to write the whick numberic system you want measns it would be Decimal,
Octal or Hecadecimal this iomanip support ont 3 numberic system*/


/*# include <iostream>
# include  <iomanip>

using namespace std;

int main()
{
    int num;
    cout<<"Enter the number in Octal form = ";
    cin >>setbase(8)>>num;
    cout<<"value of number in decimal from = "<<setbase(10)<<num<<endl;
    cout<<"value of number in octal from = "<<setbase(8)<<num<<endl;
    cout<<"value of number in hecadecimal from = "<<setbase(16)<<num<<endl;
    return 0;
}
*/


/* use of setw() :- setw is use to make the output more perfrcte in the proper formate 
Name                Marks               
kuldeep vishwas     12.34               
Akash kunar yadav   30                  
Shlok Agwral        69.5                
Sweta               10.
in this way 
simarally the setfill() is wrking */

/*# include <iostream>
# include  <iomanip>

using namespace std;

int main()
{
    cout<<left;
    cout<<setw(20)<<"Name"<<setw(20)<<"Marks"<<endl;
    cout<<setw(20)<<"kuldeep vishwas"<<setw(20)<<"12.34"<<endl;
    cout<<setw(20)<<"Akash kunar yadav"<<setw(20)<<"30"<<endl;
    cout<<setw(20)<<"Shlok Agwral"<<setw(20)<<"69.5"<<endl;
    cout<<setw(20)<<"Sweta"<<setw(20)<<"10.5"<<endl;
    return 0;
}
    */

/*# include <iostream>
# include  <iomanip>

using namespace std;

int main()
{
   int h,m;
   cout<<"Enter Houers : ";cin>>h;
   cout<<"Enter Minuts : ";cin>>m;
   cout<<setfill('0');
   cout <<"Your time is : "<<setw(2)<<h<<":"<<setw(2)<<m;
   return 0;
}*/





