
#pragma once

#include "common/type/data_type.h"
#include "common/time/date.h"


/**
 * @brief 日期类型
 * @ingroup DatesType
 */
class DatesType : public DataType
{
public:
  DatesType() : DataType(AttrType::DATES) {}
  virtual ~DatesType() {}

  int compare(const Value &left, const Value &right) const override;

  RC set_value_from_str(Value &val, const string &data) const override;

  RC to_string(const Value &val, string &result) const override;
};