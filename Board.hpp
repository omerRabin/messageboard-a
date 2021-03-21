#include <iostream>
using namespace std;
#include "Direction.hpp"
#include <vector>
using ariel::Direction;
namespace ariel {

    class Board {
        uint rows;
        uint cols;
        vector<vector<char>> board; 
    public:
        Board() {
            board = vector<vector<char>>(100 , vector<char> (100, '_')); // initialize 100*100 board
            rows = 100;
            cols = 100;
        }

	// Defines a board with methods
    void post(uint line, uint column, Direction direction , string message);
	string read(uint line, uint column, Direction direction  , uint num_of_char);
    void show();
    };
}
