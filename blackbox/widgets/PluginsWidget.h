#pragma once
#include <blackbox/gfx/GuiWidget.h>

namespace bb {

  struct PluginsWidget : GuiWidget
  {
		virtual ~PluginsWidget () { }
		virtual void DrawUI () { }
		virtual char const * GetName () { return "Plugins"; }
		virtual wchar_t const * GetNameW () { return L"Plugins"; }
  };

}

