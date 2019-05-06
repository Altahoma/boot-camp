#include <stdio.h>

#define WRONG_VALUE_IDENTIFIER -1

enum MONTH {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

enum DAYS_PER_MONTH {
    DAYS_IN_JANUARY = 31,
    DAYS_IN_FEBRUARY,
    DAYS_IN_MARCH,
    DAYS_IN_APRIL,
    DAYS_IN_MAY,
    DAYS_IN_JUNE,
    DAYS_IN_JULY,
    DAYS_IN_AUGUST,
    DAYS_IN_SEPTEMBER,
    DAYS_IN_OCTOBER,
    DAYS_IN_NOVEMBER,
    DAYS_IN_DECEMBER
};

int getDaysQuantity(int month) {
    switch ( month ) {
        case JANUARY:
            return DAYS_IN_JANUARY;
        case FEBRUARY:
            return DAYS_IN_FEBRUARY;
        case MARCH:
            return DAYS_IN_MARCH;
        case APRIL:
            return DAYS_IN_APRIL;
        case MAY:
            return DAYS_IN_MAY;
        case JUNE:
            return DAYS_IN_JUNE;
        case JULY:
            return DAYS_IN_JULY;
        case AUGUST:
            return DAYS_IN_AUGUST;
        case SEPTEMBER:
            return DAYS_IN_SEPTEMBER;
        case OCTOBER:
            return DAYS_IN_OCTOBER;
        case NOVEMBER:
            return DAYS_IN_NOVEMBER;
        case DECEMBER:
            return DAYS_IN_DECEMBER;
        default:
            return WRONG_VALUE_IDENTIFIER;
    }
}

int main() {
    printf("%d\n", getDaysQuantity(JANUARY));
    printf("%d\n", getDaysQuantity(DECEMBER));
    printf("%d\n", getDaysQuantity(36));

    return 0;
}
