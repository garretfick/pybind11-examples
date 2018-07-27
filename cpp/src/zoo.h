#include <memory>
#include <vector>

class IAnimal;

class Zoo {
public:
    Zoo();
    std::shared_ptr<IAnimal> AddNewAnimal();
    std::vector<std::shared_ptr<IAnimal>> animals;

};