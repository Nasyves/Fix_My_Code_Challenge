#!/usr/bin/node
/**
 * 1-print_square.js - Print a square of '#' characters
 * Print a square of '#' characters.
 *
 * The size of the square must be provided as the first command-line argument.
 *
 * Usage: ./1-print_square.js <size>
 * Example: ./1-print_square.js 8
 */

if (process.argv.length <= 2) {
    /* Check if the number of command-line arguments is less than 3 */
    process.stderr.write("Missing argument\n");
    process.stderr.write("Usage: ./1-print_square.js <size>\n");
    process.stderr.write("Example: ./1-print_square.js 8\n");
    process.exit(1); /* Exit the program with an error code*/
}

size = parseInt(process.argv[2], 10);
/* Parse the size from the command-line argument*/

for (let i = 0 ; i < size ; i ++) {
    /* Loop for each row */
    for (let j = 0 ; j < size ; j ++) {
        /* Loop for each column in the row */
        process.stdout.write("#"); /* Print the character '#' */
    }
    process.stdout.write("\n"); /* Move to the next line for the next row*/
}
