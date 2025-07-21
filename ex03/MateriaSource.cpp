#include "./MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource() : _count(0) {
	for (int i = 0; i < 4; ++i) {
		_materias[i] = nullptr;
	}
}

MateriaSource::MateriaSource(const MateriaSource& other) : _count(other._count) {
	for (int i = 0; i < 4; ++i) {
		if (other._materias[i]) {
			_materias[i] = other._materias[i]->clone();
		} else {
			_materias[i] = nullptr;
		}
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
	if (this != &other) {
		for (int i = 0; i < 4; ++i) {
			delete _materias[i];
			if (other._materias[i]) {
				_materias[i] = other._materias[i]->clone();
			} else {
				_materias[i] = nullptr;
			}
		}
		_count = other._count;
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; ++i) {
		delete _materias[i];
	}
}

void MateriaSource::learnMateria(AMateria* materia) {
	if (_count < 4 && materia) {
		for (int i = 0; i < 4; ++i) {
			if (!_materias[i]) {
				_materias[i] = materia;
				++_count;
				return;
			}
		}
	}
	delete materia; // Clean up if not stored
}

AMateria* MateriaSource::createMateria(const std::string& type) {
	for (int i = 0; i < 4; ++i) {
		if (_materias[i] && _materias[i]->getType() == type) {
			return _materias[i]->clone();
		}
	}
	return nullptr; // Return nullptr if no matching materia found
}
