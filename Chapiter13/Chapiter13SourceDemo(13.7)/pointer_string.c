#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *words = "My heart is still.";

	words += 9;   // 将指针往后移动9格，现在words[0]为is的i
	puts(words);  // 输入"is still."

	return (0);
}
