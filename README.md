# Part 2: Company Hackathon

## Scenario
It is now November, so it is time for the company hackathon! Unfortunately, most of your coworkers are focusing on getting their bonuses higher for the holidays, so there is not much competition. 
In order to qualify for the contest prize, which remains a surprise until the end, you must beat a baseline trading strategy with your strategy. 
Fortunately, your friend that is a QR was happy to give you some simple rules to build a strategy. You will need to build a strategy around those rules, pass all of the provided test cases, 
win the competition, and submit proof that you won in your PR. Good Luck!

## Ruleset
- You can only have 1 stock at a time, and cannot short a stock (can't sell without having an explicit stock)
- Assume the initial stock cost was 100
- If the stock goes up in price for 52 windows, sell
- If the stock goes down in price for 47 windows, sell
- If the stock drops by over 62% from the purchase price bought, sell
- If the stock raises by over 89% from the purchase price bought, sell
- If (after buying) the stock raises by >= 20%, drops by <= 15%, raises again by >= 30% and the percent change in the 3 series window is up by >= 50% sell
- If (after buying) the stock drops by <= 15%, raises by >= 15%, drops again by >= 25% and the percent change OVERALL is down by >= 45% sell
- If stock stays +-5% for 10 cycles (after buying), sell
- If the stock price is less than 52, buy
- If the stock drops in price for 5 windows (after selling), buy

## Instructions
- [ ] Use Poetry to get the dependencies of the project. 
- [ ] Implement a rules based C++ strategy that abides by the given rules! Check this after all tests pass.
- [ ] Improve the strategy so that you are able to beat the qualifying algorithm!
- [ ] Create a PR answering the below questions.

## Questions
Please include the following when you are writing your PR:   
General things:   
1. What is the purpose of this PR?
2. What changes did you make? Why?
3. What bugs did you find while testing?

This PR Specific:
1. What code did the exchange give you after you won?
2. What challenges did you face?
