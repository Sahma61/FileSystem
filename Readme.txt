Steps to run the code:
1. compile "run.c" using "gcc run.c".
2. On successful compilation, an 'a.out' file is created, which is to be run. Execute "./a.out".
3. On successful execution, FILE SYSTEM is mounted in a directory called "xyzFS". This directory is located in the current directory.

4. Now, in order to test the FILE SYSTEM, compile 'test.c' using 'gcc test.c'.
5. Run test using './a.out'.
6. The newfiles are created in the 'xyzFS' directory.

Description of test.c

'test.c' creates a file 'mytext1.txt', opens it and write 5 characters, 'hello'.
Then, the file is closed.
The file is again opened for reading.
The read data is stored in a buffer "out".
Finally, the file is closed and the contents of "out" is printed on the screen, in this case 'hello'.

Similar Tests can be written for testing the 'xyz File System'.
