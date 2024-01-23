/*Chef has three water bottles. At any point, if at least two of them are empty, she will fill them up. But if at most one bottle is empty, she will wait, and not fill them up now.

You are given three integers - 

Output "Water filling time", if Chef has to fill the bottles now. If not, output "Not now".*/

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; // Read the number of test cases
    while (T--) { // Loop over all test cases
        int B1, B2, B3;
        cin >> B1 >> B2 >> B3; // Read the state of each bottle

        // Check if at least two bottles are empty
        if ((B1 + B2 + B3) <= 1) {
            cout << "Water filling time" << endl;
        } else {
            cout << "Not now" << endl;
        }
    }

    return 0;  
}



/*In Chefland, there are 
�
X schools, and each school has 
�
Y students.
The year end results are in and a total of 
�
Z students passed the exams.

Assuming that all students appeared for the exams, find whether the number of students who passed in Chefland was strictly greater than 
50
%
50%.*/
#include <iostream>
using namespace std;

int main() {
    int T, X, Y, Z;
    cin >> T; // Read the number of test cases
    while (T--) {
        cin >> X >> Y >> Z; // Read X, Y, and Z for each test case
        if (2*Z > X*Y) { // Check if the number of passed students is greater than 50%
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}



/*In a coding contest, there are two types of problems:

Easy problems, which are worth 
1
1 point each
Hard problems, which are worth 
2
2 points each
To qualify for the next round, a contestant must score at least 
�
X points. Chef solved 
�
A Easy problems and 
�
B Hard problems. Will Chef qualify or not?*/
#include <iostream>
using namespace std;

int main() {
    int T, X, A, B;
    cin >> T; // Read the number of test cases
    while (T--) { // Loop over each test case
        cin >> X >> A >> B; // Read X, A, and B for the current test case
        if (A + 2 * B >= X) { // Check if Chef qualifies
            cout << "Qualify" << endl; // Chef qualifies
        } else {
            cout << "NotQualify" << endl; // Chef does not qualify
        }
    }
    return 0;
}
