/**
 * 测试queueSimple的使用
 */
#include <stdio.h>
#include "../queueSimple/queue.h"
int main() {
	/** 创建一个队列 */
	Queue * queue = createNewQueue();
	/** ---------------测试使用整型数据入队列 ------------------------------*/
//	/** 开始入一批整型数据 */
//	for (int i = 0;i < 10;i++) {
//		addToQueue(queue, &i, sizeof(i)/sizeof(int));
//	}
//	/** 开始读取队列 */
//	void * content;
//	while ((content = readFromQueue(queue)) != NULL) {
//		printf("%d\n", *((int *)content));
//	}
	/** ---------------测试使用整型数据入队列 ------------------------------*/
	/** ---------------测试使用字符串入队列 -------------------------------*/
	char test[][10] = {"ggg", "abc", "ddsd", "efttg"};
	//开始入数据进入队列
	for (int i =0;i< 4;i++) {
		addToQueue(queue, test[i], sizeof(test[i])/sizeof(char));
	}
	//遍历读取队列 */
	void * content;
	while ((content = readFromQueue(queue)) != NULL) {
		printf("读取队列:%s\n", (char *)content);
	}
	/** ---------------测试使用字符串入队列 -------------------------------*/
	return 1;
}
