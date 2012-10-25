#include <stdio.h>

#include <egoi.h>
#include <egoimap.h>

#define API_KEY     "d7cdcc90c0547da5da90c3e14eeff180455c38a2"

#include <egoi.h>

int main(int argc, char ** argv) {
    try {

        EgoiApi * api = Egoi::getApi();

        EgoiMap functionOptions;
        functionOptions["apikey"] =  new EgoiString(API_KEY);
        EgoiMapList value = api->getLists(functionOptions);

        std::cout << value;

    } catch(EgoiException e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}