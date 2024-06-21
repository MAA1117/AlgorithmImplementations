//euler16
/*
Find the sum of the digits of the number 2^1000
*/

#include <iostream>
#include <gmp.h>
#include "hfiles/timer.h"

int main()
{
    Timer tr;
    mpz_t num;
    mpz_init(num);
    mpz_ui_pow_ui(num, 2, 1000);
    gmp_printf("%Zd\n", num);

    char* numStr = mpz_get_str(nullptr, 10, num);
    int sum = 0;
    for (int i = 0; numStr[i] != '\0'; ++i)
    {
        sum += numStr[i] - '0';
    }

    std::cout << "\nSum of digits: " << sum << std::endl;
    free(numStr);
    mpz_clear(num);
}

/*
NOTES
*****
sum += numStr[i] - '0'; is a concise way of saying "convert the current
character digit to an integer and add it to the sum." This line is
typically used in a loop to iterate over each character of a numeric
string and calculate the sum of its digits.

In C++ and other C-like languages, character literals like '0', '1', etc.,
are internally represented by their ASCII values. The ASCII value of '0'
is 48, '1' is 49, and so on up to '9' which is 57.

When you subtract '0' from numStr[i], you're actually subtracting the
ASCII value of '0' from the ASCII value of the digit character in
numStr[i]. This operation effectively converts the character
representation of the digit to its integer value. For example, if
numStr[i] is the character '3', the ASCII value of '3' (51) minus the
ASCII value of '0' (48) results in the integer 3.

[Out]
10715086071862673209484250490600018105614048117055336074437503883703510
51124936122493198378815695858127594672917553146825187145285692314043598
45775746985748039345677748242309854210746050623711418779541821530464749
83581941267398767559165543946077062914571196477686542167660429831652624
386837205668069376
(303 digits)

Sum of digits: 1366

[427us (0.427ms)]
*/
