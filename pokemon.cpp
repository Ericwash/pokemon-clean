#include "pokemon.h"

Fire::Fire(int index) : Pokemon(index){
	maxHP+=1; speed+=2;
	attack+=2; defense-=2;
	specialAttack+=4; specialDefense+=1;
	weaknesses.push_back(element::water);
}

Water::Water(int index) : Pokemon(index){
	maxHP+=2; speed-=1;
	attack-=2; defense+=2;
	specialAttack-=4; specialDefense-=1;
	weaknesses.push_back(element::grass);
	virtual int attack1(Pokemon *pPointer){

	};
	
}

Grass::Grass(int index) : Pokemon(index){
	maxHP-=3; speed-=2;
	attack-=2; defense+=0;
	specialAttack-=3; specialDefense+=0;
	weaknesses.push_back(element::fire);
}

Squirtle::Squartle() : Water(7){
	public:
	int attack1(Pokemon *pPointer){
	cout << &name << " used bubble " << pPointer &pEntry.name << " took " << pPointer &take_damage(2,list<element> (water)) << " damage!" <<endl;

	}

}

Wartorle::Wortortle() : Water(8){
	public:
	int attack1(Pokemon *pPointer){
	cout << &name << " used bubble " << pPointer &pEntry.name << " took " << pPointer &take_damage(2,list<element> (water)) << " damage!" <<endl;

	}
}

Blastoise::Blastoise() : Water(9)
{
	public:
	int attack1(Pokemon *pPointer){
	cout << &name << " used water pledge " << pPointer &pEntry.name << " took " << pPointer &take_damage(8,list<element> (water)) << " damage!" <<endl;

	}
}

int Pokemon::take_damage(int damageAmount, std::list<element> damageTypes) {
	int weaknessCount = 0;
	for(auto wIt = weaknesses.begin(); wIt != weaknesses.end(); wIt++)
		for(auto dIt = damageTypes.begin(); dIt != damageTypes.end(); dIt++)
			if(*dIt == *wIt) weaknessCount++;

	damageAmount = damageAmount * (log(5 * weaknessCount + 5) / log(5));
	currentHP -= damageAmount;
	return damageAmount;
};

/*Pokemon *make_pokemon(element e, std::string n) {

	Pokemon *newPokemon;
	if(e == element::fire) {
		newPokemon = new Fire(1);
		newPokemon->name = n;
	} else if(e == element::grass) {
		newPokemon = new Grass(1);
		newPokemon->name = n;
	} else if(e == element::water) {
		newPokemon = new Water(1);
		newPokemon->name = n;
	}
	return newPokemon;

}*/

Pokemon *make_pokemon(int index) {
	Pokemon *newPokemon:
	switch (index){
		case 7: newPokemon = newSqurtle;
		break;
 
		case 8: newPokemon = newWartortle;
		break;

		case 9: newPokemon = Blastoise;
		break;
		}
	return newPokemon;
}



std::ostream &operator << (std::ostream &output, Pokemon &poke){


	output << "<pokemon>\n";
	output << "  <id> " << poke.id << " </id>\n";
	output << "  <name> " << poke.name << " </id>\n";
	output << "  <attack> " << poke.attack << " </attack>\n";
	output << "  <defense> " << poke.defense << " </defense>\n";
	output << "  <entry>\n";
	output << "    <number> " << poke.pEntry.number << " </number>\n";
	output << "    <name> " << poke.pEntry.name << " </name>\n";
	output << "  </entry>\n";
	output << "</pokemon>";

	return output;
}

void Pokemon::write(){

	std::ofstream saveFile;
	saveFile.open(this->id + ".dat");

	saveFile << this;

	saveFile.close();

}
