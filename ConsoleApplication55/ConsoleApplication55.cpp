
#include <iostream>
using namespace std;

int main()
{
    int a;
    int sum = 0;

    cout << "Enter number a: ";
    cin >> a;

    
    while (a <= 500) {
        sum += a;
        a++;
      
    }

    cout << "Сount of 500 : " << sum << endl;



    int x, y;
    int result = 1;

    
   cout << "Enter num x: ";
  cin >> x;
  cout << "Enter y: ";
    cin >> y;

   
    if (y == 0) {
        result = 1; 
    }
    else {
        int count = 0;
        while (count < y) {
            result *= x;
            result++;

        }
    }


    int nums;
    cout << "Enter your numbers : ";
    cin >> nums;

   
    int number = 1;

    cout << "Number " << nums << " is divisible without a remainder : ";

    while (number  <= nums) {
        if (nums % number == 0) {
            cout << number << endl;
        }
        number++;
    }
    int count = 0;
    int i = 100; 

    
    while (i <= 999) {
       
        int num1 = i / 100;        
        int num2 = (i / 10) % 10;      
        int num3 = i % 10;          

      
        if (num1 == num2 || num1 == num3 || num2== num3) {
            count++;

            i++;
        }
}
