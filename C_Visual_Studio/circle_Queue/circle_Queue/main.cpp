#include <stdio.h>

int main() {
	int re;
	init_queue();

	put(10);
	put(20);
	put(30);
	put(40);
	put(50);
	print_queue();
	re = get();
	re = get();
	re = get();
	print_queue();
	put(60);
	print_queue();

	return 0;
}