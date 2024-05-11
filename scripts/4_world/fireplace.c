modded class Fireplace extends FireplaceBase
{
    override static bool CanIgniteEntityAsFireplace( notnull EntityAI entity )
    {
        if (FireplaceBase.IsEntityOnWaterSurface( entity ) )
        {
            return false;
        }
        if (!MiscGameplayFunctions.IsUnderRoof( entity ) )
        {
            if (FireplaceBase.IsRainingAboveEntity( entity ) )
            {
                return false;
            }
        }
        return true;
    }
    override bool IsThisIgnitionSuccessful( EntityAI item_source = NULL )
    {
        SetIgniteFailure( false );
        Param1<bool> failure;
        if ( !HasAnyKindling() )
        {
            return false;
        }
        if ( IsOnWaterSurface() )
        {
            return false;
        }
        if ( IsWet() )
        {
            SetIgniteFailure( true );
            
            failure = new Param1<bool>( GetIgniteFailure() );
            GetGame().RPCSingleParam( this, FirePlaceFailure.WET, failure, true );
            return false;
        }
        if ( !IsOven() && !MiscGameplayFunctions.IsUnderRoof( this ) )
        {
            if ( IsRainingAbove() )
            {
                SetIgniteFailure( true );
                
                failure = new Param1<bool>( GetIgniteFailure() );
                GetGame().RPCSingleParam( this, FirePlaceFailure.WET, failure, true );
                return false;
            }
            
            if ( IsWindy() )
            {
                SetIgniteFailure( true );
                
                failure = new Param1<bool>( GetIgniteFailure() );
                GetGame().RPCSingleParam( this, FirePlaceFailure.WIND, failure, true );
                return false;
            }
        }
        return true;
    }
}
