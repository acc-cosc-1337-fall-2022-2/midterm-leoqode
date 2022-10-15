#include "question3.h"
using namespace std;

int binary_to_decimal(string binary_in)
{
    int new_binary = stoi(binary_in);

    int base_value = 1;

    int binary_count = 0;

    int loop_place_holder = new_binary;

    while(loop_place_holder)
    {
        int last_value = loop_place_holder % 10;
        loop_place_holder = loop_place_holder / 10;

        binary_count += last_value * base_value;

        base_value = base_value * 2;


    }
    return binary_count;
}