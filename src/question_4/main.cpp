#include "question4.h"
using namespace std;



int main()
{
    string rna_string;
    cout<<"Welcome to Leo's DNA lab!"<<endl;
    cout<<"Please enter the RNA string you would like to transcribe!"<<endl;
    cout<<"\nRNA STRING : ";
    cin>>rna_string;
    cout<<"\nThe RNA string transcibed into DNA is: "<<transcribe_dna_into_rna(rna_string)<<endl;

}