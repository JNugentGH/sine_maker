# Sine Maker
Generates a C style array of a sine wave for use as a look up table.
input arguments when the compiled program are run are the length of the array and options for positive only or half an array.
The sine wave is from -255 to 255 for use in a LED brightness program.

## Examples
Compiled as generate_sine.exe.

gcc sine_any.c -o generate_sine

generate_sine.exe 256 +

Generates the mod of a sine wave with 256 values.


generate_sine.exe 32 h

Prints an array that is half a sine wave and the rest are zeros.
