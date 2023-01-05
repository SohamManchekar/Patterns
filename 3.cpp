/*

Q3. 
    input : 4
    expected output :
        1) * :
                * 
                * * 
                * * * 
                * * * * 
            
        2) number inc : 
                1 
                2 3 
                4 5 6 
                7 8 9 10 
        
        3) number : 
                1 
                1 2 
                1 2 3 
                1 2 3 4 
        
        Note : uncomment one code and then run(not all at once).
*/

#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter number : ";
    cin >> n;
    int i = 1;
    int count = 1;

    //? Pattern for * 
//     while (i<=n) {
//         int j = 1;
//         while (j<=i) {
//             cout << "* ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }

    //? pattern for number increment 
//     while (i<=n){
//         int j = 1;
//         while (j<=i){
//             cout << count << " ";
//             count++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }

    //? pattern for number
//     while (i<=n) {
//         int j = 1;
//         while (j<=i) {
//             cout << j << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }

}