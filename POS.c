#include <stdio.h>

       int main() {

         int quantity;
         float price;
         char shipping;
         char Order[10];
         char agree;
         char Your_order;

         printf("- POINT OF SALE(POS) TERMINAL - \n\n\n");

         // food Options
         printf("\t-- Menu: --\n\n");
         printf("\tBurger\n");
         printf("\tFries \n");
         printf("\tChicken\n\n");
         printf("Enter your order:");
         scanf(" %s", Order);
         printf("Your Order is: %s\n", Order);

         // for the quantity
          printf("Enter quantity:");
          scanf("%d", &quantity);
          printf("You Ordered: %d %s\n\n", quantity, Order);


         // for the price
          printf("\t-- PRICES --\n\n");
          printf("\tChicken = P150\n");
          printf("\tFries = P80\n");
          printf("\tBurger = P110\n\n");
          printf("Enter the price of your item:");
          scanf("%f", &price);
          printf("Your Total is: P%.2f\n", quantity * price);
          printf("Type C to confirm your order:");
          scanf(" %c", &agree);

         // for the shipping
          printf("Enter shipping option: E for EXPRESS and S for NORMAL SHIPPING:");
          scanf(" %c", &shipping);

         // Final receipt
         printf("\n\t-- RECEIPT --\n");
         printf("Order: %s\n", Order);
         printf("Items: %d\n", quantity);
         printf("Price per item: P%.1f\n", price);
         printf("Shipping mode: %c\n", shipping);
         printf("Total Product cost: P%.2f", quantity * price);
         return 0;
        }
