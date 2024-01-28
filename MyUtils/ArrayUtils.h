#pragma once
#include "pch.h"


#ifndef ARRAYUTILA_H
#define ARRAYUTILA_H

#ifdef MYUTILS_EXPORTS
#define ARRAYUTILA_API __declspec(dllexport)
#else
#define ARRAYUTILA_API __declspec(dllimport)
#endif

using LEN = int;	// ���鳤������



class ARRAYUTILA_API ArrayUtils
{
public:
	/*
	* ��ȡ����ĳ���
	* args: ����
	* return: ����
	*/
	template<class T>
	static LEN length(T& arr)
	{
		return sizeof(arr) / sizeof(arr[0]);
	}
	/*
	* ������ƴ�ӳ��ַ���
	* args: ����, ��ʼ�ַ�, �ָ���, �����ַ� 
	* return: �ַ���
	*/
	template<class T>
	static std::string toString(T& arr, std::string start, std::string separator, std::string end)
	{
		std::string s = start;
		LEN len = length(arr);
		for (int i = 0; i < len; i++)
		{
			s += std::to_string(arr[i]);
			if (i != len - 1)
			{
				s += separator;
			}
		}
		s += end;
		return s;
	}
	/*
	* ������ƴ�ӳ��ַ���
	* args: ����
	* return: �ַ���
	*/
	template<class T>
	static std::string toString(T& arr)
	{
		return toString(arr, "[", ", ", "]");
	}
};

#endif ARRAYUTILA_H
