#pragma once
class Alive
{
public:
	Alive();
	Alive(float Hp);
	~Alive();

	virtual float GetHp() { return m_hp; }
	virtual float GetMaxHp() { return m_maxHp; }

	virtual void TakeDamage(const float& damage) { m_hp -= damage; }

protected:
	float m_maxHp;
	float m_hp;
};