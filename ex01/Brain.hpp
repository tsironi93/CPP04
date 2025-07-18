#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain {

	private:
		std::string ideas[100];

	public:
		Brain();
		Brain(std::string ideas);
		Brain(const Brain &other);
		Brain &operator=(const Brain &other);
		~Brain();

		void PrintIdeas() const;
		void setIdias(std::string &newIdea);
		void PrintOneIdea(int index) const;
		void setOneIdea(int index, const std::string &idea);
};

#endif // !#ifndef BRAIN_HPP
