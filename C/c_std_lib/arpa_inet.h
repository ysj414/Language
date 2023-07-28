#include<arpa/inet.h>

uint32_t htonl(uint32_t hostlong);
uint16_t htons(uint16_t hostshort);
uint32_t ntohl(uint32_t netlong);
uint32_t ntohs(uint32_t netshort);


int inet_aton(const char *op, struct in_addr *inp);
in_addr_t inet_addr(const char *op);
in_addr_t inet_network(const char *op);
char *inet_ntoa(struct in_addr in);
struct in_addr inet_makeaddr(int net, int host);
int inet_pton(int af, const char *restrict src, void *restrict dst);

typedef uint32_t in_addr_t;

struct sockaddr_in
{
  short sin_family;
  u_short sin_port;
  struct in_addr sin_addr;
  char sin_zero[8];
}
struct in_addr
{
	in_addr_t s_addr;
}

/* Description 
 * The htonl() function converts
 * the unsigned integer hostlong
 * from host byte order to network
 * byte order.
 *
 * The htons() function converts the unsigned
 * short integer hostshort from host byte order to
 * network byte order.
 *
 * The ntohl() function converts the unsigned
 * integer netlong from network byte order to host
 * byte order.
 *
 * The ntohs() function converts the unsigned
 * short integer netshort from network byte order
 * to host byte order.
 *
 * n  : network(big endian)
 * to : A -> B switching direction
 * h  : host(little endian)
 * s  : short(2 bytes)
 * l  : long(4 bytes)
 *
 *
 * big    endian 0x12345678 => 12 34 56 78 network communication standard
 * little endian 0x12345678 => 78 56 34 12 PC  
 *
 * inet_aton() converts the Internet host address
 * cp from the IPv4 numbers-and-dots notation
 * into binary form (in network byte order) and
 * stores it in the structure that inp points to.
 * inet_aton() returns nonzero if the address is
 * valid, zero if not. The address supplied in cp can
 * have one of the following forms: a.b.c.d
 * 
 * The inet_addr() function converts the Internet host address cp
 * from IPv4 numbers-and-dots notation into binary data in network byte order.
 * "1.1.1.1" -> u_int32 value (big endian)
 * 
 * The inet_network() function converts cp, a string in IPv4 numbers-and-dots notation,
 * into a number in host byte order suitable for use as an Internet network address.
 * 
 * The inet_ntoa() function converts the Internet host address in,
 * given in network byte order, to a string in IPv4 dotted-decimal notation.
 * u_int32 value (big endian) -> "1.1.1.1"
 * 
 * inet_pton() 
 * This function converts the characters string src into a network address structure in the `af` address family, the copies the network address structure to dst. The 'af' argument must be either AF_INET or AF_INET6. dst is written in network byte order. 
 * example inet_pton(AF_INET, "192.168.197.1", &addr);
 */






