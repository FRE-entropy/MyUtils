#pragma once
#include "pch.h"


#ifndef ARRAYUTILA_H
#define ARRAYUTILA_H

#ifdef MYUTILS_EXPORTS
#define ARRAYUTILA_API __declspec(dllexport)
#else
#define ARRAYUTILA_API __declspec(dllimport)
#endif

using LEN = int;	// 数组长度类型



class ARRAYUTILA_API ArrayUtils
{
public:
	/*
	* 获取数组的长度
	* args: 数组
	* return: 长度
	*/
	template<class T>
	static LEN length(T& arr)
	{
		return sizeof(arr) / sizeof(arr[0]);
	}
	/*
	* 将数组拼接成字符串
	* args: 数组, 起始字符, 分隔符, 结束字符 
	* return: 字符串
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
	* 将数组拼接成字符串
	* args: 数组
	* return: 字符串
	*/
	template<class T>
	static std::string toString(T& arr)
	{
		return toString(arr, "[", ", ", "]");
	}
};

#endif ARRAYUTILA_H
