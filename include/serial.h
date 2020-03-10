#define BAUDRATE        B57600
#define MODEMDEVICE     "/dev/ttyUSB0"

int serial_port_init(int fd);
void close_serial_port(int fd);
