//data.h

int i,j;
int main_exit;
#define FORMAT "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n"

struct date{
    int month,day,year;
};

typedef struct account{

    char name[60];
    int acc_no,age;
    char address[60];
    char citizenship[15];
    double phone;
    char acc_type[10];
    float amt;
    struct date dob;
    struct date deposit;
    struct date withdraw;

    }account;
account add,upd,check,rem,transaction;

int valid_date(int day, int month, int year, int day1, int month1, int year1);
int findAge(int current_date, int current_month, int current_year, int birth_date, int birth_month, int birth_year); 

void start();
//static inline float interest(float t,float amount,int rate);
void fordelay(int j);
void menu();
