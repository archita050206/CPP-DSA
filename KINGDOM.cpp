// Problem Statement:

// In a mythical kingdom threatened by powerful enemies, you have been appointed as the Royal Strategist. Your job is to manage the kingdom’s defense system by recruiting heroes, building fortifications, managing resources, and launching counter-attacks against invading enemies. The system should allow for the management of heroes, fortresses, and defense units, as well as tracking battles and enemy invasions. The Royal Strategist will allocate resources, assign heroes to fortresses, and defend the kingdom from destruction.

// Requirements:
// Hero Class:
// Attributes:
// heroID: Unique identifier for each hero.
// name: Name of the hero (e.g., "Aragon", "Liora").
// level: Hero’s current level.
// classType: Hero's class (e.g., Knight, Wizard, Archer, Assassin).
// health: Health points (HP) of the hero.
// mana: Mana points (for spellcasters).
// strength: Physical attack power.
// magic: Magical attack power (for magic-based heroes).
// defense: Hero’s defense rating.
// available: Boolean that indicates if the hero is available for duty.
// heroRank: Hero's ranking based on their battle experience (e.g., Novice, Elite, Legendary).
// Methods:
// displayHeroStats(): Shows all hero statistics.
// levelUp(): Increases hero’s level, strength, magic, and defense stats.
// takeDamage(int damage): Reduces the hero’s HP by the given damage.
// restoreHealth(int hp): Restores health points.
// assignToFortress(Fortress& fortress): Assigns a hero to defend a specific fortress.
// fightEnemy(Enemy& enemy): Allows the hero to fight against a given enemy.
// Fortress Class:
// Attributes:
// fortressID: Unique identifier for each fortress.
// location: Location of the fortress (e.g., "Northern Mountains", "Eastern Forest").
// defenseRating: Strength of the fortress walls and defenses.
// capacity: Number of heroes the fortress can hold.
// currentHeroes: List of heroes currently assigned to defend the fortress.
// Methods:
// addHero(Hero& hero): Adds a hero to the fortress defense.
// removeHero(Hero& hero): Removes a hero from the fortress.
// fortify(int materials): Increases the fortress's defense rating by using materials.
// isUnderAttack(): Returns whether the fortress is currently under attack.
// defend(Enemy& enemy): Engages the fortress’s defenses and assigned heroes in battle with an invading enemy.
// Enemy Class:
// Attributes:
// enemyID: Unique identifier for each enemy.
// enemyType: Type of enemy (e.g., Dragon, Orc, Goblin Army).
// strength: Physical attack power of the enemy.
// health: Enemy's health points.
// speed: Movement speed of the enemy, affecting the time to reach fortresses.
// specialAbilities: Special abilities (e.g., fire breath for a dragon, regeneration for trolls).
// Methods:
// attack(Fortress& fortress): Attacks a specific fortress, reducing its defense rating and engaging heroes.
// takeDamage(int damage): Reduces enemy health by the given damage.
// isAlive(): Returns whether the enemy is still alive or has been defeated.
// Kingdom Class (Main Controller):
// Attributes:
// kingdomName: Name of the kingdom.
// resources: Number of available resources (used for fortifications, healing heroes, recruiting, etc.).
// heroList: List of all heroes in the kingdom.
// fortressList: List of all fortresses in the kingdom.
// enemyList: List of all known enemy forces.
// Methods:
// recruitHero(Hero hero): Recruits a new hero to the kingdom.
// buildFortress(Fortress fortress): Constructs a new fortress at a specified location.
// defendKingdom(): Launches a defensive strategy by assigning heroes to fortresses and managing resources.
// assignHeroToFortress(int heroID, int fortressID): Assigns a hero to a specific fortress for defense.
// launchCounterAttack(Enemy& enemy): Orders heroes to launch an offensive counter-attack on an enemy force.
// manageResources(int allocation): Allocates resources for fortifications, healing, or other kingdom defense needs.
// viewKingdomStatus(): Displays the current status of the kingdom, including fortresses, heroes, resources, and enemies.
// Battle Class:
// Attributes:
// battleID: Unique identifier for each battle.
// heroGroup: List of heroes involved in the battle.
// enemyGroup: The enemy or enemies involved in the battle.
// battleOutcome: Outcome of the battle (Victory, Defeat, or Stalemate).
// damageDealt: Total damage dealt during the battle.
// Methods:
// initiateBattle(Hero& hero, Enemy& enemy): Simulates a battle between a hero and an enemy.
// calculateOutcome(): Determines the outcome of the battle based on hero and enemy stats.
// recordBattle(): Logs the results of the battle (victory/defeat), experience gained by heroes, and casualties.


#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Hero{
    private:
    int heroID;
    string name;
    int level;
    string classType;
    int health;
    int mana;
    int strength;
    int magic;
    int defense;
    bool available;
    string heroRank;
    public:
    Hero(int heroID, string name,int level,string classType,int health,int mana,int strength,int magic,int defense,bool available,string heroRank){
        this->heroID=heroID;
    this->name=name;
    this->level=level;
    this->classType=classType;
    this->health=health;
    if(name=="Spellcaster"){
    this->mana=mana;
    }
    this->strength=strength;
    this->magic=magic;
    this->defense=defense;
    this->available=available;
    this->heroRank=heroRank;
    }
    public:
    
    void displayHeroStats(){
        cout<<"Hero's details: "<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<heroID<<endl;
        cout<<"At level "<<level<<endl;
        cout<<"Class: "<<classType<<endl;
        cout<<"Health: "<<health<<endl;
        
        if(name=="Spellcaster"){
        cout<<"mana of spellcaster is : "<<mana<<endl;
        }
        cout<<"Strength: "<<strength<<endl;
        cout<<"Magical power : "<<magic<<endl;
        cout<<"Defense rating of "<<name<<" is : "<<defense<<endl;
        if(available==true)cout<<name<<" is available"<<endl;
        else cout<<name<<" is not available"<<endl;
        cout<<"Rank of "<<name<<" is : "<<heroRank<<endl;
    }

    void levelUp(){
        level+=1;
        strength+=5;
        magic+=3;
        defense+=4;
        cout<<"Leveling up! "<<name<<" at level "<<level<<endl;
        cout<<name<<" got more stronger! strength is "<<strength<<endl;
        cout<<"More magical power to you! "<<name<<"'s new magical power is "<<magic<<endl;
        cout<<name<<" got more defense power! defense power inscreased to: "<<defense<<endl;
    }
    void takeDamage(int damage){
        health-=damage;
        cout<<name<<" has been attacked! current health is "<<health<<endl;    
    }
    void restoreHealth(int hp){
        health+=hp;
        cout<<"Health restored to some extent, curren health point is "<<health<<endl;
    }
    void assignToFortress(Fortress& fortress){
        fortress.addHero(*this);
        available=false;
        cout<<name<<" assigned to fortress, hero no longer available"<<endl;
    }
    void fightEnemy(Enemy& enemy){

    }
};
class Fortress{
    public:
    int fortressID;
    string location;
    int defenseRating;
    int capacity;
    vector<string>currentHeroes;
    public:
    void addHero(Hero& hero){

    }
    void removeHero(Hero& hero){

    }
    void fortify(int materials){

    }
    bool isUnderAttack(){

    }
    void defend(Enemy& enemy){

    }

};
class Enemy{
    int enemyID;
    string enemyType;
    int strength;
    int health;
    int speed;
    string specialAbilities;
    public:
    void attack(Fortress& fortress){

    }
    void takeDamage(int damage){

    }
    bool isAlive(){

    }

};
class Kingdom{
    string kingdomName;
    int resources;
    string herolist[100];
    string fortressList[100];
    string enemyList[100];
    void recruitHero(Hero hero){

    }
    void buildFortress(Fortress fortress){

    }
    void defendKingdom(){

    }
    void assignHeroToFortress(int heroID, int fortressID){

    }
    void launchCounterAttack(Enemy& enemy){

    }
    void manageResources(int allocation){

    }
    void viewKingdomStatus(){

    }

};
class Battle{
    int battleID;
    string heroGroup[100];
    string enemyGroup[100];
    string battleOutcome;
    int damageDealt;
    public:
    void initiateBattle(Hero& hero, Enemy& enemy){

    }
    void calculateOutcome(){

    }
    void recordBattle(){

    }

};
int main(){
    Hero h(1,"Aragon",5,"Assasin",100,0,80,0,8,true,"Legendary");
}



