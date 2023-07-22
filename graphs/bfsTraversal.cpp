class Solution
{
public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int n, vector<int> adj[])
    {
        
        int visited[n] = {0}; // visited array
        queue<int> q;         // queue to store current nodes
        vector<int> bfs;      // vector to store bfs traversal

        // pushing source node into queue, and marking it as visited
        visited[0] = 1;
        q.push(0);

        while (!q.empty())
        {
            int currNode = q.front(); // store current node(front of queue) in a currNode
            q.pop();                  // pop it
            visited[currNode] = 1;    // mark it as visited
            bfs.push_back(currNode);  // push it into bfs traversal vector

            // pushing unvisited neighbours of currNode into queue, and marking them as visited
            for (auto nextNode : adj[currNode])
            {
                if (!visited[nextNode])
                {
                    visited[nextNode] = 1;
                    q.push(nextNode);
                }
            }
        }
        return bfs;
    }
};
