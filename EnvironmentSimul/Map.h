#pragma once
class Map
{
	int mapArray[5][5];

public:
	void setSquare(int x, int y, int value) {
		mapArray[y][x] = value;
	}
	int getSquare(int x, int y) {
		int val = mapArray[y][x];
		return val;
	}
};

