CC=g++
CFLAGS=-I. -Wall -std=gnu++11

mastermind: models/src/* models/include/* controllers/src/* controllers/include/* views/src/* views/include/*
	g++ -std=c++11 -o mastermind models/src/* models/include/* controllers/src/* controllers/include/* views/src/* views/include/* -I.
