#include <cstdio>
#include <algorithm>
#include <cstring>
#include <iostream>
#include <cmath>
#include <string>
#include <map>
#include <list>
#include <queue>
#include <utility>

#define SIZE 25
#define MOD 20071027

#define BOUNDARY(i, j) ((i >= 0 && i < row) && (j >= 0 && j < column))

using namespace std;

char grid[SIZE][SIZE];
bool visited[SIZE][SIZE];
int row, column, n;

int X[] = {0, 1, 0, -1};
int Y[] = {-1, 0, 1, 0};
void dfs(int x, int y)
{
	for(int i = 0; i < 4; i++)
	{
		if(BOUNDARY(x+X[i], y+Y[i]) && grid[x+X[i]][y+Y[i]] == '.' && !visited[x+X[i]][y+Y[i]])
		{
			visited[x+X[i]][y+Y[i]] = true;
			n++;
			dfs(x+X[i], y+Y[i]);
		}
	}
}

int main()
{
	int tc, t = 0, i, j, k, m, mx = 0, x, y, q, value, node;
	char ch;
	long long sum = 0;

	//freopen("input.txt", "r", stdin);
	scanf("%d", &tc);

	for(t = 1; t <= tc; t++)
	{
		scanf("%d %d", &column, &row);
		memset(visited, 0, sizeof visited);

		getchar();
		for(i = 0; i < row; i++)
		{
			for(j = 0; j < column; j++)
			{
				grid[i][j] = getchar();
				if(grid[i][j] == '@')
				{
					x = i;
					y = j;
					visited[x][y] = true;
				}
			}
			getchar();
		}

		n = 1;
		dfs(x, y);

		printf("Case %d: %d\n", t, n);
	}


	return 0;
}

///using BFS
/*
#include <iostream>
#include <iomanip>
#include <vector>
#include <bitset>
#include <algorithm>
#include <set>
#include <map>
#include <utility>
#include <fstream>
#include <sstream>
#include <stack>
#include <queue>
#include <deque>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

using namespace std;

struct point {
 int x , y;
 point () {}
 point (int x_ , int y_) {
  x = x_; y = y_;
 }
};

int row , col;
const int N = 25;
queue < point > Q;
int fx[] = {1 , 0 , -1 , 0};
int fy[] = {0 , 1 , 0 , -1};
bool visited[N][N];
char land[N][N];

int goooo (int px , int py) {
 Q.push(point (px , py));
 visited[px][py] = 1;
 int cnt = 0;
 while (!Q.empty()) {
  point top = Q.front();
  for (int i = 0; i < 4; i++) {
   int dx = top.x + fx[i];
   int dy = top.y + fy[i];
   if (dx >= 0 && dx < row and dy >= 0 && dy < col and land[dx][dy] != '#' and !visited[dx][dy]) {
    Q.push(point (dx , dy));
    visited[dx][dy] = 1;
    cnt++;
   }
  }
  Q.pop();
 }
 return cnt + 1;
}

int main () {
 int T; cin >> T; int i;
 for (i = 1; i <= T; i++) {
  memset (visited , 0 , sizeof (visited));
  cin >> col >> row;
  int stx , sty;
  for (int ii = 0; ii < row; ii++) {
   for (int jj = 0; jj < col; jj++) {
    cin >> land[ii][jj];
    if (land[ii][jj] == '@') {
     stx = ii; sty = jj;
    }
   }
  }
  cout << "Case " << i << ": " << goooo (stx , sty) << endl;
 }
}
*/
