#include<iostream>
using namespace std;

main()
{
    double price_redroses = 2.00;
    double price_whiteroses = 4.10;
    double price_tulips = 2.50; 
    double total_price, discounted_price,final_price;
    int red, white, tulips;
    cout << " Enter the number of Red roses: ";
    cin >> red;
    cout << " Enter the number of White roses: ";
    cin >> white;
    cout << " Enter the number of Tulips: ";
    cin >> tulips;
    total_price = (red*price_redroses) + (white*price_whiteroses) + (tulips*price_tulips);
    if(total_price > 200)
    {
        discounted_price = total_price*0.20;
        final_price= total_price - discounted_price;
    }
    cout << " The Original Price: "<<total_price<<endl;
    cout << " The total payable amount after the discount: "<<final_price;

}