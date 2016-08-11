#pragma once
#include <blackbox/gfx/GuiWidget.h>
#include <blackbox/Tasks.h>

namespace bb {

	struct RecoverWindowsWidget : GuiWidget
	{
		std::vector<TaskInfo> m_tasks;

		RecoverWindowsWidget ();
		virtual ~RecoverWindowsWidget () { }
		virtual void DrawUI () override;
		virtual char const * GetName () override { return "RecoverWindows"; }

		void UpdateData ();
	};

}

