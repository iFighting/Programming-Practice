#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, index = 0, cnt, cost;
    long long cur = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i ++) {
    	scanf("%d %d", &cnt, &cost);
    	cur += cnt - cost;
    	if (cur < 0) {
    		cur = 0;
    		index = i + 1;
    	}
    }
    printf("%d\n", index);
    return 0;
}
