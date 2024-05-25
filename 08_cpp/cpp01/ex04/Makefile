CXX = g++
CXXFLAGS = -std=c++98 -Wall -Werror -Wextra
TARGET = sed42

all: $(TARGET)

$(TARGET): *.cpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) *.cpp

clean:
	rm -f $(TARGET) *.o

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re
