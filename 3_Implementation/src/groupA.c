#include <stdio.h>
int main()
{
    int units;
    int prevreading, cur_reading;
    float SurCharges, customercharges, per_unit_charge, Energy_charges, fixed_charges, ED_charges;
    char group;
    double Bill_amount;
    //scanf("%d", &units);
    printf("\t\t Welcome to electricity  Tariff calculation\n\n\n");
    printf("Enter Previous reading\n");
    scanf("%d", &prevreading);
    printf("Enter the Current reading\n");
    scanf("%d", &cur_reading);
    printf("Enter fixed chargers = 50 \n");
    scanf("%f", &fixed_charges);
    printf("Enter the Ed charges = 40\n");
    scanf("%f", &ED_charges);
    printf("Enter the which group are you (A or B or C)\n");
    getchar();
    scanf("%c", &group);
    units = cur_reading - prevreading;
     if (group == 'A')
    {
        if (units > 0 || units < 50)
        {
            per_unit_charge = 1.45;

            Energy_charges = units * per_unit_charge;
            customercharges = 25;
            Bill_amount = Energy_charges + fixed_charges + customercharges + ED_charges;
            printf("%lf", Bill_amount);
        }
        else if (units > 51 || units < 75)
        {
            per_unit_charge = 2.60;
            //Energy_charges = units * per_unit_charge;
            customercharges = 30;
            Bill_amount = Energy_charges + fixed_charges + customercharges + ED_charges;
            printf("%lf", Bill_amount);
        }
    }
}