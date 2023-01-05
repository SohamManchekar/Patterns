/*

Q1.
    input : 4
    expected output :  1 2 3 4
                       1 2 3 4
                       1 2 3 4
                       1 2 3 4

    To print the output in reverse order :
        int i = 1;

        while(i<=n){
            int j = 1;
            while (j<=n)
            {
                cout << n - j + 1 << " ";
                j++;
            }
            cout << endl;
            i++;
        }
*/

#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter number : ";
    cin >> n;

    int i = 1;

    while(i<=n){
        int j = 1;
        while (j<=n)
        {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}