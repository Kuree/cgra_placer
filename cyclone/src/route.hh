#ifndef CYCLONE_ROUTE_HH
#define CYCLONE_ROUTE_HH

#include "graph.hh"
#include "net.hh"

// base class for global and detailed routers
// implement basic routing algorithms and IO handling
class Router {
public:
    Router() = default;

    // wrapper functions
    void add_net(const std::vector<std::pair<std::pair<uint32_t, uint32_t>,
                 std::string>> &net);
    void add_edge(const Node &node1, const Node &node2)
    { graph_.add_edge(node1, node2); }

protected:
    RoutingGraph graph_;
    std::vector<Net> netlist_;
};

#endif //CYCLONE_ROUTE_HH