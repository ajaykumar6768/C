

struct box
{
 /**
 * Define three fields of type int: length, width and height
 */
 int length;
 int width;
 int height;
}b;

typedef struct box box;

int get_volume(box b) {
 /**
 * Return the volume of the box
 */
 return (b.length*b.width*b.height);
}

int is_lower_than_max_height(box b) {
 /**
 * Return 1 if the box's height is lower than MAX_HEIGHT and 0 otherwise
 */
    if(b.height > 40)
 {
  return 0;
 }
 else
 {
  return 1;
 }
}


#Sample Input :

4
5 5 5
1 2 40
10 5 41
7 2 42
  
#Sample Output :
  
125
80
