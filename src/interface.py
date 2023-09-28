from collections import deque

class Exchange:
    # implement this!

    def __init__(self, initialBalance, validTrades):
        """Initial Balance is the amount that each account should start with."""
        self.pending = {}
        self.initialBalance = initialBalance
        self.valid_stocks = set(validTrades)

    def add_trade(self, trade):
        """Adds a trade to the exchange (validation required)
        and returns a match if required. It is up to you on how you will
        handle representing trades. """
        try:
            (stock, requester) = trade
        except:
            raise Exception
        
        if stock not in self.valid_stocks:
            raise Exception
        
        if not stock in self.pending or not self.pending[stock]:
            self.pending[stock] = deque([requester])
            return None
        else:
            counterparty = self.pending[stock].popleft()
            return (stock, requester, counterparty)
