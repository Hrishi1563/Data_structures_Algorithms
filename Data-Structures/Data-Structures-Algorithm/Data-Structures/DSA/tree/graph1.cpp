#include <bits/stdc++.h>
using namespace std;

class graph {
	int nodes;
	map<int, vector<int>> adjList;
	unordered_set<int> visited;
public:
	graph(int n) {
		this->nodes = n;
	}

	graph(int n, map<int, vector<int>> mp) {
		this->nodes = n;
		this->adjList = mp;
	}

	void addEdge(int a, int b) {
		this->adjList[a].push_back(b);
	}

	void dfs(int source) {
		visited.clear();
		vector<int> stack{source};

		while(stack.size() > 0) {
			int current = stack[stack.size()-1];
			stack.pop_back();
			visited.insert(current);
			cout << current << " ";

			for (auto x: adjList[current]) {
				if (!visited.count(x)) {
					stack.push_back(x);
				}
			}
		}
	}


	void bfs(int source) {
		visited.clear();
		vector<int> queue{source};

		while(queue.size() > 0) {
			int current = queue[0];
			queue.erase(queue.begin());

			if (!visited.count(current)) {
				cout << current << " ";
			}
			visited.insert(current);

			for (auto x: adjList[current]) {
				if (!visited.count(x)) {
					queue.push_back(x);
				}
			}
		}
	}
};

signed main() {
	graph g(5);

	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(0, 3);
	g.addEdge(2, 4);
	g.addEdge(4, 0);
	// g.addEdge(2, 0);

	g.dfs(0);
	cout << endl;
	g.bfs(0);
	cout << endl;

}
