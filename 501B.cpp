#include <iostream>
#include <list>
#include <stack>
#include <string>
#include <map>
#include <vector>
#include <sstream>
using namespace std;
stringstream output;
 vector<int> answer[5000];
 int index = 0;
class Graph
{
    int V;    // No. of vertices
    list<int> *adj;    // Pointer to an array containing adjacency lists
    void DFSUtil(int v, bool visited[]);  // A function used by DFS
public:
    Graph(int V);   // Constructor
    void addEdge(int v, int w);   // function to add an edge to graph
    void DFS();    // prints DFS traversal of the complete graph
};
 
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
 
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}
 
void Graph::DFSUtil(int v, bool visited[])
{
    // Mark the current node as visited and print it
    visited[v] = true;
 //   cout << v << " ";
    answer[index].push_back(v);
 
    // Recur for all the vertices adjacent to this vertex
    list<int>::iterator i;
    for(i = adj[v].begin(); i != adj[v].end(); ++i)
        if(!visited[*i])
            DFSUtil(*i, visited);
    index++;
}
 
// The function to do DFS traversal. It uses recursive DFSUtil()
void Graph::DFS()
{
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for(int i = 0; i < V; i++)
        visited[i] = false;
 
    // Call the recursive helper function to print DFS traversal
    // starting from all vertices one by one
    for(int i = 0; i < V; i++)
        if(visited[i] == false)
            DFSUtil(i, visited);
}
 
int main()
{
    int n, count;
    string a, b;
    cin >> n;
    Graph g(2*n);
    vector<pair<string, string> > vec;
    map<string, int> m;
    map<int, string> m1;
    count = 0;
    while(n--)
    {
        
        cin >> a >> b;
        vec.push_back(make_pair(a, b));
        if(!m[a])
        {
            m[a] = count;
            m1[count++] = a;
        } 
        if(!m[b])
        {
            m[b] = count;
            m1[count++] = b;
        }

    }
    /*for(map<string, int>::iterator it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
    cout << endl;*/
    for(vector<pair<string, string> >::iterator it = vec.begin(); it != vec.end(); it++)
    {
        g.addEdge(m[(*it).first], m[(*it).second]);
    }
 
    //cout << "Following is Depth First Traversal (starting from vertex 0) \n";
    g.DFS();
    int anc = 0;
    
    for(int i= 0 ; i < index; i++)
    {
        if(answer[i].size() > 1)
        {
            anc++;
            output << m1[answer[i].front()] << " " << m1[answer[i].back()] << endl;
        }
    }
    cout << anc << endl;
    cout << output.str();
 
    return 0;
}