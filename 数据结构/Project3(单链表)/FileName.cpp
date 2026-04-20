#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef int ElemType;

//声明一个结构体（节点），包含数据域和指针域，节点连在一起就是链表
typedef struct node {
	ElemType data;
	struct node* next;
}Node;

//单链表初始化
Node* initList() {
	Node* head = (Node*)malloc(sizeof(Node));
	head->data = 0;
	head->next = NULL;
	return head;//返回头节点地址
}

//单链表头插法：开辟新空间创建一个新节点，这个节点指向next和头节点一样，再把头节点指向新节点（头节点一直是头节点）
void insertHead(Node* L, ElemType e) {
	Node* p = (Node*)malloc(sizeof(Node));//开辟一个新节点空间
	p->data = e;
	p->next = L->next;//新节点下一个指向原来头节点的下一个，现在头节点和p指向同一个next
	L->next = p;//头节点的下一个指向p，现在头节点指p
}

//单链表遍历：头节点->20->10（因为头插法是先插10再插20，所以打印出来顺序是20->10）
void listNode(Node *L) {
	Node* p = L->next;
	while (p != NULL) {
		printf("%d\n", p->data);
		p = p->next;
	}
	printf("\n");
}

//遍历获取尾节点地址
Node* get_tail(Node* L) {
	Node* p = L;//因为要返回最后一个节点的信息，所以要创建一个p让L赋值（L传的是地址，用L本身遍历就会把原来的链表改变了)
	while (p->next != NULL) {
		p = p->next;
	}
	return p;
}

//尾插法：传入尾节点和插入的数据
Node * insertTail(Node* tail, ElemType e) {
	Node* p = (Node*)malloc(sizeof(Node));
	p->data = e;//给p传入数据
	tail->next = p;//尾节点指向p
	p->next = NULL;//p指向空
	return p;//返回新的尾节点
	}

//单链表，在指定位置插入数据:需要传入链表L，指定位置pos，数据e
int insertNode(Node* L, int pos, ElemType e) {
	Node* p = L;//指针传入，不能直接使用，会改变原来的值
	//遍历获取pos前的尾节点地址
	int i = 0;
	while (i < pos - 1) {
		p = p->next;
		i++;
		if (p == NULL) {
			printf("插入位置错误！\n");
			return 0;//p为空时链表已经到头
		}
	}
	//当成一个尾插法
	Node* q = (Node*)malloc(sizeof(Node));
	q->data = e;
	q->next = p->next;
	p->next = q;
	return 1;
}

//单链表—删除指定位置的节点:找到删除前的前置节点p，指针q记录要删除的节点（用来释放内存空间),把p指向下下个
int deleteNode(Node* L, int pos) {
	Node* p = L;
	int i = 0;
	while (i < pos - 1) {
		p = p->next;
		i++;
		if (p == NULL) {
			printf("删除位置错误！\n");
			return 0;//p为空时链表已经到头
		}

	}
	if (p->next == NULL) {
		printf("删除位置错误！\n");
		return 0;//此时链表已经到头
	}
	Node* q = p->next;
	p->next = q->next;
	free(q);
	return 1;
}

//单链表-获取链表长度
int listLength(Node* L) {
	int len=0;
	Node* p = L;
	while (p->next != NULL) {
		p = p->next;
		len++;
	}
	return len;
}

//单链表-释放链表（把头节点以后的所有节点内存释放）
void freelist(Node* L) {
	Node* p = L->next;
	Node* q;
	while (p != NULL) {
		q = p->next;
		free(p);
		p = q;
	}
	L->next = NULL;
}

int main() {

	Node* list = initList();
	insertHead(list, 10);
	insertHead(list, 20);
	listNode(list);//遍历

	Node* tail = get_tail(list);//获取尾节点
	tail = insertTail(tail, 50);
	tail = insertTail(tail, 60);
	tail = insertTail(tail, 70);//用尾插法插入数据，并更新尾节点
	listNode(list);//遍历

	insertNode(list, 3, 25);
	listNode(list);//遍历

	deleteNode(list, 3);
	listNode(list);//遍历

	int len = listLength(list);
	printf("%d\n",len);

	listNode(list);//遍历

	freelist(list);
	listNode(list);//遍历
	len = listLength(list);
	printf("%d\n", len);

	return 0;
}