#include <PhysicsTools/NanoAOD/interface/FlatTable.h>

int FlatTable::columnIndex(const std::string & name) const {
    for (unsigned int i = 0, n = columns_.size(); i < n; ++i) {
        if (columns_[i].name == name) return i;
    }
    return -1;
}
