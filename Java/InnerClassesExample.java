// Outer class
public class InnerClassesExample {
    
    // Member Inner class
    private class MemberInner {
        public void display() {
            System.out.println("Inside Member Inner class");
        }
    }
    
    // Method with local inner class
    public void localInnerClassExample() {
        // Local inner class inside a method
        class LocalInner {
            public void display() {
                System.out.println("Inside Local Inner class");
            }
        }
        
        LocalInner localInner = new LocalInner();
        localInner.display();
    }
    
    // Static nested class
    static class StaticNested {
        public void display() {
            System.out.println("Inside Static Nested class");
        }
    }
    
    // Anonymous inner class
    interface AnonymousInner {
        void display();
    }
    
    public void anonymousInnerClassExample() {
        AnonymousInner anonymousInner = new AnonymousInner() {
            @Override
            public void display() {
                System.out.println("Inside Anonymous Inner class");
            }
        };
        
        anonymousInner.display();
    }
    
    // Nested interface
    interface NestedInterface {
        void display();
    }
    
    static class ImplementNestedInterface implements NestedInterface {
        @Override
        public void display() {
            System.out.println("Inside Nested Interface implementation");
        }
    }

    public static void main(String[] args) {
        InnerClassesExample outer = new InnerClassesExample();
        
        // Member Inner class usage
        InnerClassesExample.MemberInner memberInner = outer.new MemberInner();
        memberInner.display();
        
        // Local inner class usage
        outer.localInnerClassExample();
        
        // Static nested class usage
        InnerClassesExample.StaticNested staticNested = new InnerClassesExample.StaticNested();
        staticNested.display();
        
        // Anonymous inner class usage
        outer.anonymousInnerClassExample();
        
        // Nested interface implementation usage
        InnerClassesExample.ImplementNestedInterface nestedInterface = new InnerClassesExample.ImplementNestedInterface();
        nestedInterface.display();
    }
}

