//
// Created by gaurav on 02/02/22.
//

#ifndef ALGO_COUT_OVERLOADS_H
#define ALGO_COUT_OVERLOADS_H

#include <deque>
#include <ostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <list>

template <typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& v);

template <typename T>
std::ostream& operator<<(std::ostream& os, const std::deque<T>& v);

template <typename T, typename S>
std::ostream& operator<<(std::ostream& os, const std::pair<T, S>& v);

template <typename T, typename S, typename V>
std::ostream& operator<<(std::ostream& os, const std::tuple<T, S , V>& v);

template <typename T>
std::ostream& operator<<(std::ostream& os, const std::set<T>& v);

template <typename T>
std::ostream& operator<<(std::ostream& os, const std::unordered_set<T>& v);

template <typename T, typename S>
std::ostream& operator<<(std::ostream& os, const std::map<T, S>& v);

template <typename T, typename S>
std::ostream& operator<<(std::ostream& os, const std::unordered_map<T, S>& v);

template <typename T, typename S>
std::ostream& operator<<(std::ostream& os, const std::list<T, S>& v);

template <typename T, typename S>
std::ostream& operator<<(std::ostream& os, const std::pair<T, S>& v)
{
    os << "(";
    os << v.first << ", "
       << v.second << ")";
    return os;
}

template <typename T, typename S, typename V>
std::ostream& operator<<(std::ostream& os, const std::tuple<T, S ,V>& v)
{
    v.
            os<< "(";
    os << v.get(0) << ", "
       << v.get(1) << ", "
       << v.get(2) << ")";
    return os;
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& v)
{
    os << "[";
    for (int i = 0; i < v.size(); ++i) {
        os << v[i];
        if (i != v.size() - 1)
            os << ", ";
    }
    os << "]";
    return os;
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const std::deque<T>& v)
{
    os << "[";
    for (int i = 0; i < v.size(); ++i) {
        os << v[i];
        if (i != v.size() - 1)
            os << ", ";
    }
    os << "]";
    return os;
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const std::list<T>& v)
{
    os << "[";
    for (int i = 0; i < v.size(); ++i) {
        os << v[i];
        if (i != v.size() - 1)
            os << ", ";
    }
    os << "]";
    return os;
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const std::set<T>& v)
{
    os << "[";
    for (auto it : v) {
        os << it;
        if (it != *v.rbegin())
            os << ", ";
    }
    os << "]";
    return os;
}


template <typename T>
std::ostream& operator<<(std::ostream& os, const std::unordered_set<T>& v)
{
    os << "[";
    for (auto it : v) {
        os << it;
        if (it != *v.rbegin())
            os << ", ";
    }
    os << "]";
    return os;
}

template <typename T, typename S>
std::ostream& operator<<(std::ostream& os, const std::map<T, S>& v)
{
    os << "{";
    unsigned long long i = 0;
    for (auto it : v){
        os << it.first << " : " << it.second;
        if(++i != v.size())
            os << ", ";
    }

    os << "}";
    return os;
}

template <typename T, typename S>
std::ostream& operator<<(std::ostream& os, const std::unordered_map<T, S>& v)
{
    os << "{";
    unsigned long long i = 0;
    for (auto it : v){
        os << it.first << " : " << it.second;
        if(++i != v.size())
            os << ", ";
    }

    os << "}";
    return os;
}

#endif //ALGO_COUT_OVERLOADS_H
