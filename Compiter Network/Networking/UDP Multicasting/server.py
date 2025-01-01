import socket
import struct
import time

MULTICAST_GROUP = '224.1.1.1'
PORT = 5004

def send_multicast():
    sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM, socket.IPPROTO_UDP)
    sock.setsockopt(socket.IPPROTO_IP, socket.IP_MULTICAST_TTL, 2)

    message = b"This is a multicast message"
    while True:
        print(f"Sending message: {message.decode()}")
        sock.sendto(message, (MULTICAST_GROUP, PORT))
        time.sleep(2)  # Send a message every 2 seconds

if __name__ == "__main__":
    send_multicast()
