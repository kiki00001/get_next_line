# 💡 get_next_line

## About the project
> 이 프로젝트는 파일 디스크립터로부터 읽혀진, 개행으로 끝나는 한 줄을 반환하는 함수를 코드화 한 것 입니다.
The aim of this project is to make you code a function that returns a line, read from a file descriptor.

## Mandatory part
- Calling your function get_next_line in a loop will then allow you to read the text available on the file descriptor one line at a time until the end of it. 

- Your function should return the line that has just been read. If there is nothing else to read or if an error has occurred it should return NULL.

- Make sure that your function behaves well when it reads from a file and when it reads from the standard input.  

- libft is not allowed for this project. You must add a get_next_line_utils.c file which will contain the functions that are needed for your get_next_line to work. 

- Your program must compile with the flag -D BUFFER_SIZE=xx which will be used as the buffer size for the read calls in your get_next_line. This value will be modified by your evaluators and by the moulinette. 

- The program will be compiled in this way: gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 <files>.c.  

- Your read must use the BUFFER_SIZE defined during compilation to read from a file or from stdin. This value will be modified during the evaluation for testing purposes. 

- In the header file get_next_line.h you must have at least the prototype of the function get_next_line. 

- lseek is not an allowed function. File reading must be done only once.   - We consider that get_next_line has undefined behavior if, between two calls, the same file descriptor switches to a different file before reading everything from the first fd.  - Finally we consider that get_next_line has undefined behavior when reading from a binary file. However, if you wish, you can make this behavior coherent.  

- Global variables are forbidden.  

- Important: The returned line should include the ’\n’, except if you have reached the end of file and there is no ’\n’..
