#include "question3.h"
using namespace std;


int main()
{
    int user_continue_choice;
    string user_binary_string;
    cout<<"Welcome to Leo's Binary Lab!"<<endl;
    cout<<"Please enter a valid Binary String!"<<endl;
    cout<<"Validation - Length must be 8, Only 1's & 0's"<<endl;
    cin>>user_binary_string;
    while(true)
    {
        if(user_binary_string.length() == 8 && user_binary_string.find('1','0'))
        {
            cout<<"The binary decimal for "<<user_binary_string<<" is: "<<binary_to_decimal(user_binary_string)<<endl;
            cout<<"Would you like to try another string?"<<endl;
            cout<<"1 - Yes\n2 - Exit"<<endl;
            cout<<"User choice: ";
            cin>>user_continue_choice;
            if(user_continue_choice == 1)
            {
                cout<<"Please enter a valid Binary String!"<<endl;
                cout<<"Validation - Length must be 8, Only 1's & 0's"<<endl;
                cin>>user_binary_string;
            }
            else
            {
                return 0;
            }

        }
        else
        {
            cout<<"You have entered an invalid value! Make sure Length of string is 8 characters, and only 1's and 0's";
            cout<<"Please enter a valid Binary String!"<<endl;
            cout<<"Validation - Length must be 8, Only 1's & 0's"<<endl;
            cin>>user_binary_string;
        }
    }
}