#include "dog.h"
#include "zoo.h"
#include "DownloadMgr.h"

Zoo::Zoo() : animals(std::vector<std::shared_ptr<IAnimal>>())
{}

std::shared_ptr<IAnimal> Zoo::AddNewAnimal() {
    auto animal = return std::make_shared<Dog>();
    animals.push_back(animal);
    return animal;
}