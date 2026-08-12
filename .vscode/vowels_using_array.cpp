#include <iostream>
using namespace std;
int main()
{
    char vowels[]{'a', 'e', 'i', 'o', 'u'};
    char vo;

    cout << "enter the first vowel" << endl;
    cin >> vo;
    if (vo == vowels[0])
    {
        cout << "this is correct vowel" << endl;
    }
    else
    {
        cout << "the entered vowel is wrong." << endl;
    }
    cout << "enter second vowel" << endl;
    cin >> vo;
    if (vo == vowels[1])
    {
        cout << "the correct second vowel is:" << vowels[1] << endl;
        cout << "this is correct vowel" << endl;
    }
    else
    {
        cout << "the entered vowel is wrong." << endl;
    }
    return 0;
}