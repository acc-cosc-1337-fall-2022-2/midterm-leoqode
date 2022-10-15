#include "question2.h"
int main()
{
    char user_continue;
    double sales;
    cout<<"Please enter how many sales were aquired!"<<endl;
    cout<<"\nSales amount: ";
    cin>>sales;
    double expected_commission = get_sales_commission(sales);
    cout<<"\nExcpected Sales Commission From "<<sales<<" Sales is: "<<expected_commission<<endl;
    cout<<"Would you like to calculate more sales commission?"<<endl<<"Y - Yes\nN - No"<<endl;

    cout<<"\nContinue?: ";
    cin>>user_continue;

    if(toupper(user_continue) == 'Y')
    {
        do
        {
            
            cout<<"Please enter how many sales were aquired!"<<endl;
            cout<<"\nSales amount: ";
            cin>>sales;
            double expected_commission = get_sales_commission(sales);
            cout<<"\nExcpected Sales Commission From "<<sales<<" Sales is: "<<expected_commission<<endl;
            cout<<"Would you like to calculate more sales commission?"<<endl<<"Y - Yes\nN - No"<<endl;
            cout<<"\nContinue?: ";
            cin>>user_continue;

        }
        while(toupper(user_continue) == 'Y');
    }


}