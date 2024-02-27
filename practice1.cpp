#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct ListNode {
	int val;
	struct ListNode* next;
};

struct ListNode* createList() {
	int val;
	struct ListNode* head = NULL;
	struct ListNode* tail = NULL;
	while (1) {
		scanf("%d", &val);
		if (val == -1) {
			break;
		}
		struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
		newNode->val = val;
		newNode->next = NULL;

		if (head == NULL) {
			head = newNode;
			tail = newNode;
		}
		else {
			tail->next = newNode;
			tail = newNode;
		}
	}
	return head;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
	struct ListNode* p;
	struct ListNode* q;
	p=l1;
    q=l2;
	int sum1=0,sum2=0,sum3=0;
	int l1_num= 0, l2_num= 0;
	int count1 = 0,count2 = 0;
	while (p!= NULL)
	{
		sum1+=p->val* (int)pow(10,count1);
		count1++;
		p = p->next;
	}
	while (q!= NULL)
	{
		sum2 += q->val * (int)pow(10,count2);
		count2++;
		q= q->next;
	}
	sum3 = sum1 + sum2;
	struct ListNode* head = NULL;
	struct ListNode* tail = NULL;
	while (sum3>0) {
		struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
		newNode->val = sum3%10;
		newNode->next = NULL;
		if (head == NULL) {
			head = newNode;
			tail = newNode;
		}
		else {
			tail->next = newNode;
			tail = newNode;
		}
		sum3 = sum3 / 10;
	}
	return head;
}
void printList(struct ListNode* head) {
	struct ListNode* current = head;
	while (current != NULL) {
		printf("%d ", current->val);
		current = current->next;
	}
	printf("\n");
}
int main(void) {
	printf("Enter Single linked L1\n");
	struct ListNode* head1 = createList();
	printf("Enter Single linked L2\n");
	struct ListNode* head2 = createList();
	printList(addTwoNumbers(head1, head2));
	system("PAUSE");
	return(0);
}
