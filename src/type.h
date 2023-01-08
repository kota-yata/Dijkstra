#ifndef INCLUDED_type_h_
#define INCLUDED_type_h_

struct _adjacentNode;

typedef struct _node {
  int vertex;
  struct _adjacentNode ans[];
} node;

struct _adjacentNode {
  int distance;
  node* node;
};

typedef struct _adjacentNode adjacentNode;

typedef struct _graph {
  int numOfNodes;
  node* adjacentList[];
} graph;

#endif
