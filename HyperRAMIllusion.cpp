// HyperRAMIllusion.cpp - Enhanced version with improved error handling and best practices
#include <iostream>
#include <stdexcept>

// Class for HyperRAM Illusion operations
class HyperRAMIllusion {
public:
    HyperRAMIllusion() {
        // Constructor implementation
        std::cout << "HyperRAMIllusion initialized." << std::endl;
    }

    void performOperation(int data) {
        try {
            // Validate the input data
            if (data < 0) {
                throw std::invalid_argument("Data must be non-negative.");
            }
            
            std::cout << "Performing operation on data: " << data << std::endl;
            // Simulated operation
            int result = data * 2;  // Example processing
            std::cout << "Operation result: " << result << std::endl;
        } catch (const std::exception &ex) {
            std::cerr << "Error occurred: " << ex.what() << std::endl;
        }
    }

private:
    void logError(const std::string &errorMessage) {
        std::cerr << "Log Error: " << errorMessage << std::endl;
        // Potential logging to a file or external system
    }
};

int main() {
    try {
        HyperRAMIllusion illusion;
        illusion.performOperation(10);  // Example call
        illusion.performOperation(-1); // Invalid data to test error handling
    } catch (const std::exception &e) {
        std::cerr << "Unhandled exception: " << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}