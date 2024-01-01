class Node
{
    Node left, right;
    int key;

    /*Node()
    {
        left()
    {
        left = right = null;
    }*/
    Node(int data)
    {
        key = data;
        left = right = null;
    }
}

public class Tree {
    Node root;
    Tree()
    {
        root = null;
    }
    Tree(int key)
    {
        root = new Node(key);
    }

    //Traverse Inorder
    public void traverseInOrder(Node node)
    {
        if (node != null)
        {
            traverseInOrder(node.left); 
            System.out.print(" " + node.key);
            traverseInOrder(node.right);
        }
    } 

  // Traverse Postorder
    public void traversePostOrder(Node node)
    {
    if (node != null) {
        traversePostOrder(node.left);
        traversePostOrder(node.right);
        System.out.print(" " + node.key);
    }
    }
// Traverse Preorder
    public void traversePreOrder(Node node)
    {
    if (node != null) {
        System.out.print(" " + node.key);
        traversePreOrder(node.left);
        traversePreOrder(node.right);
    }
    }

    // Node root = new Node();


    public static void main(String[] args)
    {
        Tree tree = new Tree(1);
        tree.root.left = new Node(2);
        tree.root.right = new Node(3);
        tree.root.left.left = new Node(4);
        tree.root.right.left = new Node(5);
        tree.root.right.right = new Node(6);

        // System.out.println();
        System.out.print("\nIn order Traversal: ");
        tree.traverseInOrder(tree.root);
        System.out.print("\nPost order Traversal: ");
        tree.traversePostOrder(tree.root);        
        System.out.print("\nPre order Traversal: ");
        tree.traversePreOrder(tree.root);
        System.out.println();

    }
}
