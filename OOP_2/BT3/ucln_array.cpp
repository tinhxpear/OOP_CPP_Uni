#include<bits/stdc++.h>
int ucln(int a, int b)
{
    while (a!=b)
    {
        if(a>b) a-= b ;
        else if(a < b ) b-= a ;
        else return a ;
    }
    return a;   
}
void enter_array(int *array, int number_of_elements)
{
    for (int  i = 1; i <= number_of_elements; i++)
    {
        std :: cout << "Number " << i << " = ";
        std :: cin >> array[i];
    }
    
}
void print_array(int *array, int number_of_elements)
{
    for (int  i = 1; i <= number_of_elements; i++)
    {
        std :: cout << array[i] << " ";
    }
}
int ucln_array(int *array,int number_of_elements)
{
    int t = array[1] ;

    for (int  i = 1; i < number_of_elements ; i++)
    {
        t= ucln(t,array[i + 1]) ;           
    }
    return t ;
}
int main()
{
    int number_of_elements ;
    int *array = new int [number_of_elements];
    std :: cout << "Enter your number of elements : ";
    std :: cin >> number_of_elements;
    std :: cout << "Enter your array : \n";
    enter_array(array,number_of_elements);
    std :: cout << "Your array is : ";
    print_array(array,number_of_elements);
    std :: cout << "\nThe greatest common divisor of your array : " << ucln_array(array,number_of_elements);
}