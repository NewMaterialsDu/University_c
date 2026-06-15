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

	//把自己和自己的距离设置为0，其他的距离设置为MAX
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

	//一个个手动添加边和权重
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

	G->arc[6][7] = 2;
	G->arc[6][8] = 7;

	G->arc[7][8] = 4;

	//无向图，所以对称位置也要设置
	for (int i = 0; i < G->vertex_num; i++) {
		for (int j = i; j < G->vertex_num; j++) {
			G->arc[j][i] = G->arc[i][j];
		}
	}

}

void floyd(Mat_Graph G) {
	int path[MAXSIZE][MAXSIZE];
	int distance[MAXSIZE][MAXSIZE];
	for (int i = 0; i < G.vertex_num; i++) {
		for (int j = 0; j < G.vertex_num; j++) {
			distance[i][j] = G.arc[i][j];
			path[i][j] = j;
		}
	}

	//
}



int main() {






	system("pause");
	return 0;
}