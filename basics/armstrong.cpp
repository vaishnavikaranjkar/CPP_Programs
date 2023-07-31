//run c++ program -` ctrl+shift+b , then run main.exe from terminal. Armstrong number - if sum of cubes of individual digits of a number are equal to the number.qq

#include <iostream>
using namespace std;
    
int main()
{
    int n,r,m,sum=0;
    cout<<"Enter n: ";
    cin>>n;
    m=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if (sum==m)
    {
        cout<<"Armstrong.";
    }
    else
    {
        cout<<"Not armstrong.\n"; 
    }

    system("pause");

    return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
//     int num, originalNum, remainder, result = 0;
//     cout << "Enter a three-digit integer: ";
//     cin >> num;
//     originalNum = num;

//     while (originalNum != 0) {
//         // remainder contains the last digit
//         remainder = originalNum % 10;
        
//         result += remainder * remainder * remainder;
        
//         // removing last digit from the orignal number
//         originalNum /= 10;
//     }

//     if (result == num)
//         cout << num << " is an Armstrong number.";
//     else
//         cout << num << " is not an Armstrong number.";


//     system("pause");
//     return 0;
// }