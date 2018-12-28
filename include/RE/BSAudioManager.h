#pragma once

#include "RE/BSAudioManagerThread.h"  // BSAudioManagerThread
#include "RE/BSFixedString.h"  // BSFixedString
#include "RE/BSTHashMap.h"  // BSTHashMap
#include "RE/BSXAudio2GameSound.h"  // BSXAudio2GameSound


namespace RE
{
	struct SoundData;


	class BSAudioManager
	{
	public:
		typedef UInt32 UnkKey;
		typedef UInt64 UnkValue;

		static BSAudioManager*	GetSingleton();
		bool					SetUp(SoundData& a_soundData, UInt32 a_soundFormID);


		// members
		UInt64									unk000;	// 000
		void*									unk008;	// 008
		void*									unk010;	// 010
		void*									unk018;	// 018
		void*									unk020;	// 020
		UInt64									unk028;	// 028
		BSTHashMap<UInt32, BSXAudio2GameSound*>	unk030;	// 030
		BSTHashMap<UnkKey, UnkValue>			unk060;	// 060
		BSTHashMap<UnkKey, UnkValue>			unk090;	// 090
		BSTHashMap<UnkKey, UnkValue>			unk0C0;	// 0C0
		UInt64									unk0F0;	// 0F0
		BSAudioManagerThread*					unk0F8;	// 0F8
		UInt64									unk100;	// 100
		BSFixedString							unk108;	// 108
		UInt64									unk110;	// 110
		UInt64									unk118;	// 118
		UInt64									unk120;	// 120
		UInt64									unk128;	// 128
		UInt64									unk130;	// 130
		UInt64									unk138;	// 138
		UInt64									unk140;	// 140
		UInt64									unk148;	// 148
		UInt64									unk150;	// 150
		UInt64									unk158;	// 158
		UInt64									unk160;	// 160
		UInt64									unk168;	// 168
		UInt64									unk170;	// 170
		UInt64									unk178;	// 178
	};
}