#pragma once

class CDateObject : public CObject
{
	DECLARE_NODE(CDateObject, CObject)
public:
	CDateObject();

	int getDate();
	int getDay();
	int getFullYear();
	int getHours();
	int getMilliseconds();
	int getMinutes();
	int getMonth();
	int getSeconds();
	int getUTCDate();
	int getUTCDay();
	int getUTCFullYear();
	int getUTCHours();
	int getUTCMilliseconds();
	int getUTCMinutes();
	int getUTCMonth();
	int getUTCSeconds();
	int getYear();

	int isLeapYear(int nYear);
	int getDaysInMonth(int nMonth, int nYear);

	void SetSystemClock();

	CStrObject* toGMTString();
	CStrObject* toLocaleString();
	CStrObject* toUTCString();

	FILETIME m_time; // 100-nanosecond intervals since January 1, 1601

	DECLARE_NODE_FUNCTIONS()
};
