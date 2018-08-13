//
// Created by mwo on 6/11/15.
//

#ifndef LOKEG01_CMDLINEOPTIONS_H
#define LOKEG01_CMDLINEOPTIONS_H

#include <iostream>
#include <string>

#include <boost/program_options.hpp>
#include <boost/optional.hpp>

namespace lokeg
{

    using namespace std;
    using namespace boost::program_options;

    /**
     * Manages program options of this example program.
     *
     * Basically a wrapper for boost::program_options
     */
    class CmdLineOptions {
        variables_map vm;

    public:
        CmdLineOptions(int acc, const char *avv[]);

    template<typename T>
    boost::optional<T> get_option(const string & opt_name) const;
    };
}


#endif //LOKEG01_CMDLINEOPTIONS_H
