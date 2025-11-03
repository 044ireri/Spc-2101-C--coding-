
#include <stdio.h>

int main() {
    // ----& Part 1: Daily Revenue ----
    float revenue[7];
    float total = 0, average;
    int i;

    printf("=== HOTEL REVENUE SYSTEM ===\n\n");

    // Input daily revenue
    printf("Enter revenue for 7 days:\n");
    for (i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }

    average = total / 7.0;

    printf("\nTotal revenue for the week: %.2f\n", total);
    printf("Average daily revenue: %.2f\n", average);

    // ---- Part 2: Room Occupancy (1 Branch) ----
    int room_occupancy[5][10];
    int floor, room;
    int occupied, vacant;

    srand(time(0)); // Seed for random numbers

    printf("\n=== ROOM OCCUPANCY (1 BRANCH) ===\n");

    for (floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;

        // Randomly assign occupancy status to each room
        for (room = 0; room < 10; room++) {
            room_occupancy[floor][room] = rand() % 2;
            if (room_occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d -> Occupied: %d | Vacant: %d\n", floor + 1, occupied, vacant);
    }

    // ---- Part 3: Multiple Branches (3D Array) ----
    int chain[3][5][10];
    int branch, total_occupied = 0;

    printf("\n=== MULTIPLE BRANCHES OCCUPANCY ===\n");

    for (branch = 0; branch < 3; branch++) {
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;
                if (chain[branch][floor][room] == 1)
                    total_occupied++;
            }
        }
    }

    printf("Total occupied rooms across all branches: %d\n", total_occupied);

    return 0;
}
