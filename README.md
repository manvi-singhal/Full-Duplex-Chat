# Full Duplex Chat using TCP/IP

This is a simple full duplex chat application implemented in C using TCP/IP sockets. It consists of two components: a server and a client. The server listens for incoming connections from clients and relays messages between connected clients in real-time.

## Folder Structure


- src/
  - server.c
  - client.c


## Server

### How to Use

1. Compile the server source code using a C compiler.

   bash
   gcc src/server.c -o server
   

2. Run the server.

   bash
   ./server
   

3. The server will start listening on port 5500 by default. You can change the port by editing the server.c file.

### Server Code Explanation

The server listens for incoming connections and forks a new process for each connected client. It uses the socket(), bind(), and listen() functions to set up the server socket, and accept() to accept incoming client connections. Messages received from clients are displayed on the server's terminal.

## Client

### How to Use

1. Compile the client source code using a C compiler.

   bash
   gcc src/client.c -o client
   

2. Run the client.

   bash
   ./client
   

3. The client will connect to the server at IP address 127.0.0.1 (localhost) and port 5500 by default. You can modify the server address and port by editing the client.c file.

### Client Code Explanation

The client connects to the server using the socket() and connect() functions. It also forks a new process for sending and receiving messages. Messages typed in the client's terminal are sent to the server, and messages received from the server are displayed on the client's terminal.

## Communication

- To send a message, simply type your message in the client terminal and press Enter. The message will be sent to the server and relayed to all connected clients.
- Messages received from other clients connected to the server will be displayed in the client's terminal in real-time.

## Configuration

You can configure the server's port by editing the src/server.c file and the server address and port in the src/client.c file.

## Dependencies

This project does not have any external dependencies beyond the standard C libraries.

## Contributing

Feel free to contribute to this project by submitting pull requests or reporting issues. We welcome any improvements or bug fixes.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
