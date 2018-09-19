#include <bits/stdc++.h>
#define v(i) *(V[i])

struct edge {
	int u;
	int v;
	int w;
	int fail;
	
	edge() {}
	edge(int _u, int _v, int _w = 1, int _n = -1): u(_u), v(_v), w(_w), fail(_n) {}
	
	edge reverse() {
		return edge(v, u, w, fail);
	}
};

struct LinkGraph {
	static MAXN = 262144;
	static MAXM = 4718592;
	int n, m;
	vector<edge> *V;
	
	LinkGraph(int _n = 10) {
		if (_n > 262144) _n = 262144;
		
		V = new vector<edge>[n + 1];
	}
	
	~LinkGraph() {
		delete V;
	}
	
	bool judge(int, int);
	
	void insert(int u, int v, int w) {
		if (u > n || v > n) return;
		v(u).push_back()
	}
	
	void erase(int u, int v, int w, int l = 0, int r = 0) {
		if (l > r) return;
		if (r == 0) r = v(u).size();
		
		
	}
	void 
};
