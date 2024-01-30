/*You are given an array of strings tokens that represents an arithmetic expression in a Reverse Polish Notation.

Evaluate the expression. Return an integer that represents the value of the expression.*/

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> st;

        for (string str : tokens) {
            if (isOperator(str)) {
                int result = 0;
                int ele2 = stoi(st.top());
                st.pop();
                int ele1 = stoi(st.top());
                st.pop();

                if (str == "+") {
                    result = ele1 + ele2;
                }
                else if (str == "-") {
                    result = ele1 - ele2;
                }
                else if (str == "/") {
                    result = ele1 / ele2;
                }
                else if (str == "*") {
                    result = ele1 * ele2;
                }
                st.push(to_string(result));
            }
            else {
                st.push(str);
            }
        }
        return stoi(st.top());
    }

private:
    bool isOperator(string str) {
        return (str == "+" || str == "-" || str == "*" || str == "/");
    }
};
