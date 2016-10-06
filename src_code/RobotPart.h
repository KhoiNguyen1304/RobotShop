#ifndef __ROBOTPART_H
#define	__ROBOTPART_H 2016

class RobotPart {
	public:
		RobotPart(string kname, int kpartNumber, double kweight, double kcost,
			      string kdescription, PartType kpartType);
		string GetName();
		int GetPartNumber();
		double GetWeight();
		double GetCost();
		string GetDescription();
		PartType GetPartType();
		string ToString();
		string GetPartTypeString();

	protected:
		string name;
		int partNumber;
		double weight;
		double cost;
		string description;
		PartType partType;
};
#endif