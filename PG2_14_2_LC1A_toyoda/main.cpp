#include <stdio.h>
#include "Vector2.h"

int main() {

	Vector2 a(4.0f, 8.0f);
	Vector2 b(-2.0f, 3.0f);

	printf("a(x, y): {%4.2f, %4.2f}\n", a.GetX(), a.GetY());
	printf("b(x, y): {%4.2f, %4.2f}\n\n", b.GetX(), b.GetY());

	Vector2 c = a + b;

	printf("a + B = {%4.2f, %4.2f}\n", c.GetX(), c.GetY());

	Vector2 d = a - b;

	printf("a - B = {%4.2f, %4.2f}\n", d.GetX(), d.GetY());

}