#include "main.h"

void cleanup(va_list args, buffer_t *output);
int run_printf(const char *format, va_list args, buffer_t *output);
int _printf(const char *format, ...);

/**
 * cleanup - Performs cleanup for _printf
 * @args: a va_list of arguments to _printf
 * @output: A buffer_t struct
 * cleanup - PErforms cleanup operations for _printf,
 * @args: A va_list of arguments provided to _printf,
 * @output: A buffer_t struct.
 * _printf - a function that produces output according to a format
 */

void cleanup(va_list args, buffer_t *output)
{
	va_end(args);
	write(1, output->start, output->len);
	free_buffer(output);
}

/**
 * run_printf - Reads through the format string for _printf
 * @format: Character string to print - may contain directives
 * @output: A buffer_t struct containing a buffer
 * @args: A va_list of arguments
 * run_printf - Reads through the format string for _printf.
 * @format: Character string to print - may contain directives.
 * @output: A buffer_t struct containing a buffer.
 * @args: A va_list of arguments.
 *
 * Return: The number of characters stored to output
 */

int run_printf(const char *format, va_list args, buffer_t *output)
{
	int i, wid, prec, ret = 0;

	return (ret);
}


/**
 * _primtf - a function that produces output according to a format
 *  _printf _ Outputs a formatted string
 * @format: character string to print - may contain directives
 *
 * Return: The number of characters printed.
 */

int _printf(cons char *format, ....)
{
	buffer_t *output;
	vs_list args;
	int ret;

	if (format == NULL)
		return (-1);
	output = init_buffer();
	if (output == NULL)
		return (-1);

	va_start(args, format);

	ret = run_printf(format, args, output);

	return (ret);
}
