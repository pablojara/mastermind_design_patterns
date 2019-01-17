#ifndef STATE_H
#define STATE_H


enum class State {
	INITIAL,
	IN_GAME,
	UNDO,
	REDO,
	SAVE,
	FINAL, 
	EXIT
};

#endif