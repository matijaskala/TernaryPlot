#include "ReweightingComponent.h"

class UnitaryCapping : public ReweightingComponent
{
public:
	UnitaryCapping();
	void ReweightBallots(std::vector<ScoreBallot> &ballots, unsigned lastWinner) override;
};