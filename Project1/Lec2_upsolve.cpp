#include<iostream>
#include<stack>
#include<string>
using namespace std;
string editingStr(string s);
int main() {
	string input;
	cin >> input;
	cout << editingStr(input);
}
string editingStr(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == '#') {
            if (!st.empty()) st.pop();
        }
        else if (c == '$') {
            if (!st.empty()) st.push(st.top());
        }
        else {
            st.push(c);
        }
    }

    string returnedStr = "";
    while (!st.empty()) {
        returnedStr = st.top() + returnedStr; // عشان ناخدها بالترتيب الصحيح
        st.pop();
    }
    return returnedStr;
}