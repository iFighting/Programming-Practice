#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int bin[100005], Rank[100005], nums[100005];

int find(int x) {
    int y = x;
    while (bin[y] != y) {
        y = bin[y];
    }
    int temp, head = y;
    y = x;
    while (bin[y] != y) {
        temp = bin[y];
        bin[y] = head;
        y = temp;
    }
    return head;
}

void merge(int x, int y) {
    int fx = find(x), fy = find(y);
    if (fx != fy) {
        if (Rank[fx] <= Rank[fy]) {
            nums[fy] += nums[fx];
            nums[fx] = 0;
            bin[fx] = fy;
            if (Rank[fx] == Rank[fy]) {
                Rank[fy] ++;
            }
        } else {
            bin[fy] = fx;
            nums[fx] += nums[fy];
            nums[fy] = 0;
        }
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q, x, y, z;
    char ch;
    scanf("%d%d", &n, &q);
    memset(Rank, 0, sizeof(Rank));
    for (int i = 0; i <= n; i ++) {
        bin[i] = i;
        nums[i] = 1;
    }
    for (int i = 0; i < q; i ++) {
        cin >> ch;
        //scanf("%c", &ch);
        if (ch == 'Q') {
            scanf("%d", &z);
            int temp = find(z);
            printf("%d\n", nums[temp]);
        } else {
            scanf("%d %d", &x, &y);
            merge(x, y);
        }
    }
    return 0;
}
