modded class TerritoryFlagKit extends KitBase
{
    override void OnPlacementComplete( Man player, vector position = "0 0 0", vector orientation = "0 0 0" )
    {
        if ( GetGame().IsServer() )
        {
            PlayerBase player_base = PlayerBase.Cast( player );
            TerritoryFlag FlagKit = TerritoryFlag.Cast( GetGame().CreateObjectEx( "TerritoryFlag", GetPosition(), ECE_PLACE_ON_SURFACE ) );
            FlagKit.SetPosition( position );
            FlagKit.SetOrientation( orientation );
            HideAllSelections();
            SetIsDeploySound( true );
            FlagKit.GetConstruction().BuildPartServer( player_base, "base", AT_BUILD_PART );
            FlagKit.GetConstruction().BuildPartServer( player_base, "support", AT_BUILD_PART );
            FlagKit.GetConstruction().BuildPartServer( player_base, "pole", AT_BUILD_PART );
            FlagKit.GetInventory().CreateAttachment( "Flag_DayZ" );
            FlagKit.GetConstruction().BuildPartServer( player_base, "Flag", AT_BUILD_PART );
        }
    }
};