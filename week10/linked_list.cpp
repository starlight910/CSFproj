#include <cassert>
#include <cstddef>

namespace linked_list
{

template <class T>
struct Node
{
    T elem;
    Node<T>* next;
};

template <class T>
class LinkedList
{
public:
    // Default constructor
    LinkedList()
    {
    }

    /* Copy constructor -- Extra credit
    LinkedList(LinkedList const& ll)
    {
    }
    */

    // Destructor
    ~LinkedList()
    {
    }

    size_t size() const
    {
        return ~0;
    }

    bool empty() const
    {
        return false;
    }

    void push_front(T const& t)
    {
    }

    T pop_front()
    {
        return {};
    }

    T remove(size_t index)
    {
        return {};
    }

    T get(size_t index)
    {
        return {};
    }

    bool operator==(LinkedList const& ll) const
    {
        return false;
    }

    bool operator!=(LinkedList const& ll) const
    {
        return false;
    }

private:
    Node<T>* root_;
    size_t size_;
};

}

int main()
{
    // To check they init size_ to 0 in the constructor loop through 100
    // constructors to hit some memory they have used.
    for (int i = 0; i < 100; i++)
    {
        linked_list::LinkedList<int> ll;
        assert(ll.empty());
    }

    // Fresh zero size and root should == nullptr
    linked_list::LinkedList<int> ll;
    assert(ll.empty());

    // Push 3 to the front, increment size by 1
    ll.push_front(3);
    assert(ll.size() == 1);

    // Push 4 to the front, which will point to 3, increment size by 1
    ll.push_front(4);
    assert(ll.size() == 2);

    // Check ordering, since you push to the front always last insert should be first
    // ie. 4, 3 should be the ordered
    assert(ll.get(0) == 4);
    assert(ll.get(1) == 3);

    // Same as the other pushes
    ll.push_front(5);
    assert(ll.size() == 3);

    // Same as the other pushes
    ll.push_front(6);
    assert(ll.size() == 4);

    // Remove from an index, which 1 will be the second element which 5 is the
    // second to last one pushed. 6 should be the first one
    assert(ll.remove(1) == 5);
    // Assert they decremented the size as well
    assert(ll.size() == 3);

    // Will remove the front element which should be 6
    assert(ll.pop_front() == 6);
    // Assert they decremented the size as well
    assert(ll.size() == 2);

    linked_list::LinkedList<int> ll2;
    assert(ll2.empty());

    // ll2 is empty so it should not equal ll
    assert(ll != ll2);

    ll2.push_front(3);
    ll2.push_front(4);

    // Now they should be equal
    assert(ll == ll2);

    ll.pop_front();
    ll.pop_front();

    assert(ll != ll2);
    assert(ll.empty());

    /* EXTRA CREDIT - Copy constructor

    linked_list::LinkedList<int> ll3(ll2);
    assert(ll3 == ll2);

    */
}