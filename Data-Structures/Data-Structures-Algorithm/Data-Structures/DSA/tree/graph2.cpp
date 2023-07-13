#include <bits/stdc++.h>
using namespace std;

class graph {
	int nodes;
	unordered_map<int, list<pair<int, int>> > adj;
public:
	graph(int n) {
		this->nodes = n;
	}

	void addEdge(int a, int b, int c, bool check = false) {
		if (check) {
			adj[a-1].push_back({b-1, c});
			adj[b-1].push_back({a-1, c});
		} else {
			adj[a].push_back({b, c});
			adj[b].push_back({a, c});
		}
	}
	
	vector<int> djikstra(int Nodes, int source) {
		priority_queue< pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> >> pq;
		vector<int> dist(Nodes);

		for (int i=0; i<Nodes; i++) dist[i] = INT_MAX;


		dist[source] = 0;

		pq.push({0, source});

		while(!pq.empty()) {
			int dis = pq.top().first;
			int node = pq.top().second;

			pq.pop();

			for (auto it: adj[node]) {
				int edgeWeight = it.second;
				int adjNode = it.first;

				if (dis + edgeWeight < dist[adjNode]) {
					dist[adjNode] = dis + edgeWeight;
					pq.push({dist[adjNode], adjNode});
				}
			}
		}


		return dist;

	}
};




signed main() {

	graph g(7);


	// if nodes start from 1 pass true
	g.addEdge(2, 6, 3, true);
	g.addEdge(2, 3, 9, true);
	g.addEdge(2, 1, 1, true);
	g.addEdge(6, 7, 3, true);
	g.addEdge(1, 3, 7, true);
	g.addEdge(3, 7, 1, true);
	g.addEdge(7, 5, 5, true);
	g.addEdge(4, 5, 2, true);
	g.addEdge(1, 4, 6, true);

	// g.addEdge(1, 5, 3);
	// g.addEdge(1, 2, 9);
	// g.addEdge(1, 0, 1);
	// g.addEdge(5, 6, 3);
	// g.addEdge(0, 2, 7);
	// g.addEdge(2, 6, 1);
	// g.addEdge(6, 4, 5);
	// g.addEdge(3, 4, 2);
	// g.addEdge(0, 3, 6);

	

	for (int i=0; i<7; i++) {
		vector<int> ans = g.djikstra(7, i);

		for (auto x: ans) cout << x << "    ";
		cout << endl;
	}

}
