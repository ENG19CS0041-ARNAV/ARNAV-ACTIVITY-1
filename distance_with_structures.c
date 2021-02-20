//WAP to find the distance between two points using structures and 4 functions.

struct Points 
{
    float x, y;
};
 
float distance_calculator(struct Points m, struct Points n)
{
    float result;
    result = sqrt((m.x - n.x) * (m.x - n.x) + (m.y - n.y) *(m.y - n.y))
    return result;
}
 
int main()
{
    struct Points m, n;
    printf("\nEnter The Coordinates of Point A:\n");
    printf("\nX - Axis Coordinate:");
    scanf("%f", &m.x);
    printf("\nY - Axis Coordinate:");
    scanf("%f", &m.y);  
    printf("\nEnter The Coordinates of Point B:\n");
    printf("\nY - Axis Coordinate:");
    scanf("%f", &n.x);
    printf("\nY - Axis Coordinate:");
    scanf("%f", &n.y);
    printf("\nDistance between Points A and B: %f \n", distance calculator(m, n));
    return 0;
}

