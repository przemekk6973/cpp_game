#pragma once

#include <map>
#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Bullet.h"
#include "Enemy.h"

enum class GameState
{
    MENU,
    PLAYING,
    GAME_OVER
};

class Game
{
private:
    // Window
    sf::RenderWindow* window;

    // Resources
    std::map<std::string, sf::Texture*> textures;
    std::vector<Bullet*> bullets;

    // GUI
    sf::Font font;
    sf::Text pointText;
    sf::Text gameOverText;

    // World
    sf::Texture worldBackgroundTex;
    sf::Sprite worldBackground;

    // Systems
    unsigned points;
    int bestScore;

    // Player
    Player* player;

    // Player GUI
    sf::RectangleShape playerHpBar;
    sf::RectangleShape playerHpBarBack;

    // Enemies
    float spawnTimer;
    float spawnTimerMax;
    std::vector<Enemy*> enemies;

    // Game state
    GameState gameState;

    // Private functions
    void initWindow();
    void initTextures();
    void initGUI();
    void initWorld();
    void initSystems();
    void initPlayer();
    void initEnemies();

    void saveBestScore();
    void loadBestScore();

public:
    Game();
    virtual ~Game();

    // Functions
    void run();

    void updatePollEvents();
    void updateInput();
    void updateGUI();
    void updateWorld();
    void updateCollision();
    void updateBullets();
    void updateEnemies();
    void updateCombat();
    void updateMenu();
    void update();

    void renderGUI();
    void renderWorld();
    void renderMenu();
    void render();
};
