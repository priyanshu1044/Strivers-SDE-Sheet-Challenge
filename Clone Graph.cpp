/***************************************************************************

	Class for graph node is as follows:

	class graphNode
	{
		public:
    		int data;
    	vector<graphNode *> neighbours;
    	graphNode()
    	{
        	data = 0;
        	neighbours = vector<graphNode *>();
    	}

    	graphNode(int val)
    	{
        	data = val;
        	neighbours = vector<graphNode *>();
    	}

    	graphNode(int val, vector<graphNode *> neighbours)
    	{
        	data = val;
        	this->neighbours = neighbours;
    	}
	};

******************************************************************************/

#include <bits/stdc++.h>
unordered_map<graphNode *, graphNode *> mp;
graphNode *sol(graphNode *node)
{
    graphNode *nNode = new graphNode(node->data);
    mp[node] = nNode;
    for (auto x : node->neighbours)
    {
        if (mp.find(x) != mp.end())
        {
            nNode->neighbours.push_back(mp[x]);
        }
        else
            nNode->neighbours.push_back(sol(x));
    }
    return nNode;
}
graphNode *cloneGraph(graphNode *node)
{
    mp.clear();
    return sol(node);
}