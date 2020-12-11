// bilkul sahi run kar raha hain
#include <bits/stdc++.h>
using namespace std;

struct  mettting
{
	int start ;
	int end ;
	int pos ;
};

bool compare(mettting m1 , mettting m2) {
	return (m1.end < m2.end);
}


void maxmeet(int s[], int f[] , int n )
{
	struct  mettting milgaye[n];
	for (int i = 0 ; i < n ; i++) {
		milgaye[i].start = s[i];
		milgaye[i].end = f[i];
		milgaye[i].pos = i + 1;
	}
	sort(milgaye , milgaye + n , compare);
	vector<int> v;
	v.push_back(milgaye[0].start);
	int timelimit = milgaye[0].end;
	for (int i = 1 ; i < n ; i++) {
		if (milgaye[i].start > timelimit) {
			v.push_back(milgaye[i].pos);
			timelimit = milgaye[i].end;
		}

	}
	for (auto i : v) {
		cout << i << " ";
	}
}
int main() {
	int s[] = { 1, 3, 0, 5, 8, 5 };

	// Finish time
	int f[] = { 2, 4, 6, 7, 9, 9 };

	// Number of meetings.
	int n = sizeof(s) / sizeof(s[0]);
	maxmeet(s, f , n );

	return 0 ;
}