/*

Q19.
    input : 4
    expected output : 
                    1234
                     234
                      34
                       4
    Logic : 
        1) int space = i - 1;
            while(space){
                cout << " ";
                space--;
            }

        2) int j = i - 1;
            while(j<n){
                cout << j + 1 ;
                j++;
            }
    Explanation : First we have to print space and then pattern.
        1)  int space = i - 1;
            when i = 1 -> 1 - 1 = 0;
            when i = 2 -> 2 - 1 = 1;
            when i = 3 -> 3 - 1 = 2;
            when i = 4 -> 4 - 1 = 3;

        2) int j = i - 1;
                 = 1 - 1 = 0 
                 = 2 - 1 = 1
                 = 3 - 1 = 2
                 = 4 - 1 = 3

                while(j<n){  
                    cout << j + 1 ;
                    j++;
                } 

        output: 1 2 3 4
                  2 3 4
                    3 4
                      4
*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter number : ";
    cin >> n;
    int i = 1;

    while (i<=n){
        int space = i - 1;
        while(space){
            cout << " ";
            space--;
        }
        int j = i - 1;
        while(j<n){
            cout << j + 1 ;
            j++;
        }
        cout << endl;
        i++;

    }
}