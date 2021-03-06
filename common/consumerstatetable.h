#pragma once

#include <string>
#include <deque>
#include "dbconnector.h"
#include "consumertablebase.h"

namespace swss {

class ConsumerStateTable : public ConsumerTableBase, public TableName_KeySet
{
public:
    ConsumerStateTable(DBConnector *db, std::string tableName, int popBatchSize = DEFAULT_POP_BATCH_SIZE);

    /* Get multiple pop elements */
    void pops(std::deque<KeyOpFieldsValuesTuple> &vkco, std::string prefix = EMPTY_PREFIX);
};

}
