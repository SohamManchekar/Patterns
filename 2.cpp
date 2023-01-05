/*

Q2. 
    input : 4
    expected output: 1 2 3 4
                     5 6 7 8
                     9 10 11 12
                     13 14 15 16
    Note : It is printing the value of count not of i.

*/

#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter number : ";
    cin >> n;
    int i = 1;
    int count = 1;     // increment the count by count = count + 1; 

    while (i<=n){
        int j = 1;
        while(j<=n){
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}