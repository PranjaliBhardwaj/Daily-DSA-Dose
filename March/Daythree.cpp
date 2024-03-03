/*Chef is shopping for masks. In the shop, he encounters 
2
2 types of masks:

Disposable Masks — cost 
�
X but last only 
1
1 day.
Cloth Masks — cost 
�
Y but last 
10
10 days.
Chef wants to buy masks to last him 
100
100 days. He will buy the masks which cost him the least. In case there is a tie in terms of cost, Chef will be eco-friendly and choose the cloth masks. Which type of mask will Chef choose?

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases. Then the test cases follow.
Each test case consists of a single line of input, containing two space-separated integers 
�
,
�
X,Y.
Output Format
For each test case, if Chef buys the cloth masks print CLOTH, otherwise print DISPOSABLE.

You may print each character of the string in uppercase or lowercase (for example, the strings cloth, clOTh, cLoTH, and CLOTH will all be treated as identical).*/


int main() {

int test_cases;
    cin >> test_cases;

    for(int tc = 1; tc <= test_cases; tc++) {
        int disposable_price, cloth_price;
        cin >> disposable_price >> cloth_price;

        // Solve the problem here

        if((100 * disposable_price) < (10 * cloth_price))
            cout << "Disposable" << endl;
        else
            cout << "Cloth" << endl;
    }

    return 0;
}
