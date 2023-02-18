#pragma once
class Vector2
{

public:
	// コンストラクタ
	Vector2(float x = 0.0f, float y = 0.0f) { this->x = x, this->y = y;}

	float GetX() { return x; }
	float GetY() { return y; }

	Vector2 operator+(const Vector2 &obj) {
		Vector2 sc;
		sc.x = this->x + obj.x;
		sc.y = this->y + obj.y;
		return sc;
	}

	Vector2 operator-(const Vector2 &obj) {
		Vector2 sc;
		sc.x = this->x - obj.x;
		sc.y = this->y - obj.y;
		return sc;
	}

private:

	float x;
	float y;

};

