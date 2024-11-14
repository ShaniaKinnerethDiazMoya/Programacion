public class MultiThreadExample implements Runnable {
    private String threadName;

    public MultiThreadExample(String threadName) {
        
        this.threadName = threadName;
    }

    public void run() {
        System.out.println("Hilo " + threadName + " está corriendo.");
        try {
            Thread.sleep(500);  // Simula una tarea que toma 500 milisegundos
        } catch (InterruptedException e) {
            System.out.println("Hilo " + threadName + " interrumpido.");
        }
        System.out.println("Hilo " + threadName + " terminó.");
    }

    public static void main(String[] args) {
        Thread[] threads = new Thread[5];
        for (int i = 0; i < threads.length; i++) {
            threads[i] = new Thread(new MultiThreadExample("Thread " + (i + 1)));
            threads[i].start();
        }

        for (Thread t : threads) {
            try {
                t.join();  // Espera a que el hilo t termine
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }

        System.out.println("Todos los hilos han terminado. Continuando con el hilo principal.");
    }
}
