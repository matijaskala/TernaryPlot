#include "ComponentStructured.h"
#include "NoTransformation.h"
#include "ScoreSelection.h"
#include "UnitaryCapping.h"


class SequentiallySpentScore : public ComponentStructured
{
public:
	SequentiallySpentScore();

private:
	NoTransform _trans;
	ScoreSelection _select;
	UnitaryCapping _reweight;
};