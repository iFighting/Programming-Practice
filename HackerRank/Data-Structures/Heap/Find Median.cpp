#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;


int main() {
	priority_queue<int> maxq;
	priority_queue<int, vector<int>, greater<int> > minq;
	int n, m;
	double cur;
	scanf("%d", &n);
	for (int i = 0; i < n; i ++) {
		scanf("%d", &m);
		if (i % 2 == 0) {
			if (minq.empty() || m <= minq.top()) {
				maxq.push(m);
			} else if (m > minq.top()) {
				minq.push(m);
				maxq.push(minq.top());
				minq.pop();
			}
			cur = maxq.top();
			printf("%.1lf\n", cur);
		} else {
			if (m < maxq.top()) {
				maxq.push(m);
				minq.push(maxq.top());
				maxq.pop();
			} else {
				minq.push(m);
			}
			cur = (maxq.top() + minq.top()) * 1.0 / 2;
			printf("%.1lf\n", cur);
		}
	}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
