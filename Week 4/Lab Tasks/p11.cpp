#include<iostream>
using namespace std;

main()
{
    int bill , discount , discounted_bill;
    cout << " enter bill ";
    cin>>bill;
    if(bill <=5000)
    {
        discount = bill * 0.05;
    }
    if(bill > 5000)
    {
        discount = bill * 0.10; 
    }
    discounted_bill = bill - discount;
    cout << " Discount: "<<discounted_bill<<endl;
    cout << " your discounted bill is: "<<discounted_bill;
    
}