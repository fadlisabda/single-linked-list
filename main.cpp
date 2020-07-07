// there are Indonesian and English
// English
// single linked list
// #include <iostream>
// using namespace std;

// class node // class to create a node
// {
// public:
//       int value; // for values ​​on the node
//       node * next; // to go to the next node

//    node (int va, node * n) // fill in the node and pointer values
//    {
//      value = va;
//       next = n;
//    }

//    node ()
//    {
//    }
// };

// class dlist // class to create a linked list in prototype form
// {
//      public:
//          void insert (int value); // add node values
//          void remove (); // delete the node value
//          void insertbefore (int value, int pos); // make the node in the desired position
//          void print (); // displays all node values
//          int isempty (); // returns the value 1 if the node is empty, returns the value 0 if the node contains

//       dlist ()
//       {
//       head = nullptr; // set head 0
//       }

//       private:
//         node * head; // make head
// };
// static int list = 0; // stores the value of the node added and subtracted


// int dlist :: isempty () // checks for empty or contained nodes
// {
//    if (this-> head == nullptr)
//    return 1;
//    else
//    return 0;
// }

// void dlist :: insert (int val)
// {
// node * newnode;
//    newnode = new node (); // creates a newnode object

//    if (isempty () == 1) // if the node is empty
//    {
//    this-> head = newnode; // new node is made head
//       newnode-> value = val; // given a value
//       newnode-> next = nullptr; // the next node is null
//    } else // if the node contains
//    {
//    newnode-> next = this-> head; // a new node is created in front of the head
//       newnode-> value = val; // new node is assigned a value
//       this-> head = newnode; // new node is made head
//    }
//    list ++; // number of nodes added
// }


// void dlist :: remove ()
// {
// if (isempty () == 1) // if the node is empty
//    cout << "Sorry, the linked list is empty" << endl;
//    else // if the node contains
//    this-> head = this-> head-> next; // head is moved to the previous node
//    list -; // reduces the number of nodes
// }

// void dlist :: insertbefore (int value, int post)
// {
//    if (isempty () == 1) // if the node is empty
//    cout << "Sorry, the linked list is empty" << endl;
//    else // if the node contains
//    {
//      if ((pos> = list) || pos == 1) // if the position is smaller or the position does 1 run else
//        cout << "list number is too low or list is incorrect" << endl;
//      else
//      {
//     node * newnode = head; // newnode object is made head
//            node * fixed; // fixed object to store values ​​and pointers
//    for (int i = 1; i <pos-1; i ++) // searches for node values ​​up to the input position
//       {
//       newnode = newnode-> next; // goes to the next node until the loop stops
// }
//            fixed = new node ((value), newnode-> next); // fixed stores values ​​and pointers
//            newnode-> next = fixed; // exchange node with fixed
//            list ++; // number of nodes has increased
//      }
//    }
// }

// void dlist :: print ()
// {
// node * newnode = head; // newnode is made head

//    while (newnode! = nullptr) // repeats until null if the null node stops
//    {
//    cout << "Fill list:" <<newnode-> value << endl; // displays the contents of the node value
//       newnode = newnode-> next; // goes to the next node
//    }
// }

// int main ()
// {
// int n;
//    dlist * st; // st object to call a function
//    st = new dlist ();

//    char choose;
//    cout << "Linkedlist operation" << endl;
//    cout << "1. insert" << endl;
//    cout << "2. remove" << endl;
//    cout << "3. insert before" << endl;
//    cout << "4. Exit" << endl;

//    do {
//    cout << endl;
//    cout << "Options:";
//       cin >> select;

//       switch (select)
//       {
//          case '1':
//              cout << "enter data:";
//                   cin >> n;
//                   st-> insert (n);
//                   st-> print ();
//             break;
//          case '2':
//          char n2;
//          cout << "Are you sure you want to delete? y / n";
//                   cin >> n2;
//                   if (n2 == 'y')
//                   {
//                      st-> remove ();
//                      st-> print ();
//                   } else
//                   {
//                       cout << "Thanks";
//                   }
//                   break;
//          case '3':
// int post;
//                   cout << "enter data:";
//                   cin >> n;
//                   cin.get ();
//                   cout << "enter position:";
//                   cin >> post;
//                   st-> insertbefore (n, post);
//                   st-> print ();
//           break;
//          case '4':
//          cout << "thank you:";
//                   break;
//          default:

//          cout << "wrong choice";
//                   break;
//       }
//    } while (select! = '4');
// }

//INDONESIAN
//single linked list
#include <iostream>
using namespace std;

class node//class untuk membuat node
{
public:
      int value;//untuk nilai pada node
      node *next;//untuk menuju node berikutnya

   node(int va, node *n)//mengisi nilai node dan pointer
   {
     value=va;
      next=n;
   }

   node()
   {
   }
};

class dlist//class untuk membuat linked list dalam bentuk prototype 
{
     public:
         void insert(int value);//menambahkan nilai node
         void remove();//menghapus nilai node 
         void insertbefore(int value, int pos);//membuat node pada posisi yang diinginkan
         void print();//menampilkan seluruh nilai node
         int isempty();//mengembalikan nilai 1 jika node kosong,mengembalikan nilai 0 jika node berisi

      dlist()
      {
      	head=nullptr;//mengeset head 0
      }

      private:
        node *head;//membuat head
};
static int list=0;//menyimpan nilai node yang ditambah dan dikurang


int dlist::isempty()//mengecek node kosong atau berisi
{
   if(this->head==nullptr)
   	return 1;
   else
   	return 0;
}

void dlist::insert(int val)
{
	node *newnode;
   newnode=new node();//membuat objek newnode

   if(isempty()==1)//jika node kosong
   {
   	this->head=newnode;//node baru dijadikan head
      newnode->value=val;//di beri nilai
      newnode->next=nullptr;//node berikutnya null
   }else//jika node berisi
   {
   	newnode->next=this->head;//node baru dibuat didepan head
      newnode->value=val;//node baru dikasi nilai
      this->head=newnode;//node baru dijadikan head
   }
   list++;//jumlah node ditambah
}


void dlist::remove()
{
	if(isempty()==1)//jika node kosong
   	cout<<"Maaf, linked list kosong"<<endl;
   else//jika node berisi
   	this->head=this->head->next;//head dipindahkan ke node sebelumnya
   list--;//mengurangi jumlah node
}

void dlist::insertbefore(int value, int pos)
{
   if(isempty()==1)//jika node kosong
   	cout<<"Maaf, linked list kosong"<<endl;
   else//jika node berisi
   {
     if((pos>=list) || pos==1)//jika posisi lebih kecil atau posisi tidak 1 menjalankan else
       cout<<"jumlah list terlalu sedikit atau list yang salah"<<endl;
     else
     {
    	    node *newnode=head;//objek newnode dijadikan head
           node *fixed;//objek fixed untuk menyimpan nilai dan pointer
   	    for(int i=1;i<pos-1;i++)//mencari nilai node sampai posisi yang di inputkan
      	    {
      		newnode=newnode->next;//menuju node berikutnya sampai perulangan berhenti
	    }
           fixed=new node((value),newnode->next);//fixed menyimpan nilai dan pointer
           newnode->next=fixed;//penukaran node dengan fixed
           list++;//jumlah node bertambah
     }
   }
}

void dlist::print()
{
	node *newnode=head;//newnode dijadikan head

   while(newnode!=nullptr)//berulang sampai null jika node null berhenti
   {
   	cout<<"Isi list :"<<newnode->value<<endl;//menampilkan isi nilai node
      newnode=newnode->next;//menuju node berikutnya
   }
}

int main()
{
	int n;
   dlist *st;//objek st untuk memanggil fungsi
   st=new dlist();

   char pilih;
   cout<<"Operasi linkedlist "<<endl;
   cout<<"1. insert"<<endl;
   cout<<"2. remove"<<endl;
   cout<<"3. insert before"<<endl;
   cout<<"4. Exit"<<endl;

   do{
   	cout<<endl;
   	cout<<"Pilihan :";
      cin>>pilih;

      switch(pilih)
      {
         case '1':
             	  cout<<"masukkan data :";
                  cin>>n;
                  st->insert(n);
                  st->print();
            	    break;
         case '2':
         	  char n2;
         	  cout<<"Anda yakin untuk menghapus ? y/n ";
                  cin>>n2;
                  if(n2=='y')
                  {
                     st->remove();
                     st->print();
                  }else
                  {
                      cout<<"Thanks";
                  }
                  break;
         case '3':
		         int pos;
                  cout<<"masukkan data :";
                  cin>>n;
                  cin.get();
                  cout<<"masukkan posisi:";
                  cin>>pos;
                  st->insertbefore(n,pos);
                  st->print();
          	    break;
         case '4':
         	 cout<<"terima kasih :";
                  break;
         default:

         	 cout<<"salah pilih";
                  break;
      }
   } while(pilih!='4');
