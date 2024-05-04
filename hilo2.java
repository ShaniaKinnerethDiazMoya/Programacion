public class RunnableExample implements Runnable {
    public void run() {
        System.out.println("Hola desde el hilo " + Thread.currentThread().getName());
    }

    public static void main(String[] args) {
        Thread myThread = new Thread(new RunnableExample());
        myThread.start();  // Inicia la ejecución del hilo
    }
}
