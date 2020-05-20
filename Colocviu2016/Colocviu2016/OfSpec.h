#pragma once
#include "Pizza.h"
#include "PizzaSpec.h"
#include "Bautura.h"
class OfSpec :
	public Pizza,public PizzaSpec,public Bautura
{
};

