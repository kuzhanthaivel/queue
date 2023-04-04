class Queue:
    def __init__(self):
        self.items = []

    def enqueue(self, item):
        self.items.append(item)

    def dequeue(self):
        if len(self.items) == 0:
            print("Queue Underflow")
            return -1
        return self.items.pop(0)

if __name__ == '__main__':
    queue = Queue()
    queue.enqueue(10)
    queue.enqueue(20)
    queue.enqueue(30)
    print(queue.dequeue()) # Output: 10
    print(queue.dequeue()) # Output: 20
    queue.enqueue(40)
    print(queue.dequeue()) # Output: 30
    print(queue.dequeue()) # Output: 40
    print(queue.dequeue()) # Output: Queue Underflow
