
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
  int data;
  struct node *next;
  struct node *prev;
};

int temp;
struct node *head = NULL;
struct node *current_node = NULL;
void list(int code)
{
  switch (code)
  {
  case 100 /* constant-expression */:
    /* code */ printf("Code:100  song:I Want It That Way   singer:BackStreet Boys\n");
    break;
  case 101:
    printf("Code:101  song:LoveStory singer:Taylor Swift\n");
    break;
  case 102 /* constant-expression */:
    /* code */ printf("Code:102  song:Best Song Ever singer:One Direction\n");
    break;
  case 103:
    printf("Code:103  song:Down   singer:Jay Sean,Lil Wayne\n");
    break;
  case 104 /* constant-expression */:
    /* code */ printf("Code:104  song:Save Your Tears singer:The weeknd\n");
    break;
  case 105:
    printf("Code:105  song:The Nights                Singer:Avicii\n");
    break;
  case 106 /* constant-expression */:
    /* code */ printf("Code:106  song:Best Song Ever            Singer:One Direction\n");
    break;
  case 107:
    printf("Code:107   Song:Abhi Abhi                     Singer:KK\n");
    break;
  case 108 /* constant-expression */:
    /* code */ printf("Code:108   Song:Baarishein          Singer:Anuv Jain\n");
    break;
  case 109:
    printf("Code:109   Song:Iraaday             Singer:Abdul Hannan\n");
    break;
  case 110 /* constant-expression */:
    /* code */ printf("Code:110   Song:Chaiyya Chaiyya     Singer:Shukhwinder Singh\n");
    break;
  case 111:
    printf("Code:111   Song:Beche Thakar Gan             Singer:Anupam Roy\n");
    break;
  case 112 /* constant-expression */:
    /* code */ printf("Code:112   Song:Jawl Phoring       Singer:Anupam Roy\n");
    break;
  case 113:
    printf("Code:113   Song:Bela Bose          Singer:Anjan Dutta\n");
    break;
  case 114 /* constant-expression */:
    /* code */ printf("Code:114   Song:Ei Obelay          Singer:Shironamhin\n");
    break;
  // case 115:
  //   printf(" song:   code:101  song:Save Your Tears  singer:The weeknd\n");
  //   break;
  default:
    break;
  }
}
void play(int code)
{
  switch (code)
  {
  case 100 /* constant-expression */:
    /* code */ printf("Now Playing.......Code:100  song:I Want It That Way   singer:BackStreet Boys\n");
    system("IWantItThatWay.mp3");
    break;
  case 101:
    printf("Now Playing.......Code:101  song:LoveStory singer:Taylor Swift\n");
    system("LoveStory.mp3");
    break;
  case 102 /* constant-expression */:
    /* code */ printf("Now Playing.......Code:102  song:Best Song Ever singer:One Direction\n");
    system("BestSongEver.mp3");
    break;
  case 103:
    printf("Now Playing.......Code:103  song:Down   singer:Jay Sean,Lil Wayne\n");
    system("Down.mp3");
    break;
  case 104 /* constant-expression */:
    /* code */ printf("Now Playing.......Code:104  song:Save Your Tears singer:The weeknd\n");
    system("SaveYourTears.mp3");
    break;
  case 105:
    printf("Now Playing.......Code:105  song:The Nights                Singer:Avicii\n");
    system("TheNights.mp3");
    break;
  case 106 /* constant-expression */:
    /* code */ printf("Now Playing.......Code:106  song:Best Song Ever            Singer:One Direction\n");
    system("BestSongEver.mp3");
    break;
  case 107:
    printf("Now Playing.......Code:107   Song:Abhi Abhi                     Singer:KK\n");
    system("AbhiAbhi.mp3");
    break;
  case 108 /* constant-expression */:
    /* code */ printf("Now Playing.......Code:108   Song:Baarishein          Singer:Anuv Jain\n");
    system("Baarishein.mp3");
    break;
  case 109:
    printf("Now Playing.......Code:109   Song:Iraaday             Singer:Abdul Hannan\n");
    system("Iraaday.mp3");
    break;
  case 110 /* constant-expression */:
    /* code */ printf("Now Playing.......Code:110   Song:Chaiyya Chaiyya     Singer:Shukhwinder Singh\n");
    system("ChaiyyaChaiyya.mp3");
    break;
  case 111:
    printf("Now Playing.......Code:111   Song:Beche Thakar Gan             Singer:Anupam Roy\n");
    system("BecheThakarGan.mp3");
    break;
  case 112 /* constant-expression */:
    /* code */ printf("Now Playing.......Code:112   Song:Jawl Phoring       Singer:Anupam Roy\n");
    system("JawlPhoring.mp3");
    break;
  case 113:
    printf("Now Playing.......Code:113   Song:Bela Bose          Singer:Anjan Dutta\n");
    system("BelaBose.mp3");
    break;
  case 114 /* constant-expression */:
    /* code */ printf("Now Playing.......Code:114   Song:Ei Obelay          Singer:Shironamhin\n");
    system("EiObelay.mp3");
    break;
  // case 115:
  //   printf(" song:   code:101  song:Save Your Tears  singer:The weeknd\n");
  //   break;
  default:
    break;
  }
  // switch (code)
  // {
  // case 100 /* constant-expression */:
  //   /* code */ printf(" now playing:   code:100  song:The Nights   singer:Avicii\n");
  //   system("TheNights.mp3");
  //   break;
  // case 101:
  //   printf(" now playing:   code:101  song:Save Your Tears  singer:The weeknd\n");
  //   system("SaveYourTears.mp3");
  //   break;

  // default:
  //   printf("Wrong song code\n");
  //   break;
  // }
}

void insert()
{
  // int temp;
  printf("Enter Code of the Music:\n");

  scanf("%d", &temp);
  struct node *new_node = (struct node *)malloc(sizeof(struct node));
  // strcpy(new_node->data, temp);
  new_node->data = temp;
  if (head == NULL)
  {
    new_node->next = new_node->prev = new_node;
    head = current_node = new_node;
    return;
  }
  struct node *last = head->prev;
  new_node->prev = last;
  last->next = new_node;
  new_node->next = head;
  head->prev = new_node;
}

void Delete_element()
{
  if (head == NULL)
  {
    printf("No Music is there to delete!\n");
    return;
  }
  printf("Enter Music Name to delete:\n");
  scanf("%d", &temp);
  printf("\n");
  struct node *ptr = head;
  // ptr->data=temp;
  do
  {
    if (ptr->next == ptr && ptr->data == temp)
    {
      printf("One file deleted! Playlist is Empty Now!\n");
      head = NULL;
      free(ptr);
      return;
    }
    else if (ptr->data == temp)
    {
      struct node *prev = ptr->prev;
      struct node *next = ptr->next;
      prev->next = next;
      next->prev = prev;
      head = next;
      free(ptr);
      printf("Music deleted!\n");
      return;
    }
    ptr = ptr->next;
  } while (ptr != head);
  printf("No Music file is there!\n");
}

void show()
{
  if (head == NULL)
  {
    printf("Playlist is Empty!\n");
    return;
  }
  struct node *show_ptr = head;
  printf("\n");
  int i = 1;
  printf("Displaying Playlist :\n");
  do
  {
    // printf("Song %d : %d\n", i, show_ptr->data);
    list(show_ptr->data);
    i++;
    show_ptr = show_ptr->next;
  } while (show_ptr != head);
}

void next_node()
{
  if (current_node == NULL)
  {
    printf("No songs in Playlist!\n");
  }
  else
  {
    current_node = current_node->next;

    play(current_node->data); // create play function to play song
  }
}

void prev_node()
{
  if (current_node == NULL)
  {
    printf("No songs in Playlist!\n");
  }
  else
  {
    current_node = current_node->prev;
    play(current_node->data); // create play function to play song
  }
}

void first_node()
{
  if (head == NULL)
  {
    printf("Playlist is Empty!\n");
  }
  else
  {
    printf("Playing First Music : %d\n", head->data);

    play(current_node->data); // create play function to play song
  }
}

void last_node()
{
  if (head == NULL)
  {
    printf("Playlist is Empty!\n");
  }
  else
  {
    // printf("Playing Last Music : %s\n", head->prev->data);
    play(head->prev->data); // create play function to play song
  }
}

void specific_data()
{
  if (head == NULL)
  {
    printf("No music is there to be searched!\n");
    return;
  }
  printf("Enter Code of the Music  to detect:\n");
  scanf("%d", &temp);
  // while ((getchar()) != '\n')
  //   ;
  // scanf("%[^\n]%*c", temp);
  printf("\n");
  struct node *ptr = head;
  do
  {
    if (ptr->data == temp)
    {
      printf("Music Found!\n");
      // printf("Playing Music : %s\n", ptr->data);
      play(ptr->data); // create play function to play song
      return;
    }
    ptr = ptr->next;
  } while (ptr != head);
  printf("There is no Music file with this name!\n");
}

int main()
{
  printf("\n\n");
  printf("This Song of Collection We have:\n");
  printf("English:\n");
  printf("Code:100   song:I Want It That Way       Singer:BackStreet Boys\nCode:101  song:LoveStory                 Singer:Taylor Swift\nCode:102  song:Best Song Ever            Singer:One Direction\nCode:103  song:Down                      Singer:Jay Sean,Lil Wayne\nCode:104  song:Save Your Tears           Singer:The weeknd\nCode:105  song:The Nights                Singer:Avicii\nCode:106  song:Best Song Ever            Singer:One Direction\n");
  printf("Hindi:\n");
  printf("Code:107   Song:Abhi Abhi           Singer:KK\nCode:108   Song:Baarishein          Singer:Anuv Jain\nCode:109   Song:Iraaday             Singer:Abdul Hannan\nCode:110   Song:Chaiyya Chaiyya     Singer:Shukhwinder Singh\n");
  printf("Bengali:\n");
  printf("Code:111   Song:Beche Thakar Gan   Singer:Anupam Roy\nCode:112   Song:Jawl Phoring       Singer:Anupam Roy\nCode:113   Song:Bela Bose          Singer:Anjan Dutta\nCode:114   Song:Ei Obelay          Singer:Shironamhin\n");
  printf("");

  int choice;
menu:
  printf("\n-----Song Playlist Application-----\n");
  printf("1. Add Music\n");
  printf("2. Remove Music\n");
  printf("3. Show Playlist\n");
  printf("4. Play next Song\n");
  printf("5. Play previous Song,\n");
  printf("6. Play First Song\n");
  printf("7. Play Last Song\n");
  printf("8. Play specific Song.\n");
  printf("9. Exit\n\n");
  scanf("%d", &choice);

  if (choice == 1)
    insert();

  else if (choice == 2)
    Delete_element();

  else if (choice == 3)
    show();

  else if (choice == 4)
    next_node();

  else if (choice == 5)
    prev_node();

  else if (choice == 6)
    first_node();

  else if (choice == 7)
    last_node();

  else if (choice == 8)
    specific_data();
  else if (choice == 9)
    exit(0);
  // else
  goto menu;
  return 0;
}
