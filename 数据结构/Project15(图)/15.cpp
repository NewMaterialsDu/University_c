#include<stdio.h>
#include<stdlib.h>
#include<iostream>

//邻接矩阵表视图
typedef char VertexType;
typedef int EdgeType;

#define MAXSIZE 100

typedef struct {
	VertexType vertex[MAXSIZE];
	EdgeType arr[MAXSIZE][MAXSIZE];
	int vertex_num;
	int edge_num;
}Mat_Grph;

int visited[MAXSIZE];

void create_graph(Mat_Grph* G) {
	G->vertex_num = 9;
	G->edge_num = 15;
	G->vertex[0] = 'A';
	G->vertex[1] = 'B';
	G->vertex[2] = 'C';
	G->vertex[3] = 'D';
	G->vertex[4] = 'E';
	G->vertex[5] = 'F';
	G->vertex[6] = 'G';
	G->vertex[7] = 'H';

}

int main() {
	




	system("pause");
	return 0;
}