struct Link {
    int element;
    Link* next;
    
    Link(int element, Link* next) {
        this->element = element;
        this->next = next;
    }
};

struct List {
    Link* head;
    
    void push(int element) {
        Link* new_node = new Link(element, nullptr);
        this->head = new_node;
    }
    
    void pop() {
        Link* new_head = this->head->next;
        delete this->head;
        this->head = new_head;
    }
};

int main() { }