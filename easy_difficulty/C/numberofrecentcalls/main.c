#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
	int	vlaue;
	struct RecentCounter *next;
} RecentCounter;


RecentCounter* recentCounterCreate() {
	RecentCounter *counter = (RecentCounter *)malloc(sizeof(RecentCounter));
	return (counter);
}

int recentCounterPing(RecentCounter* obj, int t)
{
	memset(obj, 0, sizeof(RecentCounter));
	obj->vlaue = t;
	obj->next = NULL;
}

void recentCounterFree(RecentCounter* obj) {
	free(obj);
}

/**
 * Your RecentCounter struct will be instantiated and called as such:
 * RecentCounter* obj = recentCounterCreate();
 * int param_1 = recentCounterPing(obj, t);

 * recentCounterFree(obj);
*/

int	main(void)
{
	RecentCounter *obj = recentCounterCreate();
	int	param_1 = recentCounterPing(obj, 20);
	int	param_2 = recentCounterPing(obj, 50);
	printf("param: %d %d\n", obj->vlaue, obj->vlaue);
	recentCounterFree(obj);
}
