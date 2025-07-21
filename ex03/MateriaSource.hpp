#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "./IMateriaSource.hpp"
#include <string>

class AMateria;

class MateriaSource: public IMateriaSource {

	private:
		AMateria* _materias[4];
		int _count;
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& other);
		MateriaSource& operator=(const MateriaSource& other);
		~MateriaSource();

		void learnMateria(AMateria* materia);
		AMateria* createMateria(const std::string& type);
};

#endif // !#ifndef MATERIASOURCE_HPP
