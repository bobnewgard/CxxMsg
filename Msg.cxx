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

#include <Msg.h>

namespace Messages
{
    using namespace std;
    using namespace Chars;

    Msg::Msg(void)
    {
        msgid = string("");
    }

    Msg::Msg(const char * arg)
    {
        msgid = string(arg);
    }

    Msg::Msg(const char * arg1, const char * arg2)
    {
        msgid = string(arg1);

        this->append_msgid(arg2);
    }

    Msg::Msg(const string & arg)
    {
        msgid = arg;
    }

    Msg::~Msg(void) { }

    // -------------------

    void
    Msg::append_msgid(const char * arg)
    {
        this->msgid.append(arg);
    }

    void
    Msg::append_msgid(const string & arg)
    {
        this->msgid.append(arg);
    }

    const char *
    Msg::get_str_c_msgid()
    {
        return this->msgid.c_str();
    }

    string &
    Msg::get_str_r_msgid()
    {
        return this->msgid;
    }

    // -------------------

    void
    Msg::compose_msg(const char * arg)
    {
        this->msgstr = this->msgid + SP + string(arg);
    }

    void
    Msg::compose_msg(const string & arg)
    {
        this->msgstr = this->msgid + SP + arg;
    }

    void
    Msg::compose_inf(void)
    {
        this->msgstr = "(INF)" + SP + this->msgstr;
    }

    void
    Msg::compose_wrn(void)
    {
        this->msgstr = "(WRN)" + SP + this->msgstr;
    }

    void
    Msg::compose_err(void)
    {
        this->msgstr = "(ERR)" + SP + this->msgstr;
    }

    void
    Msg::cout_msg(void)
    {
        cout << this->msgstr << endl << flush;
    }

    void
    Msg::cerr_msg(void)
    {
        cerr << this->msgstr << endl << flush;
    }

    // -------------------

    void
    Msg::cout_inf(const char * arg)
    {
        this->compose_msg(arg);
        this->compose_inf();
        this->cout_msg();
    }

    void
    Msg::cout_wrn(const char * arg)
    {
        this->compose_msg(arg);
        this->compose_wrn();
        this->cout_msg();
    }

    void
    Msg::cout_err(const char * arg)
    {
        this->compose_msg(arg);
        this->compose_err();
        this->cout_msg();
    }

    void
    Msg::cerr_inf(const char * arg)
    {
        this->compose_msg(arg);
        this->compose_inf();
        this->cerr_msg();
    }

    void
    Msg::cerr_wrn(const char * arg)
    {
        this->compose_msg(arg);
        this->compose_wrn();
        this->cerr_msg();
    }

    void
    Msg::cerr_err(const char * arg)
    {
        this->compose_msg(arg);
        this->compose_err();
        this->cerr_msg();
    }

    // -------------------

    void
    Msg::cout_inf(const string & arg)
    {
        this->compose_msg(arg);
        this->compose_inf();
        this->cout_msg();
    }

    void
    Msg::cout_wrn(const string & arg)
    {
        this->compose_msg(arg);
        this->compose_wrn();
        this->cout_msg();
    }

    void
    Msg::cout_err(const string & arg)
    {
        this->compose_msg(arg);
        this->compose_err();
        this->cout_msg();
    }

    void
    Msg::cerr_inf(const string & arg)
    {
        this->compose_msg(arg);
        this->compose_inf();
        this->cerr_msg();
    }

    void
    Msg::cerr_wrn(const string & arg)
    {
        this->compose_msg(arg);
        this->compose_wrn();
        this->cerr_msg();
    }

    void
    Msg::cerr_err(const string & arg)
    {
        this->compose_msg(arg);
        this->compose_err();
        this->cerr_msg();
    }
}
