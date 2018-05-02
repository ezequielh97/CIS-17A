#pragma once
class Player 
{
private:
	int totalPoints;
	int roundPoints;
	bool turn;
public:
	Player()
	{
		totalPoints = 0;
		roundPoints = 0;
		turn = false;


	}
	void setTotalPoints();
	void setRoundPoints();
	void setTurn();

	int getTotalPonts();
	int GetRoundPoints();
	int getTurn();


	void setTotalPoints()
	{
		totalPoints += roundPoints;
	}

	void setRoundPoints(int p)
	{

		roundPoints = p;
	}

	void setTurn(bool turn)
	{
		this->turn = turn;
	}

	int getTotalPoints()
	{
		return totalPoints;
	}


};

