#pragma once
#include <platform_win.h>
#include <vector>
#include <WidgetConfig.h>
#include "GfxWindow.h"
namespace YAML { class Node; }

namespace bb
{
	struct GuiWidget
	{
		bbstring m_id { };
		GfxWindow * m_gfxWindow { nullptr };

		GuiWidget () { }
		virtual ~GuiWidget () { }
		virtual void DrawUI () = 0;
		virtual wchar_t const * GetWidgetTypeName () = 0;
		virtual bool loadConfig (YAML::Node & y_cfg_node) = 0;
		//virtual bool saveConfig (YAML::Node & y_cfg_node) = 0;
		virtual bbstring const & GetId () { return m_id; }

		virtual void Show (bool on) = 0;
		virtual bool Visible () const = 0;
	};
}

