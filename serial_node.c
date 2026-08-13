#include <stdio.h>

int send_serial_data(int baud, char* buffer) {
    if (baud < 9600) {
        return -1;
    }
    printf("Sending: %s at %d\n", buffer, baud);
    return 0;
}
