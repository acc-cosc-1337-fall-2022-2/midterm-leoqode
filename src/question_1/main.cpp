#include<iostream>
#include"question1.h"
using namespace std;

int main()
{
    int user_cookie_amount;
    char user_continue_choice;
    cout<<"Welcome to Leo's Bakery Tutorial!"<<endl;
    cout<<"How many cookies would you like to bake?"<<endl;
    cout<<"Cookie Amount: ";
    cin>>user_cookie_amount;
    cout<<"\nCups of Sugar amount for "<<user_cookie_amount<<" is: "<<expected_sugar(user_cookie_amount)<<endl;
    cout<<"Cups of Butter amount for "<<user_cookie_amount<<" is: "<<expected_butter(user_cookie_amount)<<endl;
    cout<<"Cups of Flour amount for "<<user_cookie_amount<<" is: "<<expected_flour(user_cookie_amount)<<endl;
    cout<<"\nWould you like to bake some more?\nY - Yes\nN - No\nContinue?: ";
    cin>>user_continue_choice;
    user_continue_choice = toupper(user_continue_choice);
    if(user_continue_choice == 'Y')
    {
        do
        {
            cout<<"How many cookies would you like to bake?"<<endl;
            cout<<"Cookie Amount: ";
            cin>>user_cookie_amount;
            cout<<"\nCups of Sugar amount for "<<user_cookie_amount<<" is: "<<expected_sugar(user_cookie_amount)<<endl;
            cout<<"Cups of Butter amount for "<<user_cookie_amount<<" is: "<<expected_butter(user_cookie_amount)<<endl;
            cout<<"Cups of Flour amount for "<<user_cookie_amount<<" is: "<<expected_flour(user_cookie_amount)<<endl;
            cout<<"\nWould you like to bake some more?\nY - Yes\nN - No\nContinue?: ";
            cin>>user_continue_choice;
            
        }
        while(toupper(user_continue_choice) != 'N');
    }


}