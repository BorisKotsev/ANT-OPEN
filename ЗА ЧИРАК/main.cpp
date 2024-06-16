#include <iostream>

using namespace std;

int main()
{
    int animalSize = 216;
    string animals[] = {"aardvark","albatross","alligator","alpaca","anteater","antelope","armadillo","baboon","badger","barracuda","bat","bear","beaver","bison","boar","buffalo","butterfly","camel","capybara","caribou","cassowary","cat","caterpillar","cheetah","chicken","chimpanzee","chinchilla","chough","clam","cobra","cockroach","cod","cormorant","coyote","crab","crane","crocodile","crow","curlew","deer","dinosaur","dog","dogfish","dolphin","donkey","dotterel","dove","dragonfly","duck","dugong","dunlin","eagle","echidna","eel","eland","elephant","elk","emu","falcon","ferret","finch","fish","flamingo","fly","fox","frog","gaur","gazelle","gerbil","giraffe","gnat","gnu","goat","goldfish","goose","gorilla","goshawk","grasshopper","grouse","guanaco","gull","hamster","hare","hawk","hedgehog","heron","herring","hippopotamus","hornet","horse","human","hummingbird","hyena","ibex","ibis","jackal","jaguar","jay","jellyfish","kangaroo","kingfisher","koala","kookabura","kouprey","kudu","lapwing","lark","lemur","leopard","lion","llama","lobster","locust","loris","louse","lyrebird","magpie","mallard","manatee","mandrill","mantis","marten","meerkat","mink","mole","mongoose","monkey","moose","mosquito","mouse","mule","narwhal","newt","nightingale","octopus","okapi","opossum","oryx","ostrich","otter","owl","oyster","panther","parrot","partridge","peafowl","pelican","penguin","pheasant","pig","pigeon","pony","porcupine","porpoise","quail","quelea","quetzal","rabbit","raccoon","rail","ram","rat","raven","reindeer","rhinoceros","rook","salamander","salmon","sandpiper","sardine","scorpion","seahorse","seal","shark","sheep","shrew","shrimp","skunk","snail","snake","sparrow","spider","spoonbill","squid","squirrel","starling","stingray","stinkbug","stork","swallow","swan","tapir","tarsier","termite","tiger","toad","trout","turkey","turtle","vicuna","viper","vulture","wallaby","walrus","wasp","weasel","whale","wolf","wolverine","wombat","woodcock","woodpecker","worm","wren","yak","zebra"};

    cout << "ANIMALS: " << endl;
    for(int i = 0; i < animalSize; i ++)
    {
        cout << i << ": " << animals[i] << endl;
    }
    cout << endl;

    return 0;
}
