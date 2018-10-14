CC=g++
CFLAGS=-I. -Wall

mastermind: models/src/* models/include/* controllers/src/* controllers/include/*
	g++ -o mastermind models/src/* models/include/* controllers/src/* controllers/include/* -I.
