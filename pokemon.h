#ifndef POKEMON_H
#define POKEMON_H

#include <string>
#include <cmath>
#include <list>

enum class element {
    fire = 0, water = 1, grass = 2, normal = 3, dragon = 4
};

struct  PokeEntry { 
	int number;
	char name[20];
	char type[20];
	char description[100];
	PokeEntry() {};
	PokeEnty(int n) {};
};



class Pokemon {
private:
	std::string name;
	int level = 1;
	int id;
	PokeEntry pEntry;	

protected:
	int maxHP = 20;
	int currentHP = maxHP;
	int speed = 10;
	int attack = 10;
	int defense = 10;
	int specialAttack = 10;
	int specialDefense = 10;
	std::list<element> weaknesses;

public:
	Pokemon(int i) {}
	~Pokemon() {}
	std::string get_name() {
		return name;
	}
	int get_level() {
		return level;
	}
	int get_maxHP() {
		return maxHP;
	}
	int get_currentHP() {
		return currentHP;
	}

        string get_species() {
		return this -> pEntry.name;
	}

	int take_damage(int damageAmount, std::list<element> damageTypes);

	friend Pokemon* make_pokemon(element type, std::string name);

};

class Fire: public Pokemon {
public:
	Fire(int index);
};

class Water: public Pokemon {
public:
	Water(int index);
};

class Grass: public Pokemon {
public:
	Grass(int index);
};

class Squirtle: public Water {

    public:
        Squirtle(sting nickname = "Squirtle"){
                  pokemon.name = nickname
	};

	virtual int attack2(Pokemon *pPointer){
	cout << &name << " Tackle " << pPointer &pEntry.name << " took " << pPointer &take_damage(2,list<element> (water)) << " damage!" <<endl;

	};

    protected:

    private:
};

class Wartortle: public Water {

    public:
        Wartortle(sting nickname = "Wartortle"){
                  pokemon.name = nickname
	};
	
	virtual int attack2(Pokemon *pPointer){
	cout << &name << " Surf " << pPointer &pEntry.name << " took " << pPointer &take_damage(4,list<element> (water)) << " damage!" <<endl;

	};


    protected:

    private:
};

class Blastoise: public Water {

    public:
        Blastoise(sting nickname = "Blastoise"){
                  pokemon.name = nickname
	};

	virtual int attack2(Pokemon *pPointer){
	cout << &name << " Hydro Cannon " << pPointer &pEntry.name << " took " << pPointer &take_damage(6,list<element> (water)) << " damage!" <<endl;


	};

    protected:

    private:
};



#endif // POKEMON_H
