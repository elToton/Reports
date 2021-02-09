#pragma once
#include "IStaffDAL.h"

template <class T>
class IRepositoryDAL
{
private:
	vector<T*> Enities;
public:
	vector<T*> GetAll();
	T* Get(int id);
	void Create(T* obj);
	void Delete(T* obj);
};

template<class T>
inline vector<T*> IRepositoryDAL<T>::GetAll()
{
	return Enities;
}

template<class T>
inline T* IRepositoryDAL<T>::Get(int id)
{
	for (int i = 0; i < Enities.size(); i++) {
		if (Enities[i]->GetID() == id) return Enities[i];
	}
}

template<class T>
inline void IRepositoryDAL<T>::Create(T* obj)
{
	Enities.push_back(obj);
}

template<class T>
inline void IRepositoryDAL<T>::Delete(T* obj)
{
	int id = obj->GetID();
	for (int i = 0; i < Enities.size(); i++) {
		if (Enities[i]->GetID() == id) {
			Enities.erase(Enities.begin() + i);
			break;
		}
	}
}
