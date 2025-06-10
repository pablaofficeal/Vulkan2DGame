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
    void init();
    void cleanup();
};

#endif // GAME_H