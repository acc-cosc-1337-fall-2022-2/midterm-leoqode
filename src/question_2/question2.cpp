#include "question2.h"
using namespace std;

double get_sales_commission(double sales)
{
    
    double sales_commission;
    if(sales < 0)
    {
        return(sales*0);
    }
    else if(sales > 0 && sales < 500)
    {
        
        return(sales*.05);
    }
    else if(sales > 500 && sales < 1000)
    {

        return(sales*.06);
    }
    else if(sales > 1000 && sales < 1500)
    {
        return(sales*.07);
    }
    else
    {
        return(sales*.08);
    }

    return sales_commission;
}  