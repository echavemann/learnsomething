class linkUtil:

    def __init__(self):
        return
    
    def compute_primes(self, latency):
        return set()

    def compute_hash(self, latency):
        #if sum of prime factors is less than 10k, then its a match 
        primes = self.compute_primes(latency)
        if (sum(primes) < 10_000):
            return False
        return True

