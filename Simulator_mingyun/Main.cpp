#include <iostream>
#include <vector>
#include "EoModel.h"
#include "Event.h"
#include "SimEngine.h"
#include "Generator.h"
#include "Transducer.h"
#include "Machine.h"

int main() {
    // std::vector<std::vector<double>> result;
    std::cout << "hi";
    // // Generator 객체 생성
    Generator generator;

    // // Transducer 객체 생성
    Transducer transducer;

    // Machine 객체 생성
    Machine machine;

    // // Queue 객체 생성
    // Queue queue;

    // // BankAccountServer 객체 생성
    // BankAccountServer bankAccountServer;

    // // Counter 객체 생성
    // Counter counter;

    // SimEngine 인스턴스 가져오기
    SimEngine& engine = SimEngine::getInstance();
    engine.addModel(&generator);
    engine.addModel(&transducer);
    engine.addModel(&machine);
    // engine.addModel(&counter);
    // engine.addModel(&queue);
    // engine.addModel(&bankAccountServer);

    engine.setEndTime(3600);
    engine.run();

    std::cout << "bye";
    return 0;
}
