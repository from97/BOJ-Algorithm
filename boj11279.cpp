#include <bits/stdc++.h>
using namespace std;

int idx = 0;

void	swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void	push(int x, int *heap)
{
	heap[++idx] = x;
	int	child = idx;
	int parent = idx / 2;
	while (child > 1 && heap[parent] < heap[child]) {
		swap(&heap[parent], &heap[child]);
		child = parent;
		parent = child / 2;
	}
}

void	remove_max(int *heap)
{
	if (idx == 0 || heap[1] == 0)
	{
		cout << 0 << '\n';
		return ;
	}
	cout << heap[1] << '\n';
	heap[1] = heap[idx];
	heap[idx] = 0;
	idx--;
	int parent = 1;
	int child = parent * 2;
	//오른쪽 자식 노드가 있는 경우
	if (child + 1 <= idx)
		if (heap[child] < heap[child + 1]) child++;
	while (child <= idx)
	{
		if (heap[parent] < heap[child])
		{
			swap(&heap[parent], &heap[child]);
			parent = child;
			child = parent * 2;
			if (child + 1 <= idx)
				if (heap[child] < heap[child + 1]) child++;
		}
		else
			break ;
	}
}

int		main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int	n, x;
	cin >> n;
	int *heap = new int[n];
	for (int i = 0; i < n; i++)
		heap[i] = 0;
	while(n--)
	{
		cin >> x;
		if (x > 0) push(x, heap);
		else if (x == 0)
		{
			remove_max(heap);
		}
	}
}
