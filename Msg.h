/*
 *  Copyright 2020 Robert Newgard
 *
 *  This file is part of CxxMsg.
 *
 *  CxxMsg is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  CxxMsg is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with CxxMsg.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef _MSG_H_
    #define _MSG_H_

    #include <string>
    #include <iostream>

    namespace Messages
    {
        namespace Chars
        {
            const std::string SP = "\x20";
            const std::string CM = ",";
            const std::string CN = ":";
            const std::string NL = "\n";
            const std::string SQ = "\'";
            const std::string DQ = "\"";
            const std::string TB = "\t";
        }

        class Msg
        {
            protected:
                std::string   msgid;
                std::string   msgstr;

                void          compose_msg(const char*);
                void          compose_msg(const std::string&);
                void          compose_inf(void);
                void          compose_wrn(void);
                void          compose_err(void);
                virtual void  cout_msg(void);
                virtual void  cerr_msg(void);

            public:
                Msg(void);
                Msg(const char*);
                Msg(const char*, const char*);
                Msg(const std::string&);

                void          cout_inf(const char *);
                void          cout_wrn(const char *);
                void          cout_err(const char *);
                void          cerr_inf(const char *);
                void          cerr_wrn(const char *);
                void          cerr_err(const char *);

                void          cout_inf(const std::string &);
                void          cout_wrn(const std::string &);
                void          cout_err(const std::string &);
                void          cerr_inf(const std::string &);
                void          cerr_wrn(const std::string &);
                void          cerr_err(const std::string &);

                const char  * get_str_c_msgid(void);
                std::string & get_str_r_msgid(void);
                void          append_msgid(const char*);
                void          append_msgid(const std::string&);

                virtual       ~Msg(void);
        };
    }
#endif
