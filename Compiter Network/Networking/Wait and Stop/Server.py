import socket
import time

# Server configuration
HOST = '127.0.0.1'
PORT = 65432

# Create a socket object
with socket.socket(socket.AF_INET, socket.SOCK_DGRAM) as server_socket:
    server_socket.bind((HOST, PORT))

    # Listen for incoming connections
    print("Server is listening...")
    while True:
        # Receive data from client
        data, client_address = server_socket.recvfrom(1024)
        print(f"Received message from {client_address}: {data.decode()}")

        # Simulate processing delay
        time.sleep(2)

        # Echo back to the client
        server_socket.sendto(data, client_address)
        print("Echoed message back to the client.")
