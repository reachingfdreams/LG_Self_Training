#ifndef ASSIGNMENT_UNIT02_H_
#define ASSIGNMENT_UNIT02_H_

#include <iostream>
#include <vector>

#include "file_utils.h"

namespace unit02 {
    
class NamesStore {
 public:
    NamesStore();
    ~NamesStore();

    // static    
    static std::string GetFileContents(const std::string& file_name);
     
    bool Add(const std::string& name);
    bool Remove(const std::string& nam);
    void Sort();
    bool WriteToFile(const std::string& file_name);
    
 private:
    std::vector<std::string> names_;
    
    // Disallow copy and assign.
    NamesStore(const NamesStore&) = delete;
    NamesStore& operator=(const NamesStore&) = delete;
};

}   // namespace unit02

#endif  // ASSIGNMENT_UNIT02_H_