// Tính giai thừa
#include<bits/stdc++.h>
int main()
{
    short number;
    std :: cout << "Enter your number : ";
    std :: cin >> number ;
    std :: cout << "The factorial of " << number << " is : ";
    int accumulator = 1 ;
    for(;number > 0 ; accumulator *= number--);
    std :: cout << accumulator << "\n";
}