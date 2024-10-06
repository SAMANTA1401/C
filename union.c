/* Declare a union template called tag */
union tag
{
    int nbr;
    char character;
};
/* Use the union template */
union tag mixed_variable;
/* Declare a union and instance together */
union generic_type_tag
{
    char c;
    int i;
    float f;
    double d;
} generic;

union date_tag
{
    char complete_date[9];
    struct part_date_tag
    {
        char month[2];
        char break_value1;
        char day[2];
        char break_value2;
        char year[2];
    } parrt_date;
} date = {“01 / 01 / 05”};