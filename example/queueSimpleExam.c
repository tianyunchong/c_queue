/**
 * 测试queueSimple的使用
 */
#include <stdio.h>
#include "../queueSimple/queue.h"
#include <string.h>
int main() {
	/** 创建一个队列 */
	Queue * queue = createNewQueue();
	/** ---------------测试使用整型数据入队列 ------------------------------*/
//	/** 开始入一批整型数据 */
//	for (int i = 0;i < 10;i++) {
//		addToQueue(queue, &i, sizeof(i));
//	}
//	/** 开始读取队列 */
//	void * content;
//	while ((content = readFromQueue(queue)) != NULL) {
//		printf("%d\n", *((int *)content));
//	}
	/** ---------------测试使用整型数据入队列 ------------------------------*/
	/** ---------------测试使用字符串入队列 -------------------------------*/
//	char test[][10] = {"ggg", "abc", "ddsd", "efttg"};
//	//开始入数据进入队列
//	for (int i =0;i< 4;i++) {
//		addToQueue(queue, test[i], sizeof(test[i]));
//	}
//	//遍历读取队列 */
//	void * content;
//	while ((content = readFromQueue(queue)) != NULL) {
//		printf("读取队列:%s\n", (char *)content);
//	}
	/** ---------------测试使用字符串入队列 -------------------------------*/
	/** ---------------测试结构体入队列 -----------------------------------*/
	typedef struct _Test {
		int a;
		int b;
		char title[10];
	} Test;
	Test * test = (Test *)malloc(sizeof(Test));
	test->a = 11;
	test->b = 12;
	strcpy(test->title, "测试");
	/** 入下队列 */
	addToQueue(queue, test, sizeof(Test));
	void * tmp;
	//读取下队列
	tmp = readFromQueue(queue);
	Test * cur = (Test *)tmp;
	printf("%d\n", cur->a);
	printf("%d\n", cur->b);
	printf("title:%s\n", cur->title);
	return 1;
}
