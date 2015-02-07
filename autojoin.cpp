// Created by KindOne @ irc.freenode.net
//
// Name this autojoin.cpp
//
// TODO - Hide the invite from getting sent to the IRC client?
//


#include <znc/Chan.h>
#include <znc/IRCNetwork.h>
#include <znc/Modules.h>


using std::vector;

class Cautojoin : public CModule {
public:

        MODCONSTRUCTOR(Cautojoin) {

        }

        virtual ~Cautojoin() {}

        virtual EModRet OnInvite(const CNick& Nick, const CString& sChan) {
                PutIRC("JOIN " + sChan);
                return CONTINUE;
        }
};

NETWORKMODULEDEFS(Cautojoin, "Autojoin on /invite.")
