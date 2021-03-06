#pragma once

#include "BsScriptEditorPrerequisites.h"
#include "BsScriptObject.h"
#include "../../../EditorCore/GUI/BsGUICurves.h"
#include "../../../bsf/Source/Foundation/bsfCore/Animation/BsAnimationCurve.h"
#include "Image/BsColor.h"

namespace bs
{
	struct __CurveDrawInfoInterop
	{
		MonoObject* curve;
		Color color;
	};

	class BS_SCR_BED_EXPORT ScriptCurveDrawInfo : public ScriptObject<ScriptCurveDrawInfo>
	{
	public:
		SCRIPT_OBJ(EDITOR_ASSEMBLY, "BansheeEditor", "CurveDrawInfo")

		static MonoObject* box(const __CurveDrawInfoInterop& value);
		static __CurveDrawInfoInterop unbox(MonoObject* value);
		static CurveDrawInfo fromInterop(const __CurveDrawInfoInterop& value);
		static __CurveDrawInfoInterop toInterop(const CurveDrawInfo& value);

	private:
		ScriptCurveDrawInfo(MonoObject* managedInstance);

	};
}
