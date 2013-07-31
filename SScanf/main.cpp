
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(int argc, char *argv[]) 
{
	//char protocol[50];
	//char host[2000];
	//char path[2000];

	//char buffer[1024];

	//if (argc < 2) {
	//	fprintf(stderr, "usage: %s url\n", argv[0]);
	//	exit(1);
	//}   

	//strncpy(buffer, argv[1], sizeof(buffer));
	//printf("buffer=<%s>\n", buffer);

	//if(sscanf(buffer,"%50[^:/]://%2000[^/]/%s", protocol, host, path) == 3) {
	//	printf ("protocol=<%s>, host=<%s>, path=<%s>\n", protocol, host, path);
	//}   
	//else if (errno != 0) {
	//	perror("scanf");
	//} else {
	//	fprintf(stderr, "No matching characters\n");
	//}   

	int m, d;
	char tmp[ 32];
	char buffer[] = "07-07(¿ù) 10:10";
	sscanf(buffer,"%d-%d%5[^)]", &m, &d, tmp );

		//printf ("protocol=<%s>, host=<%s>, path=<%s>\n", protocol, host, path);

	return 0;
}
