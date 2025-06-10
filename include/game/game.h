#ifndef GAME_H
#define GAME_H

class Game {
public:
    Game();
    ~Game();

    void run();
    void update();
    void handleInput();

private:
    // Add private member variables and methods as needed
};

#endif // GAME_H