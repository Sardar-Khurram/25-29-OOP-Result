#ifndef SEARCHUTILS_H
#define SEARCHUTILS_H

#include <vector>
#include <memory>
#include <functional>
#include <algorithm>

// Returns a raw pointer to the first element matching the predicate,
// or nullptr if not found. Works with vectors of unique_ptr<T>.
template <typename T>
T* findFirst(const std::vector<std::unique_ptr<T>>& collection,
             std::function<bool(const T*)> predicate) {
    auto it = std::find_if(collection.begin(), collection.end(),
                           [&](const std::unique_ptr<T>& item) {
                               return predicate(item.get());
                           });
    return (it != collection.end()) ? it->get() : nullptr;
}

// Returns raw pointers to all elements matching the predicate.
template <typename T>
std::vector<T*> findAll(const std::vector<std::unique_ptr<T>>& collection,
                        std::function<bool(const T*)> predicate) {
    std::vector<T*> results;
    for (const auto& item : collection)
        if (predicate(item.get()))
            results.push_back(item.get());
    return results;
}

#endif
