#ifndef THREAD_HPP
#define THREAD_HPP
#include <thread>
#include <iostream>
#include <functional>
#include "SFML/Graphics.hpp"
#include "values.hpp"
namespace our {
	extern std::function<void()> msg_pros;
}
#endif //THREAD_HPP