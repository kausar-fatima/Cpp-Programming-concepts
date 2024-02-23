#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string filename = "example.txt";

    try {
        // Create a new file for writing
        std::ofstream outFile(filename);
        
        if (!outFile.is_open()) {
            throw std::runtime_error("Failed to create the file for writing.");
        }
        
        std::string data = "This is some data that we are writing to a file.";
        
        // Write data to the file
        outFile << data;
        
        // Close the file
        outFile.close();
        
        // Open the file for reading
        std::ifstream inFile(filename);
        
        if (!inFile.is_open()) {
            throw std::runtime_error("Failed to open the file for reading.");
        }
        
        std::string readData;
        
        // Read data from the file
        while (std::getline(inFile, readData)) {
            std::cout << "Data from the file: " << readData << std::endl;
        }
        
        // Close the file
        inFile.close();
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
