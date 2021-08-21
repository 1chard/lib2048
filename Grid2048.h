#ifndef JFKNCLAJPQTUK_H
#define JFKNCLAJPQTUK_H

class Grid2048 final{
public:
    Grid2048(int xIn=4, int yIn=4);

    Grid2048(const Grid2048&);

    Grid2048(Grid2048&&);

    Grid2048& operator= (const Grid2048&);

    Grid2048& operator= (Grid2048&&);

    ~Grid2048();

    int& operator() (int, int);

    int operator() (int, int) const;

    Grid2048& generateSquare() noexcept;

    int* begin();

    int* end();

    int* begin() const;

    int* end() const;

    void move(int direction) noexcept;

    bool moveRight() noexcept;

    bool moveLeft() noexcept;

    bool moveDown() noexcept;

    bool moveUp() noexcept;

    bool stillPlayable() noexcept;

    bool hasLost() noexcept;

    unsigned int getScore() const;

    const int x, y;

    enum direction{
        LEFT = 1,
        RIGHT,
        UP,
        DOWN
    };

private:
    bool isLegalToMove(direction targetDirection) noexcept;

    unsigned int _score = 0;
    int* _table;
};


#endif
