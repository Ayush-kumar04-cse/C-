# include <iostream>
using namespace std;
inline int max(int x,int y)
{
    return (x>y)?x:y;
}
int main()
{
    cout <<"max(20,10) : " <<max(20,10)<<endl;
    cout<<"max(0,1000) : "<<max(0,1000)<<endl;
    cout<<"max(100,1010) : "<<max(100,1010)<<endl;
    
    return 0;
}



// Per month salary calculator

# include <iostream>
# include <iomanip>

using namespace std;


int main()
{
    float month_of_work;
    cout << "Enter the number of months you have worked: ";
    cin >> month_of_work;
    double salary ;
    cout << "Enter your salary: ";
    cin >> salary;
    float per_month_salary = salary / month_of_work;
    cout<<fixed<<setprecision(2)<<"your per month salary is: "<<per_month_salary<<endl;
    return 0;
}
