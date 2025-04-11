// User Function Template
class Solution {
  public:
   vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        
  /* Step 1: Creating adjacency list representation of the graph
     Each index in adj[] holds a list of {neighbour, weight}
   */
   vector<vector<int>>adj[V];
   
//edges is a vector of vectors. 
//Each element in edges is of the form {u, v, w},
//which represents an edge between node u and node v with weight w


//  loop converts the edge list into an adjacency list.
      for (auto&it: edges){
        int u = it[0]; // start node
        int v = it[1]; // end node
        int w = it[2]; // weight of edge u-v
        adj[u].push_back({v, w}); // directed edge u -> v
        adj[v].push_back({u, w}); // undirected: add v -> u as well
      }
      
// Step 2: Min-heap to always process the node with the smallest distance so far
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
      
// Step 3: Distance array to keep track of shortest distance to each node
    vector<int> dist(V, 1e9); // Initialize all distances to "infinity"
    dist[src] = 0; // Distance to source is 0
    pq.push({0, src}); // Push the source with distance 0
    
     // Step 4: Start the Dijkstra process
    while (!pq.empty()) {
        auto &it = pq.top(); // Get the node with the smallest distance
        int d = it.first;    // current known shortest distance
        int node = it.second; // current node
        pq.pop();

        // Step 5: Visit all adjacent nodes of the current node
        for (auto &it : adj[node]) {
            int adjN = it[0]; // adjacent node
            int adjW = it[1]; // edge weight

            // Step 6: Relaxation step
            if (d + adjW < dist[adjN]) {
                dist[adjN] = d + adjW; // update with shorter distance
                pq.push({dist[adjN], adjN}); // push updated node into the heap
            }
        }
    }

    // Step 7: Return the shortest distances from source to all vertices
    return dist;
      
    }
};
