To start a game, a *Grid2048* class must be created:

```c++
Grid2048 grid;
```

It will create a 4x4 grid with their values initialized to zero (0).

All methods and attributes are listed below

Methods|Usage|Since
-------|-----|-----
Grid2048::Grid2048()				|Create a grid with 4 of width and 4 of height				|0.1
Grid2048::Grid2048(int x, int y)		|Create a grid with x of width and y of height				|0.1
Grid2048::Grid2048(const Grid2048& grid)	|Create a copy of grid							|0.1
Grid2048::~Grid2048()				|Deallocate memory and delete itself					|0.1
Grid2048& operator= (const Grid2048& grid)	|Copy a grid if it has an equal or smaller size, then return *this	|0.1
int* begin()					|Returns a pointer to grid's base array, useful on forEach loop		|0.1
const int* begin() const			|Returns a const pointer to grid's base array, useful on forEach loop	|0.1
int* end()					|Returns a pointer to first element after grid's base array, useful on forEach loop|0.1
const int* end() const				|Returns a const pointer to first element after grid's base array, useful on forEach loop|0.1
int& operator() (int x, int y)			|Returns a reference of grid at x, y					|0.1
int operator() (int x, int y) const		|Returns the value of grid at x, y					|0.1
Grid2048& generateSquare()			|Insert 2 (99%) or 4 (1%) on grid if possible, else throw an assert. Always check if there is a legal move before calling this|0.1
bool stillPlayable()				|Returns true if there are legal moves					|0.1
bool hasLost()					|Returns true if there are not legal moves				|0.1
void move(int direction)			|Proper interface to move methods, it tries to move at one direction and if it succeeded, calls generateSquare(). Use class enumerator as argument to this method|0.1
bool moveLeft()					|Tries to move left, return true if it moves anything on grid (use move(Grid2048::LEFT) whenever possible)|0.1
bool moveRight()				|Tries to move right, return true if it moves anything on grid (use move(Grid2048::RIGHT) whenever possible)|0.1
bool moveUp()					|Tries to move up, return true if it moves anything on grid (use move(Grid2048::UP) whenever possible)|0.1
bool moveDown()					|Tries to move down, return true if it moves anything on grid (use move(Grid2048::DOWN) whenever possible)|0.1
unsigned int score()				|Returns the score of every sum made at this grid|0.1

Attributes|Usage|Since
----------|-----|-----
const int x	|The width of grid|0.1
const int y	|The height of grid|0.1

Enumerators|Usage|Since
-----------|-----|-----
LEFT		|Instruction to move left|0.1
RIGHT		|Instruction to move right|0.1
UP		|Instruction to move up|0.1
DOWN		|Instruction to move down|0.1
