#include <stdio.h>
#include <stdint.h>
	
static uint64_t level;
static int tip, slope, body;

static uint64_t GetHeight(){
	if (level % 2 == 0){
		return (level * body) + ((level / 2) * slope);
	}
	else{
		return ((level * body) + (((level + 1) / 2) * slope) + tip);
    }
}

static void GetInput(){
	scanf("%d %d %d", &tip, &slope, &body);
	scanf("%llu", &level);
}

int main(){
	GetInput();
	printf("%llu\n", GetHeight());
}