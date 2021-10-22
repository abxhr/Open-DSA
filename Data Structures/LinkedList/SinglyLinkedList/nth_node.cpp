using namespace std;
struct Node {
	int data;
	struct Node* next;
};

/* Function to get nth node from the last*/
void printNthFromLast(struct Node* head, int n)
{
	int len = 0, i;
	struct Node* temp = head;
	while (temp != NULL) {
		temp = temp->next;
		len++;
	}
	if (len < n)
		return;

	temp = head;

	for (i = 1; i < len - n + 1; i++)
		temp = temp->next;

	cout << temp->data;

	return;
}

void push(struct Node** head_ref, int new_data)
{
	/* allocate node */
	struct Node* new_node = new Node();

	/* put in the data */
	new_node->data = new_data;

	/* link the old list off the new node */
	new_node->next = (*head_ref);

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}

int main()
{
	/* Start with the empty list */
	struct Node* head = NULL;

	// create your linklist
	push(&head, 34);
	push(&head, 4);
	push(&head, 7);
	push(&head, 23);

	printNthFromLast(head, 4);
	return 0;
}
