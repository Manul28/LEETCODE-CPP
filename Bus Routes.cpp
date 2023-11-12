class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        vector<int> dist(1000000, 501);
        dist[source] = 0;
        unordered_set<int> visited;
        int mindist;
        int count = 0;
        while(visited.size() < routes.size() && count < routes.size()) {
            for(int bus = 0; bus < routes.size(); ++bus) {
                if (visited.find(bus) != visited.end()) continue;
                mindist = 501;
                for(auto i : routes[bus]) {
                    mindist = min(mindist, dist[i] + 1);
                }
                for(auto i : routes[bus]) {
                    dist[i] = min(dist[i], mindist);
                }
                if (mindist < 501) {
                    visited.emplace(bus);
                }
            }
            count++;
        }
        if (dist[target] == 501) return -1;
        return dist[target];
    }
};
