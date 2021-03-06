#include <iostream>
using namespace std;

int smallest(int num)

{

    // initialize frequency of each digit to Zero

    int freq[10] = {0};

    // count frequency of each digit in the number

    while (num)

    {

        int d = num % 10; // extract last digit

        freq[d]++; // increment counting

        num = num / 10; //remove last digit
    }

    // Set the LEFTMOST digit to minimum expect 0

    int result = 0;

    for (int i = 1; i <= 9; i++)

    {

        if (freq[i])

        {

            result = i;

            freq[i]--;

            break;
        }
    }
    for (int i = 0; i <= 9; i++)
        while (freq[i]--)
            result = result * 10 + i;
    return result;
}
int main()
{
    int num = 95413;
    cout << smallest(num);
    return 0;
}