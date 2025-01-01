import socket

# Server configuration
HOST = '127.0.0.1'
PORT = 65432

# Create a socket object
with socket.socket(socket.AF_INET, socket.SOCK_DGRAM) as client_socket:
    # Send message to server
    message = "Hello, server!"
    client_socket.sendto(message.encode(), (HOST, PORT))
    print(f"Sent message to server: {message}")

    # Receive response from server
    response, server_address = client_socket.recvfrom(1024)
    print(f"Received response from server: {response.decode()}")
