﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t69676727;
// GameController
struct GameController_t3607102586;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIManagerController
struct  UIManagerController_t1838950257  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animator UIManagerController::animBtnStart
	Animator_t69676727 * ___animBtnStart_2;
	// UnityEngine.Animator UIManagerController::pnlScoreBoard
	Animator_t69676727 * ___pnlScoreBoard_3;
	// UnityEngine.Animator UIManagerController::pnlInstructionBoard
	Animator_t69676727 * ___pnlInstructionBoard_4;
	// System.Boolean UIManagerController::isQuestionMark_click
	bool ___isQuestionMark_click_5;
	// GameController UIManagerController::gameController
	GameController_t3607102586 * ___gameController_6;

public:
	inline static int32_t get_offset_of_animBtnStart_2() { return static_cast<int32_t>(offsetof(UIManagerController_t1838950257, ___animBtnStart_2)); }
	inline Animator_t69676727 * get_animBtnStart_2() const { return ___animBtnStart_2; }
	inline Animator_t69676727 ** get_address_of_animBtnStart_2() { return &___animBtnStart_2; }
	inline void set_animBtnStart_2(Animator_t69676727 * value)
	{
		___animBtnStart_2 = value;
		Il2CppCodeGenWriteBarrier(&___animBtnStart_2, value);
	}

	inline static int32_t get_offset_of_pnlScoreBoard_3() { return static_cast<int32_t>(offsetof(UIManagerController_t1838950257, ___pnlScoreBoard_3)); }
	inline Animator_t69676727 * get_pnlScoreBoard_3() const { return ___pnlScoreBoard_3; }
	inline Animator_t69676727 ** get_address_of_pnlScoreBoard_3() { return &___pnlScoreBoard_3; }
	inline void set_pnlScoreBoard_3(Animator_t69676727 * value)
	{
		___pnlScoreBoard_3 = value;
		Il2CppCodeGenWriteBarrier(&___pnlScoreBoard_3, value);
	}

	inline static int32_t get_offset_of_pnlInstructionBoard_4() { return static_cast<int32_t>(offsetof(UIManagerController_t1838950257, ___pnlInstructionBoard_4)); }
	inline Animator_t69676727 * get_pnlInstructionBoard_4() const { return ___pnlInstructionBoard_4; }
	inline Animator_t69676727 ** get_address_of_pnlInstructionBoard_4() { return &___pnlInstructionBoard_4; }
	inline void set_pnlInstructionBoard_4(Animator_t69676727 * value)
	{
		___pnlInstructionBoard_4 = value;
		Il2CppCodeGenWriteBarrier(&___pnlInstructionBoard_4, value);
	}

	inline static int32_t get_offset_of_isQuestionMark_click_5() { return static_cast<int32_t>(offsetof(UIManagerController_t1838950257, ___isQuestionMark_click_5)); }
	inline bool get_isQuestionMark_click_5() const { return ___isQuestionMark_click_5; }
	inline bool* get_address_of_isQuestionMark_click_5() { return &___isQuestionMark_click_5; }
	inline void set_isQuestionMark_click_5(bool value)
	{
		___isQuestionMark_click_5 = value;
	}

	inline static int32_t get_offset_of_gameController_6() { return static_cast<int32_t>(offsetof(UIManagerController_t1838950257, ___gameController_6)); }
	inline GameController_t3607102586 * get_gameController_6() const { return ___gameController_6; }
	inline GameController_t3607102586 ** get_address_of_gameController_6() { return &___gameController_6; }
	inline void set_gameController_6(GameController_t3607102586 * value)
	{
		___gameController_6 = value;
		Il2CppCodeGenWriteBarrier(&___gameController_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
