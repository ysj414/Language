#include<sys/socket.h>


/* ssize_t sendto(int sock, void *buff, size_t nbytes, int flags,
 *      struct sockaddr *to, socklen_t addrlen);
 */

/* ssize_t recvfrom(int sock, void *buff, size_t nbytes, int flags,
 *  	struct sockaddr *from, socklen_t addrlen);
 */
/* 
 * int shutdown(int sock, int howto);
 * howto:
 * SHUT_RD : input stream close
 * SHUT_WR : output stream close
 * SHUT_RDWR: input & output stream close
 */

/* ssize_t send(int sockfd, const void * buf, size_t nbytes, int flags);
 *
 */

/* ssize_t recv(int sockfd, void * buf, size_t nbytes, int flasgs);
 *
 */

/* flags for send & recv
 * 
 * MSG_OOB(both) : Out-of-band data option
 * MSG_PEEK(recv): input buffer receiving option
 * MSG_DONTROUTE(send) : no reffering routing table
 * MSG_DONTWAIT(both) : no blocking
 * MSG_WAITALL(recv) : no return early when all secleted nbytes were received. 
 */



