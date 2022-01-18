// Copyright 2022, Sean Carroll
// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the "Software"),
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following conditions:
// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
// IN THE SOFTWARE.
/*
blink.c
*
Created: 1/15/2022 4:38:16 PM
Author : carrolls@trine.edu
*/

// HARDWARE = One LED on any pin of PB0 to PB5 w/ cathode to ground.

#include <avr/io.h>
#include <avr/power.h>


int main(void)
{
	clock_prescale_set(clock_div_1);   // 16 MHz
	DDRB = 0xFF; // Make B7 to B0 output pins

	while (1){
		PORTB = ~PORTB; // Complement every bit
		for (volatile uint32_t n = 0; n < 48000; n++){}
	}
}


