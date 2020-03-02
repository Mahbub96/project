//Console Snake game using c++ only
#include<iostream>
#include<conio.h>

bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fruteX, fruteY, score;
enum direction { STOP = 0, LEFT, RIGHT, UP, DOWN };
direction dir;


using namespace std;

void setup() {
	gameOver = false;
	dir = STOP;
	x = width / 2;
	y = height / 2;
	fruteX = rand() % width;
	fruteY = rand() % height;
	score = 0;
}
void draw() {
	system("cls");
	for (int i = 0; i < width + 2; i++) cout << "#";
	cout << endl;

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {

			if (j == 0) cout << "#";

			if (x == i && y == j) cout << "O";
			else if (i == fruteX && j == fruteY) cout << "F";
			else cout << " ";

			if (j == width - 1) cout << "#";
		}
		cout << endl;
	}

	for (int i = 0; i < width + 2; i++) cout << "#";
	cout << endl;

	cout << " \t Score : " << score << endl;

}
void input() {
	if (_kbhit()) {
		switch (_getch()) {
		case 'a':
			dir = LEFT;
			break;
		case 'd':
			dir = RIGHT;
			break;
		case 'w':
			dir = UP;
			break;
		case 's':
			dir = DOWN;
			break;
		case 'x':
			gameOver = true;
		}
	}
}
void logic() {
	switch (dir) {
	case LEFT:
		y--;
		break;
	case RIGHT:
		y++;
		break;
	case UP:
		x--;
		break;
	case DOWN:
		x++;
		break;
	default:
		break;

	}

	if (x > width || x < 0 || y > height || y < 0)
		gameOver = true;
	if (x == fruteX && y == fruteY) {
		score += 10;

		fruteX = rand() % width;
		fruteY = rand() % height;

	}
}


int main() {

	setup();
	while (!gameOver) {
		draw();
		input();
		logic();
	}

	return 0;
}
