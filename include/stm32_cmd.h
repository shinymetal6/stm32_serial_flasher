int autobaud(int fd);
int send_1byte_wait_ack(int fd, unsigned char byte1);
int send_2bytes_wait_ack(int fd, unsigned char byte1, unsigned char byte2);
int send_3bytes_wait_ack(int fd, unsigned char byte1, unsigned char byte2, unsigned char byte3);
int send_4bytes_wait_ack(int fd, unsigned char byte1, unsigned char byte2, unsigned char byte3, unsigned char byte4);
int get_cmd(int fd);
char *get_device_string(int pid);
int get_pidvid(int fd);
void ack_error(char *caller);
int erase(int fd);
int execute(int fd);
int write_unprotect(int fd);
int flash(int fd);
int device_read(int fd);


