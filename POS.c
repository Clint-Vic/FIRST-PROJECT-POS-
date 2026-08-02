#include <stdio.h>

       int main() {

         int quantity;
         float price;
         char shipping;
         char food;
         char agree;
              
         printf("- POINT OF SALE(POS) TERMINAL - \n\n");

         // food Options
         printf("B = Burger\n");
         printf("F = Fries\n");
         printf("C = Chicken\n");
         printf("Enter your food:");
         scanf(" %c", &food);

         // for the quantity
          printf("Enter quatity:");
          scanf("%d", &quantity);

         // for the price
          printf("\t-- PRICES --\n");
          printf("\t Chicken = P150\n");
          printf("\t Fries = P80\n");
          printf("\t Burger = P110\n");
          printf("Enter the price of your item:");
          scanf("%f", &price);
          printf("Type Y to continue:");
          scanf(" %c", &agree);

         // for the shipping
          printf("Enter shipping option: E for EXPRESS and S for SHIPPING:");
          scanf(" %c", &shipping);

         // Final receipt
         printf("\n--- RECEIPT ---\n");
         printf("Food: %c\n", food);
         printf("Items: %d\n", quantity);
         printf("Price per item: P%.1f\n", price);
         printf("Shipping mode: %c\n", shipping);
         printf("Total Product cost: P%.2f", quantity * price);
         return 0;
        }
