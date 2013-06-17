#include<stdio.h>
#include<sys/time.h>
#include<time.h>
#include<stdlib.h>

void merge(int array[],int beginning,int middle,int end)
{

  int first_half_it, second_half_it, last_ordered, *c;
  first_half_it = beginning;
  second_half_it = middle+1;
  last_ordered = beginning;

  while((first_half_it <= middle) && (second_half_it <= end))
    {
      if(array[first_half_it] < array[second_half_it])
        {
          c[last_ordered] = array[first_half_it];
          first_half_it++;
          last_ordered++;
        }
      else
        {
          c[last_ordered] = array[second_half_it];
          first_half_it++;
          last_ordered++;
        }
    }

  while(first_half_it < middle)
    {
      c[last_ordered] = array[first_half_it];
      first_half_it++;
      last_ordered;
    }
  while(second_half_it <= end)
    {
      c[last_ordered] = array[second_half_it];
      second_half_it++;
      last_ordered++;
    }

  for(int i = beginning; i <= end; i++)
    array[i] = c[i];
}

void merge_sort(int array[], int beginning, int end)
{
  int middle;

  // Stops when the array has only one
  if(beginning < end)
    { 
      middle = (beginning+end)/2;
      merge_sort(array, beginning, middle);
      merge_sort(array, middle+1, end);
      merge(array, beginning, middle, end);
    }
  else
    return;
}

int main()
{
  int *a,i,j;
  int d,g,n;
  FILE *gg;
  struct timeval startime,endtime;
  float tottime;
  gg=fopen("merge.txt","w"); 
  for( j = 100000;j < 1000000;j += 100000)
    { 
      a=(int *) malloc(sizeof(int)*j); 
      for(i = 0;i < j; i++)
        {
          a[i] = rand();
        }
      gettimeofday(&startime,NULL);
      merge_sort(a,0,j);
      gettimeofday(&endtime,NULL);
      tottime=(endtime.tv_sec * 1000 + endtime.tv_usec / 1000)-(startime.tv_sec * 1000+startime.tv_usec / 1000);
      fprintf(gg,"\n %d\t%.01f", j,tottime);
      printf("\n%d\t%.01f",j,tottime);
      free(a);
    }
  fclose(gg);
  return(0);
}
