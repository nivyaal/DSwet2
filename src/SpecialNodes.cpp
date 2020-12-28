#include "include/SpecialNodes.h"

bool TripletKey::operator>( const TripletKey y) const
{
    if (this->time < y.time)
    {
        return true;
    }
    else if (this->time == y.time && this->course_id > y.course_id)
    {
        return true;
    }
    else if  (this->time == y.time && this->course_id == y.course_id && this->class_num > y.class_num)
    {
        return true;
    }
    return false;
}
bool TripletKey::operator==(const TripletKey y) const
{
    return (this->course_id == y.course_id && this->time == y.time && this->class_num == y.class_num);
}


bool TripletKey::operator<(const TripletKey y) const
{
    return !( *this == y || *this > y);
}