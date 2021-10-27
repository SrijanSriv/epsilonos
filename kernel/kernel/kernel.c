#include <stdio.h>
#include <kernel/tty.h>

void kernel_main(void) {
	terminal_initialize();
	// printf("  @@@@@@\n @@@@@@@@\n@@\n@@\n@@@@@@\n@@@@@@\n@@\n@@\n @@@@@@@@\n  @@@@@@\n\nEpsilonOS");
	printf("1\n2\n3\n4\n5\n6\n7\n8\n9\n10\n11\n12\n13\n14\n15\n16\n17\n18\n19\n20\n21\n22\n");
	printf("23\n24\n25<-This is the limit if the screen height, the nex line would jump to top without the scroll fn but it scrolls 1 up!\n26\n27\n");

}