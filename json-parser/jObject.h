//
// Created by chenxia on 2022/8/8.
//

#ifndef MYUTIL_JOBJECT_H
#define MYUTIL_JOBJECT_H

#endif //MYUTIL_JOBJECT_H
namespace json{
    using std::variant;
    using std::map;
    using std::string;
    using std::string_view;
    using std::stringstream;
    using std::vector;
    using std::get_if;
}
enum TYPE{
    T_NULL,
    T_BOOL,
    T_INT,
    T_DOUBLE,
    T_STR,
    T_LIST,
    T_DICT
};
using null_t = string;
using int_t=int32_t;
class jObject{
public:
    using value_t=varitant<bool_t,int_t,double_t,str_t,list_t,dict_t>;
public:
    TYPE m_type;
    value_t m_value;
};