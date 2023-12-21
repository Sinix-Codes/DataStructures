# Hash table *#*

```c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include <assert.h>
#include <stdbool.h>

#define MAX_NAME 256
#define TABLE_SIZE 5
#define DELETED_NODE (person *)(0xFFFFFFFFFFFFFFFF)

typedef struct person_tag
{
    char name[MAX_NAME];
    struct person_tag *next;
} person;

person *hash_table[TABLE_SIZE];
person **persons = NULL;
int n_persons = 0;

unsigned int hash(const char *name)
{
    int length = strnlen(name, MAX_NAME);
    unsigned int hash_value = 0;

    for (int i = 0; i < length; i++)
    {
        hash_value += name[i];
        hash_value = (hash_value * name[i]) % TABLE_SIZE; // just to produce more random hash values
    }

    return hash_value;
}

void init_hash_table()
{
    // Set the bits of hash table to 0
    memset(hash_table, 0, sizeof(hash_table));
}

void print_table()
{
    person *temp = NULL;

    printf("Start\n");
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        if (hash_table[i] == NULL)
        {
            printf("\t%i\t---\n", i);
        }
        else if (hash_table[i] == DELETED_NODE)
        {
            printf("\t%i\t---<Deleted>\n", i);
        }
        else
        {
            printf("\t%i\t%s ", i, hash_table[i]->name);

            temp = hash_table[i]->next;
            while (temp != NULL)
            {
                printf("-> %s ", temp->name);
                temp = temp->next;
            }

            printf("\n");
        }
    }
    printf("End\n");
}

bool hash_table_insert(person *p)
{
    person *temp = NULL;
    if (p == NULL)
    {
        return false;
    }

    int index = hash(p->name) % TABLE_SIZE;

    if (hash_table[index] == NULL)
    {
        hash_table[index] = p;
    }
    else
    {
        temp = hash_table[index];
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = p;
    }

    n_persons++;
    return true;
}

// finds a person in the hash table by their name
person *hash_table_lookup(const char *name)
{
    int index = hash(name) % TABLE_SIZE;
    person *temp = hash_table[index];
    while (temp != NULL && strcmp(temp->name, name) != 0)
    {
        temp = temp->next;
    }

    return temp;
}

// deletes a person from the hash table by their name
person *hash_table_delete(const char *name)
{
    int index = hash(name) % TABLE_SIZE;

    person *tmp = hash_table[index];
    person *prev = NULL;

    while (tmp != NULL && strcmp(tmp->name, name) != 0)
    {
        prev = tmp;
        tmp = tmp->next;
    }

    if (tmp == NULL)
    {
        return NULL;
    }

    if (prev == NULL)
    {
        if (tmp->next == NULL)
            hash_table[index] = DELETED_NODE; // deleting head
        else
            hash_table[index] = tmp->next; // deleting head
    }
    else
    {
        prev->next = tmp->next;
    }

    return tmp;
}

void insert_person()
{
    int n;
    printf("Enter how many person you want to insert :");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        person *p1 = (person *)malloc(sizeof(p1));
        assert(p1 != NULL);
        printf("Enter Person's name : ");
        scanf("%s", p1->name);
        hash_table_insert(p1);
    }
    print_table();
}

void find_person()
{
    char name[MAX_NAME];
    printf("Enter the name of the person you want to find : ");
    scanf("%s", name);
    person *found = hash_table_lookup(name);

    if (found != NULL)
    {
        printf("Found %s in the hash table \n", found->name);
    }
    else
    {
        printf("Not found in the hash table \n");
    }
}

void delete_person()
{
    char name[MAX_NAME];
    printf("Enter the name of the person you want to delete : ");
    scanf("%s", name);
    person *found = hash_table_delete(name);

    if (found != NULL)
    {
        n_persons--;
        printf("Deleted %s from the hash table \n", found->name);
    }
    else
    {
        printf("Not found in the hash table \n");
    }
}

void hash_to_array()
{
    person *temp = NULL;
    int i = 0, j = 0;

    if (n_persons <= 0)
    {
        persons = NULL;
        return;
    }

    persons = (person **)realloc(persons, n_persons * sizeof(person *));

    for (i = 0; i < TABLE_SIZE; i++)
    {
        if (hash_table[i] == NULL || hash_table[i] == DELETED_NODE)
            continue;

        persons[j] = hash_table[i];
        j++;

        temp = hash_table[i]->next;
        while (temp != NULL)
        {
            persons[j] = temp;
            j++;
            temp = temp->next;
        }
    }
}

void sort_persons()
{
    int i, j;
    person *temp;

    hash_to_array();

    if (persons == NULL)
        return;

    for (i = 0; i < n_persons - 1; i++)
    {
        for (j = 0; j < n_persons - i - 1; j++)
        {
            if (strcmp(persons[j]->name, persons[j + 1]->name) > 0)
            {
                temp = persons[j];
                persons[j] = persons[j + 1];
                persons[j + 1] = temp;
            }
        }
    }
}

void print_sorted()
{
    int i;
    sort_persons();

    printf("Persons [Sorted]:\n");
    for (i = 0; i < n_persons; i++)
    {
        printf("[%d] %s\n", i, persons[i]->name);
    }
}

int main()
{
    int choice;
    printf("**************************************************************\n");
    printf("*                                                            *\n");
    printf("*           HASH TABLE IMPLEMENTATION IN C LANGUAGE          *\n");
    printf("*                                                            *\n");
    printf("**************************************************************\n");
    printf("\nYour Initial hash table :\n");
    init_hash_table(); // initializes and aasigns all values to 0
    print_table();     // prints null table

  
    printf("\n\t:Menu:\t\n \n 🔥1 : Insert pers \n 🔥2 : Delete pers \n 🔥3 : Search person \n 🔥4 : Print Table \n 🔥5 : Print Sorted Table \n 🔥6 : Exit");

    printf("\n\nEnter Your Choice : ");
    scanf("%d",&choice);
  
  do{
    if(choice == 1)
        // insert person in hash table
        insert_person();
    if(choice == 2)   
    {// delete person from hash table
        delete_person();
        print_table();
    }
    if(choice == 3)
        // find person in hash table
        find_person();
    if(choice == 4)
        // printing the table
        print_table();
    if(choice == 5)
        // printing sorted table
      print_sorted();
    if(choice == 6)
    {    // extit from the loop
      printf("\n\t\tThank You");
      break;
    }
    printf("\n\nEnter Your Choice : ");
    scanf("%d",&choice);
  }while(choice != 6);
  
    return 0;
}
```