#include "RE/BSSystem/BSStorage/BSSystemFileStorage.h"


namespace RE
{
	bool BSSystemFileStorage::IsGoodForRead() const
	{
		return goodForRead && attributes.lastError.none(Attributes::Error::kErrorMask);
	}
}
