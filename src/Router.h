#ifndef ROUTER_H
#define ROUTER_H

#include <list>
#include <stack>
#include <queue>
#include "DirectedEdge.h"
#include "Packet.h"


class Router
{
    int ip;
    int terminales;

    std::queue<Packet> buffer;
    std::stack<DirectedEdge> *routeTable;

public:
    std::list<DirectedEdge> adj;

    void setIp(int ip) { this->ip = ip; };
    void setRouteTable(int v);
};

void Router::setRouteTable(int v)
{
    routeTable = new std::stack<DirectedEdge>[v];
}



#endif