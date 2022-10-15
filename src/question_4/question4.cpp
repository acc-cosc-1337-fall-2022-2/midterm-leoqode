#include "question4.h"
using namespace std;

string transcribe_dna_into_rna(string dna_string)
{
    for(int i = 0; i < dna_string.length(); i++)
    {
        switch(dna_string[i])
        {
            case 'T':
                dna_string[i] = 'U';

    
        }

    }
    return dna_string;
}