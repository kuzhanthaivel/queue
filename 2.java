import java.util.LinkedList;

public class Queue {
    private LinkedList<Integer> list = new LinkedList<>();

    public void enqueue(int item) {
        list.addLast(item);
    }

    public int dequeue() {
        if (list.isEmpty()) {
            System.out.println("Queue Underflow");
            return -1;
        }
        return list.removeFirst();
    }

    public static void main(String[] args) {
        Queue queue = new Queue();
        queue.enqueue(10);
        queue.enqueue(20);
        queue.enqueue(30);
        System.out.println(queue.dequeue()); // Output: 10
        System.out.println(queue.dequeue()); // Output: 20
        queue.enqueue(40);
        System.out.println(queue.dequeue()); // Output: 30
        System.out.println(queue.dequeue()); // Output: 40
        System.out.println(queue.dequeue()); // Output: Queue Underflow
    }
}
