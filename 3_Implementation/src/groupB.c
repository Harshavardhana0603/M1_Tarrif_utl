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
    if (group == 'B')
    {
        if (units > 0 || units < 100)
        {
             per_unit_charge = 2.60;
            Energy_charges = units * per_unit_charge;
            customercharges = 35;
            Bill_amount = Energy_charges + fixed_charges + customercharges + ED_charges;
            printf("%lf", Bill_amount);
        }
        else if (units > 101 || units < 200)
        {
            per_unit_charge = 3.60;
            Energy_charges = units * per_unit_charge;
            customercharges = 45;
            Bill_amount = Energy_charges + fixed_charges + customercharges + ED_charges;
            printf("%lf", Bill_amount);
        }
        else if (units > 201 || units < 225)
        {
            per_unit_charge = 6.90;
            Energy_charges = units * per_unit_charge;
            customercharges = 50;
            Bill_amount = Energy_charges + fixed_charges + customercharges + ED_charges;
            printf("%lf", Bill_amount);
        }
    }
    
}
