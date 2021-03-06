#pragma once
#include "../shared.h"

namespace wot_stream::core::obs_management {

    class ModulesLoader {
    public:
        ModulesLoader();
        ~ModulesLoader();

        void LoadAuthorized();

    private:
        std::vector<std::string> authorized_module_names;

        void AddPath(const std::string &bin = nullptr, const std::string &data = nullptr);
        void LoadModule(const std::string &bin_path, const std::string &data_path);
        void PostLoad();
    };
}