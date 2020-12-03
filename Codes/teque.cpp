#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class Teque {
private:
	deque<int> dq1;
	deque<int> dq2;
public:
	void balance() {
		if(dq1.size() > dq2.size()+1) {
			dq2.push_front(dq1.back());
			dq1.pop_back();
		} else if (dq2.size() > dq1.size()) {
			dq1.push_back(dq2.front());
			dq2.pop_front();
		}
	}
	void push_front(int number) {
		dq1.push_front(number);
	}

	void push_middle(int number) {
		dq1.push_back(number);
	}

	void push_back(int number) {
		dq2.push_back(number);
	}
	void get(int number) {
		if (number >= dq1.size()) {
			cout << dq2[number-dq1.size()] << endl;
		} else {
			cout << dq1[number] << endl;
		}
	}
};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	Teque Tq;
	int N; cin >> N;
	cin.ignore();
	while(N--) {
		string s; cin >> s;
		int number; cin >> number;
		if(s=="push_front") {
			Tq.push_front(number);
			Tq.balance();
		} else if (s=="push_middle") {
			Tq.push_middle(number);
			Tq.balance();
		} else if (s=="push_back") {
			Tq.push_back(number);
			Tq.balance();
		} else if (s=="get") {
			Tq.get(number);
		}
	}
	return 0;
}

/*int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);
    //use 2 deque to simulate. middle of teque is end of first deque. 
    //balance the double dequeue by popping front of dq2, pushing back of dq1
    deque<int> dq1;
    deque<int> dq2;
    int N; cin >> N;
    cin.ignore();
    while(N--) {
        string s; cin >> s;
        int number; cin >> number;
        if(s == "push_back") {
            dq2.push_back(number);
            if(dq1.size() > dq2.size()+1) {
            	dq2.push_front(dq1.back());
            	dq1.pop_back();
        	} else if(dq2.size() > dq1.size()) {
        		dq1.push_back(dq2.front());
           		dq2.pop_front();
        	} 
        } else if (s == "push_front") {
            dq1.push_front(number);
            if(dq1.size() > dq2.size()+1) {
            	dq2.push_front(dq1.back());
            	dq1.pop_back();
        	} else if(dq2.size() > dq1.size()) {
        		dq1.push_back(dq2.front());
           		dq2.pop_front();
        	} 
        } else if (s == "push_middle") {
            dq1.push_back(number);
            if(dq1.size() > dq2.size()+1) {
            	dq2.push_front(dq1.back());
            	dq1.pop_back();
        	} else if(dq2.size() > dq1.size()) {
        		dq1.push_back(dq2.front());
           		dq2.pop_front();
        	}         } else if(s == "get") {
            if(number >= dq1.size()) {
                cout << dq2[number-dq1.size()] << endl;
            } else {
                cout << dq1[number] << endl;
            }
        }
    }
    return 0;
}*/