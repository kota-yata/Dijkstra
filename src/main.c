#include "type.h"
#include "dijkstra.h"
#include <stdio.h>

node node0, node1, node2, node3, node4, node5;

// Representing a graph of case.png with adjancency list
node node0 = {
  0,
  {
    { 5, &node1 },
    { 4, &node2 },
    { 2, &node3 }
  }
};
node node1 = {
  1,
  {
    { 5, &node0 },
    { 2, &node2 },
    { 6, &node5 }
  }
};
node node2 = {
  2,
  {
    { 4, &node0 },
    { 2, &node1 },
    { 3, &node3 },
    { 2, &node4 }
  }
};
node node3 = {
  3,
  {
    { 2, &node0 },
    { 3, &node2 },
    { 6, &node4 }
  }
};
node node4 = {
  4,
  {
    { 2, &node2 },
    { 6, &node3 },
    { 4, &node5 }
  }
};
node node5 = {
  5,
  {
    { 6, &node5 },
    { 4, &node4 }
  }
};

graph case01 = {
  6,
  { &node0, &node1, &node2, &node3, &node4, &node5 }
};

int main() {
  int answer = dijkstra(case01);
  return answer;
}
