public class HelloThread extends Thread {
    public void run() {
        System.out.println("Hola desde el hilo " + Thread.currentThread().getName());
    }

    public static void main(String[] args) {
        HelloThread myThread = new HelloThread();
        myThread.start();  // Inicia la ejecución del hilo
    }
}
