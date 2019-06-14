#pragma once

#include "RE/Setting.h"  // Setting
#include "RE/SettingCollectionList.h"  // SettingCollectionList


namespace RE
{
	class RegSettingCollection : public SettingCollectionList<Setting>
	{
	public:
		virtual ~RegSettingCollection();							// 00

		// override (SettingCollectionList<Setting>)
		virtual bool	WriteSetting(Setting* a_setting) override;	// 03
		virtual bool	ReadSetting(Setting* a_setting) override;	// 04
		virtual bool	OpenHandle(bool a_create) override;			// 05
		virtual bool	CloseHandle()override;						// 06
	};
	STATIC_ASSERT(sizeof(RegSettingCollection) == 0x128);
}