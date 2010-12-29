/*

   Copyright [2010] [Josko Nikolic]

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.

   CODE PORTED FROM THE ORIGINAL GHOST PROJECT: http://aura.pwner.org/

*/

#include "aura.h"
#include "util.h"
#include "config.h"
#include "auradb.h"

//
// CAuraDB
//

CAuraDB :: CAuraDB( CConfig *CFG ) : m_HasError( false )
{

}

CAuraDB :: ~CAuraDB( )
{

}

bool CAuraDB :: Begin( )
{
	return true;
}

bool CAuraDB :: Commit( )
{
	return true;
}

uint32_t CAuraDB :: AdminCount( const string &server )
{
	return 0;
}

bool CAuraDB :: AdminCheck( const string &server, string user )
{
	return false;
}

bool CAuraDB :: AdminAdd( const string &server, string user )
{
	return false;
}

bool CAuraDB :: AdminRemove( const string &server, string user )
{
	return false;
}

vector<string> CAuraDB :: AdminList( const string &server )
{
	return vector<string>( );
}

uint32_t CAuraDB :: BanCount( const string &server )
{
	return 0;
}

CDBBan *CAuraDB :: BanCheck( const string &server, string user, const string &ip )
{
	return NULL;
}

bool CAuraDB :: BanAdd( const string &server, string user, const string &ip, const string &gamename, string admin, const string &reason )
{
	return false;
}

bool CAuraDB :: BanRemove( const string &server, string user )
{
	return false;
}

bool CAuraDB :: BanRemove( string user )
{
	return false;
}

vector<CDBBan *> CAuraDB :: BanList( const string &server )
{
	return vector<CDBBan *>( );
}

uint32_t CAuraDB :: GameAdd( const string &server, const string &map, const string &gamename, const string &ownername, uint32_t duration, uint32_t gamestate, const string &creatorname, const string &creatorserver )
{
	return 0;
}

uint32_t CAuraDB :: GamePlayerAdd( uint32_t gameid, string name, const string &ip, uint32_t spoofed, const string &spoofedrealm, uint32_t reserved, uint32_t loadingtime, uint32_t left, const string &leftreason, uint32_t team, uint32_t colour )
{
	return 0;
}

uint32_t CAuraDB :: GamePlayerCount( string name )
{
	return 0;
}

CDBGamePlayerSummary *CAuraDB :: GamePlayerSummaryCheck( string name )
{
	return NULL;
}

uint32_t CAuraDB :: DotAGameAdd( uint32_t gameid, uint32_t winner, uint32_t min, uint32_t sec )
{
	return 0;
}

uint32_t CAuraDB :: DotAPlayerAdd( uint32_t gameid, uint32_t colour, uint32_t kills, uint32_t deaths, uint32_t creepkills, uint32_t creepdenies, uint32_t assists, uint32_t gold, uint32_t neutralkills, const string &item1, const string &item2, const string &item3, const string &item4, const string &item5, const string &item6, const string &hero, uint32_t newcolour, uint32_t towerkills, uint32_t raxkills, uint32_t courierkills )
{
	return 0;
}

uint32_t CAuraDB :: DotAPlayerCount( string name )
{
	return 0;
}

CDBDotAPlayerSummary *CAuraDB :: DotAPlayerSummaryCheck( string name )
{
	return NULL;
}

string CAuraDB :: FromCheck( uint32_t ip )
{
	return "??";
}

bool CAuraDB :: FromAdd( uint32_t ip1, uint32_t ip2, const string &country )
{
	return false;
}

//
// CDBBan
//

CDBBan :: CDBBan( const string &nServer, const string &nName, const string &nIP, const string &nDate, const string &nGameName, const string &nAdmin, const string &nReason ) : m_Server( nServer ), m_Name( nName ), m_IP( nIP ), m_Date( nDate ), m_GameName( nGameName ), m_Admin( nAdmin ), m_Reason( nReason )
{

}

CDBBan :: ~CDBBan( )
{

}

//
// CDBGame
//

CDBGame :: CDBGame( uint32_t nID, const string &nServer, const string &nMap, const string &nDateTime, const string &nGameName, const string &nOwnerName, uint32_t nDuration ) : m_ID( nID ), m_Server( nServer ), m_Map( nMap ), m_DateTime( nDateTime ), m_GameName( nGameName ), m_OwnerName( nOwnerName ), m_Duration( nDuration )
{

}

CDBGame :: ~CDBGame( )
{

}

//
// CDBGamePlayer
//

CDBGamePlayer :: CDBGamePlayer( uint32_t nID, uint32_t nGameID, const string &nName, string nIP, uint32_t nSpoofed, const string &nSpoofedRealm, uint32_t nReserved, uint32_t nLoadingTime, uint32_t nLeft, const string &nLeftReason, uint32_t nTeam, uint32_t nColour ) : m_ID( nID ), m_GameID( nGameID ), m_Name( nName ), m_IP( nIP ), m_Spoofed( nSpoofed ), m_SpoofedRealm( nSpoofedRealm ), m_Reserved( nReserved ), m_LoadingTime( nLoadingTime ), m_Left( nLeft ), m_LeftReason( nLeftReason ), m_Team( nTeam ),m_Colour( nColour )
{

}

CDBGamePlayer :: ~CDBGamePlayer( )
{

}

//
// CDBGamePlayerSummary
//

CDBGamePlayerSummary :: CDBGamePlayerSummary( const string &nServer, const string &nName, const string &nFirstGameDateTime, const string &nLastGameDateTime, uint32_t nTotalGames, uint32_t nMinLoadingTime, uint32_t nAvgLoadingTime, uint32_t nMaxLoadingTime, uint32_t nMinLeftPercent, uint32_t nAvgLeftPercent, uint32_t nMaxLeftPercent, uint32_t nMinDuration, uint32_t nAvgDuration, uint32_t nMaxDuration ) : m_Server( nServer ), m_Name( nName ), m_FirstGameDateTime( nFirstGameDateTime ), m_LastGameDateTime( nLastGameDateTime ), m_TotalGames( nTotalGames ), m_MinLoadingTime( nMinLoadingTime ), m_AvgLoadingTime( nAvgLoadingTime ), m_MaxLoadingTime( nMaxLoadingTime ), m_MinLeftPercent( nMinLeftPercent ), m_AvgLeftPercent( nAvgLeftPercent ), m_MaxLeftPercent( nMaxLeftPercent ), m_MinDuration( nMinDuration ), m_AvgDuration( nAvgDuration ), m_MaxDuration( nMaxDuration )
{

}

CDBGamePlayerSummary :: ~CDBGamePlayerSummary( )
{

}

//
// CDBDotAGame
//

CDBDotAGame :: CDBDotAGame( uint32_t nID, uint32_t nGameID, uint32_t nWinner, uint32_t nMin, uint32_t nSec ) : m_ID( nID ), m_GameID( nGameID ), m_Winner( nWinner ), m_Min( nMin ), m_Sec( nSec )
{

}

CDBDotAGame :: ~CDBDotAGame( )
{

}

//
// CDBDotAPlayer
//

CDBDotAPlayer :: CDBDotAPlayer( ) : m_ID( 0 ), m_GameID( 0 ), m_Colour( 0 ), m_Kills( 0 ), m_Deaths( 0 ), m_CreepKills( 0 ), m_CreepDenies( 0 ), m_Assists( 0 ), m_Gold( 0 ), m_NeutralKills( 0 ), m_NewColour( 0 ), m_TowerKills( 0 ), m_RaxKills( 0 ), m_CourierKills( 0 )
{

}

CDBDotAPlayer :: CDBDotAPlayer( uint32_t nID, uint32_t nGameID, uint32_t nColour, uint32_t nKills, uint32_t nDeaths, uint32_t nCreepKills, uint32_t nCreepDenies, uint32_t nAssists, uint32_t nGold, uint32_t nNeutralKills, const string &nItem1, const string &nItem2, const string &nItem3, const string &nItem4, const string &nItem5, const string &nItem6, const string &nHero, uint32_t nNewColour, uint32_t nTowerKills, uint32_t nRaxKills, uint32_t nCourierKills ) : \
	m_ID( nID ), m_GameID( nGameID ), m_Colour( nColour ), m_Kills( nKills ), m_Deaths( nDeaths ), m_CreepKills( nCreepKills ), m_CreepDenies( nCreepDenies ), m_Assists( nAssists ), m_Gold( nGold ), \
	m_NeutralKills( nNeutralKills ), m_Hero( nHero ), m_NewColour( nNewColour ), m_TowerKills( nTowerKills ), m_RaxKills( nRaxKills ), m_CourierKills( nCourierKills )
{
	m_Items[0] = nItem1;
	m_Items[1] = nItem2;
	m_Items[2] = nItem3;
	m_Items[3] = nItem4;
	m_Items[4] = nItem5;
	m_Items[5] = nItem6;

}

CDBDotAPlayer :: ~CDBDotAPlayer( )
{

}

string CDBDotAPlayer :: GetItem( unsigned int i )
{
	if( i < 6 )
		return m_Items[i];

	return string( );
}

void CDBDotAPlayer :: SetItem( unsigned int i, string item )
{
	if( i < 6 )
		m_Items[i] = item;
}

//
// CDBDotAPlayerSummary
//

CDBDotAPlayerSummary :: CDBDotAPlayerSummary( const string &nServer, const string &nName, uint32_t nTotalGames, uint32_t nTotalWins, uint32_t nTotalLosses, uint32_t nTotalKills, uint32_t nTotalDeaths, uint32_t nTotalCreepKills, uint32_t nTotalCreepDenies, uint32_t nTotalAssists, uint32_t nTotalNeutralKills, uint32_t nTotalTowerKills, uint32_t nTotalRaxKills, uint32_t nTotalCourierKills ) : m_Server( nServer ), m_Name( nName ), m_TotalGames( nTotalGames ), m_TotalWins( nTotalWins ), m_TotalLosses( nTotalLosses ), m_TotalKills( nTotalKills ), m_TotalDeaths( nTotalDeaths ), m_TotalCreepKills( nTotalCreepKills ), m_TotalCreepDenies( nTotalCreepDenies ), m_TotalAssists( nTotalAssists ), m_TotalNeutralKills( nTotalNeutralKills ), m_TotalTowerKills( nTotalTowerKills ), m_TotalRaxKills( nTotalRaxKills ), m_TotalCourierKills( nTotalCourierKills )
{

}

CDBDotAPlayerSummary :: ~CDBDotAPlayerSummary( )
{

}