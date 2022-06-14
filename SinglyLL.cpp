#include"SinglyLL.h"


template<class T>
void SinglyLL<T>::insertAtHead(T value)
{
    Node<T>* nn = new Node<T>(value);
    nn->next = head;
    head = nn;
}

template<class T>
void SinglyLL<T>::display()
{
    if (head != nullptr) //LL is NOT empty
    {
        Node<T>* t = head;
        while (1)
        {
            cout << t->data << endl;
            if (t->next != nullptr) {
                t = t->next;
            }
            else
                break;
        }
    }
    else
    {
        cout << "LL is empty" << endl;
    }
}

template<class T>
void SinglyLL<T>::insertDescending(T value)
{

    if (head == nullptr)
    {
        Node<T>* n = new Node<T>(value);
        head = n;
    }

    else if (value >= head->data)
    {
        insertAtHead(value);
    }

    else
    {
        Node<T>* n = new Node<T>(value);

        Node<T>* t = head;
        while (1)
        {
            if (t->next == nullptr)
            {
                t->next = n;
                break;
            }

            if (t->next->data <= value)
            {
                //new Node to be inserted after t
                //insert in between
                //do not forget it...

                n->next = t->next;

                t->next = n;

                break;
            }

            else
                t = t->next;
        }
    }

}

template<class T>
bool SinglyLL<T>::deleteValue(T value)
{
    if (head == nullptr) //empty LL
        return false;

    else if (value == head->data) //head data deletion
    {
        if (head->next == nullptr) // single Node
        {
            delete head;
            head = nullptr;
        }

        else //all other cases
        {
            Node<T>* t = head;
            head = head->next;
            delete t;
            t = nullptr;
        }
        return true;
    }
    else
    {
        Node<T>* t = head;

        while (1)
        {
            if (t->next->data == value)
            {
                //delete
                if (t->next->next == nullptr) // last Node of the LL
                {
                    delete t->next;
                    t->next = nullptr;
                    return true;
                }

                Node<T>* temp2 = t->next;
                t->next = temp2->next;
                delete temp2;
                temp2 = nullptr;
                return true;
            }
            else
                t = t->next;
            if (t->next == nullptr)
                return false;
        }
    }
}

template<class T>
SinglyLL<T>::~SinglyLL()
{
    //TODO by yourself
}