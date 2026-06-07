#include<stdio.h>
#include<stdlib.h>
#include<iostream>

//最短路径

typedef int VertexType;
typedef int EdgeType;
#define MAXSIZE 100
#define MAXEDGE 200
#define MAX 0x10000

typedef struct {
	VertexType vertex[MAXSIZE];
	EdgeType arc[MAXSIZE][MAXSIZE];
	int vertex_num;
	int edge_num;
}Mat_Graph;

void createGraph(Mat_Graph* G) {
	G->vertex_num = 9;
	G->edge_num = 16;
	
	//这里保存的是0-8，没有字母（为了方便）
	for (int i = 0; i < G->vertex_num; i++) {
		G->vertex[i] = i;
	}

	for (int i = 0; i < G->vertex_num; i++) {
		for (int j = 0; j < G->vertex_num; j++) {
			if (i == j) {
				G->arc[i][j] = 0;
			}
			else {
				G->arc[i][j] = MAX;
			}
		}
	}

	G->arc[0][1] = 1;
	G->arc[0][2] = 5;

	G->arc[1][2] = 3;
	G->arc[1][3] = 7;
	G->arc[1][4] = 5;

	G->arc[2][4] = 1;
	G->arc[2][5] = 7;

	G->arc[3][4] = 2;
	G->arc[3][6] = 3;

	G->arc[4][5] = 3;
	G->arc[4][6] = 6;
	G->arc[4][7] = 9;

	G->arc[5][7] = 5;

}

//返回下一次要观察哪个顶点
int choose(int distance[], int found[], int vertex_num) {
	int min = MAX;
	int minPos = -1;
	for (int i = 0; i < vertex_num; i++) {
		if (distance[i] < min && found[i] == 0) {
			min = distance[i];
			minPos = i;
		}
	}
	return minPos;
}

//迪杰斯特拉（Dijkstra）
void dijkstra(Mat_Graph G,int begin) {
	int found[MAXSIZE];//顶点是否已经走过
	int path[MAXSIZE];//路径
	int distance[MAXSIZE];//顶点之间连接的距离
	for (int i = 0; i < G.vertex_num; i++) {
		found[i] = 0;
		path[i] = -1;
		distance[i] = G.vertex_num;
	}
}

int main() {
	Mat_Graph G;
	createGraph(&G);
	int begin = 0;
	dijkstra(G, begin);


	system("pause");
	return 0;
}