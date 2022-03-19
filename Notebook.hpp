#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include <stdlib.h>
#include "Direction.hpp"
using namespace std;

namespace ariel {
    class Notebook { 
        private :
            vector<vector<char>> notebook;    
        public:
            void write (unsigned int page, unsigned int column, unsigned int row, Direction direction, string text);
            string read (unsigned int page, unsigned int column, unsigned int row, Direction direction, unsigned int numOfChar);
            void erase (unsigned int page, unsigned int column, unsigned int row, Direction direction, unsigned int numOfChar);
            void show (unsigned int page);                      
    };
}