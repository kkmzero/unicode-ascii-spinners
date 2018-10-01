#include <stdio.h>
#include <unistd.h>

int id;

void spinner(int num) {
	unsigned int sleepTime = 200000;

	switch(num) {
		case 0:
			while(1) {
				printf("\b\b\b\b\b[ \\ ]");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b\b\b\b\b[ | ]");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b\b\b\b\b[ / ]");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b\b\b\b\b[ - ]");
				fflush(stdout);
				usleep(sleepTime);
				}
			break;

		case 1:
			while(1) {
				printf("\b\\");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b|");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b/");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b-");
				fflush(stdout);
				usleep(sleepTime);
				}
			break;

		case 2:
			while(1) {
				printf("\b\b\b\b\b\b\b\b\b\b\b\b[          ]");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b\b\b\b\b\b\b\b\b\b\b\b[>>        ]");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b\b\b\b\b\b\b\b\b\b\b\b[>>>>>     ]");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b\b\b\b\b\b\b\b\b\b\b\b[>>>>>>>>  ]");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b\b\b\b\b\b\b\b\b\b\b\b[>>>>>>>>>>]");
				fflush(stdout);
				usleep(sleepTime);
				}
			break;

		case 3:
			while(1) {
				printf("\b\b\b\b\b\b\b\b\b\b\b\b(-*--------)");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b\b\b\b\b\b\b\b\b\b\b\b(-----*----)");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b\b\b\b\b\b\b\b\b\b\b\b(---------*)");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b\b\b\b\b\b\b\b\b\b\b\b(--------*-)");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b\b\b\b\b\b\b\b\b\b\b\b(---*------)");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b\b\b\b\b\b\b\b\b\b\b\b(*---------)");
				fflush(stdout);
				usleep(sleepTime);
				}
			break;

		case 4:
			while(1) {
				printf("\b⣾");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b⣽");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b⣻");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b⢿");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b⡿");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b⣟");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b⣯");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b⣷");
				fflush(stdout);
				usleep(sleepTime);
				}
			break;

		case 5:
			while(1) {
				printf("\b⠁");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b⠂");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b⠄");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b⡀");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b⢀");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b⠠");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b⠐");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b⠈");
				fflush(stdout);
				usleep(sleepTime);
				}
			break;

		case 6:
			while(1) {
				printf("\b◐");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b◓");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b◑");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b◒");
				fflush(stdout);
				usleep(sleepTime);;
				}
			break;

		case 7:
			while(1) {
				printf("\b▉");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b▊");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b▋");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b▌");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b▍");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b▏");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b▎");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b▍");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b▋");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b▋");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b▊");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b▉");
				fflush(stdout);
				usleep(sleepTime);
				}
			break;

		case 8:
			while(1) {
				printf("\b┤");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b┘");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b┴");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b└");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b├");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b┌");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b┬");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b┐");
				fflush(stdout);
				usleep(sleepTime);
				}
			break;

		case 9:
			while(1) {
				printf("\b←");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b↖");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b↑");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b↗");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b→");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b↘");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b↓");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b↙");
				fflush(stdout);
				usleep(sleepTime);
				}
			break;

		case 10:
			while(1) {
				printf("\b\b\b\b\b\b\b[LEASE]");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b\b\b\b\b\b\b[EASE ]");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b\b\b\b\b\b\b[ASE W]");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b\b\b\b\b\b\b[SE WA]");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b\b\b\b\b\b\b[E WAI]");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b\b\b\b\b\b\b[ WAIT]");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b\b\b\b\b\b\b[WAIT ]");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b\b\b\b\b\b\b[AIT P]");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b\b\b\b\b\b\b[IT PL]");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b\b\b\b\b\b\b[T PLE]");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b\b\b\b\b\b\b[ PLEA]");
				fflush(stdout);
				usleep(sleepTime);
				printf("\b\b\b\b\b\b\b[PLEAS]");
				fflush(stdout);
				usleep(sleepTime);
				}
			break;
	}

	return;
}

int main()
{
	printf("Enter number to preview spinner type [0 - 10]: ");
	scanf("%d", &id);
	printf("\n");

	spinner(id);

	return 0;
}
