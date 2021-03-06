#include <3rd_party/tclap/CmdLine.h>

namespace bb {

	struct CommandLine
	{
		TCLAP::SwitchArg m_nostartup;
		TCLAP::SwitchArg m_taskhook;
		TCLAP::SwitchArg m_trayhook;
		TCLAP::ValueArg<std::string> m_configdir;
		TCLAP::ValueArg<std::string> m_logdir;
		TCLAP::SwitchArg m_unbuffered;
		TCLAP::ValueArg<std::string> m_rcfile;
		TCLAP::ValueArg<std::string> m_yamlfile;
		TCLAP::ValueArg<std::string> m_exec;
		TCLAP::ValueArg<int> m_verbosity;
		TCLAP::CmdLine * m_cmdLine;

		CommandLine ();
		bool Init ();
		bool Done ();

		bool NoStartup () { return m_nostartup.getValue(); }
		bool NoTaskHook () { return !m_taskhook.getValue(); }
		bool NoTrayHook () { return !m_trayhook.getValue(); }
		bool Unbuffered () { return m_unbuffered.getValue(); }
		int Verbosity () { return m_verbosity.getValue(); }
		std::string const & YamlFile () const { return m_yamlfile.getValue(); }
		std::string const & ConfigDir () const { return m_configdir.getValue(); }
		std::string const & LogDir () const { return m_logdir.getValue(); }
	};

}
