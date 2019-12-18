/*
 * @Copyright: SAIC AI LAB
 * @Version: 1.0
 * @Author: Huang Yan
 * @Description: Description
 * @Date: 2019-12-18 14:50:59
 */
#ifndef WORD_CLASS_HPP_
#define WORD_CLASS_HPP_

#include <string>
using std::string;

struct World {
 public:
  World() = delete;
  ~World() = default;
  World(const string &m) : msg_(m) {}
  void Set(const string &m) { msg_ = m; }
  string Greet() const { return msg_; }

 private:
  string msg_;
};

#endif  // WORD_CLASS_HPP_
