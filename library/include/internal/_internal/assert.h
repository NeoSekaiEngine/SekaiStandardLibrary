#ifndef SEKAI_STANDARD_LIBRARY_INTERNAL_ASSERT_H_
#define SEKAI_STANDARD_LIBRARY_INTERNAL_ASSERT_H_

#define ASSERT_RETURN_VALUE(condition, rt_value) if((condition)) {return (rt_value);}
#define ASSERT_NO_RETURN(condition) if((condition)) {return;}

#endif//!SEKAI_STANDARD_LIBRARY_INTERNAL_ASSERT_H_
