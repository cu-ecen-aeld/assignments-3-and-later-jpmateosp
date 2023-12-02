#include <stdio.h>
#include <syslog.h>

int main (int argc, char* argv[]){
	openlog(NULL, 0, LOG_USER);
	if (argc != 3) {
	        syslog(LOG_ERR,"Invalid Number of Arguements %d", argc);
        	return 1;
    	}
	
	char* writefile = argv[1];
	char* writestr = argv[2];

	syslog(LOG_DEBUG, "Writing '%s' to %s", writestr, writefile);

	FILE *file = fopen(writefile, "w");

	if (file == NULL){
		syslog(LOG_ERR, "Unable to open file");
		closelog();
		return 1;
	}

	int x = fputs(writestr, file);

	if (x == EOF){
		syslog(LOG_ERR, "Unable to write the file");
		closelog();
		fclose(file);
		return 1;
	}

	closelog();
	fclose(file);
	return 0;

}
