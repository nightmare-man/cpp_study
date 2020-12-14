#ifndef TICKET_MACHINE_H
#define TICKET_MACHINE_H
class TicketMachine{
	public:
		TicketMachine();
		virtual ~TicketMachine();
		void showPrompt();
		void insertMoney(int money);
		void showBalance();
	private:
		const int PRICE;
		int balance;
		int total;
};
#endif
