#!/bin/bash
astyle --style=allman  --indent=spaces=2 --indent-switches --indent-namespaces --indent-preprocessor --indent-col1-comments --break-blocks --pad-oper --pad-header --unpad-paren --align-pointer=name --align-reference=name --close-templates --keep-one-line-blocks aura/aura.cpp aura/aura.h aura/bnet.cpp aura/bnet.h aura/game.cpp aura/game.h aura/gameprotocol.cpp aura/gameprotocol.h aura/gameplayer.cpp aura/gameplayer.h aura/bnetprotocol.cpp aura/bnetprotocol.h aura/map.h aura/map.cpp aura/auradb.cpp aura/bncsutilinterface.cpp aura/config.cpp aura/socket.cpp aura/stats.cpp aura/irc.cpp aura/auradb.h aura/bncsutilinterface.h aura/config.h aura/socket.h aura/stats.h aura/irc.h aura/util.h aura/gpsprotocol.h aura/gpsprotocol.cpp aura/csvparser.h aura/fileutil.h aura/fileutil.cpp aura/includes.h
