
//=============================================================problem 1==================================================
/*
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
        returnedStr = st.top() + returnedStr;
        st.pop();
    }
    return returnedStr;
}
*/
//=============================================================problem 2==================================================
/*
#include<iostream>
#include<stack>
using namespace std;
int main() {
	cout << "Enter The String : ";
	string input;
	cin >> input;
	stack<int> st;
	for (int i = 0; i < input.size(); i++) {
		switch (input[i]) {
		case 'W':
		case 'w':
			st.push(5);
			break;
		case 'D':
		case 'd':
			st.push(10);
			break;
		case 'C':
		case 'c':
			if (!st.empty()) st.pop();
			break;
		case 'S':
		case 's':
			int last1 = 0, last2 = 0;
			if (st.size() >= 2) {
				int last1 = st.top(); st.pop();
				int last2 = st.top(); st.pop();
				st.push(last2);
				st.push(last1);
				st.push(last1 + last2);
			}
			else if (st.size() == 1) {
				int last1 = st.top(); st.pop();
				st.push(last1);
				st.push(last1);
				break;
			}
		}
	}
		int sum = 0;
		while (!st.empty()) {
			sum += st.top();
			st.pop();
		}
		cout << sum << '\n';
}
*/
