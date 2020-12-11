#include <bits/stdc++.h>
using namespace std;
# define N 4
#define INF  99999       /// thora sa gadbad ho raha hain  bad me sahi kata hun 
void floydalgo(int a[][N]) {
	for (int k = 1; k <= N ; k++) {
		for (int i = 1; i <= N ; i++) {
			for (int j = 1; j <= N; j++) {
				a[i][j] = min(a[i][j] , a[i][k] + a[k][j]); // k ka value alag alag ayega
			}                                          // us se k matrix generae honge aur pichla wala matrix modify ho jayega .
		}
	}
}

int main() {
	int graph[N][N] = { {0, 3, INF, 7},
		{8, 0, 2, INF},
		{5, INF, 0, 1},
		{2, INF, INF, 0}
	};
	floydalgo(graph );
	for (int i = 1 ; i <= N ; i++) {
		for (int j = 1 ; j <= N ; j++) {
			if (graph[i][j] == INF) {
				cout << INF << " " ;
			}
			else {
				cout << graph[i][j] << " ";
			}
		}
		cout << endl ;
	}

            return 0 ;

}