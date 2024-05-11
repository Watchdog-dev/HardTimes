modded class PlayerBase 
{
    override void CheckLiftWeapon()
    {
        if ( GetInstanceType() == DayZPlayerInstanceType.INSTANCETYPE_CLIENT )
        {
            Weapon_Base weap;
            if ( Weapon_Base.CastTo( weap, GetItemInHands() ) )
            {
                bool limited = weap.LiftWeaponCheck( this );
                if ( limited && !m_LiftWeapon_player )
                {
                    SendLiftWeaponSync( false) ;
                }
                else if ( !limited && m_LiftWeapon_player )
                {
                    SendLiftWeaponSync( false );
                }
            }
            else if ( m_LiftWeapon_player )
            {
                SendLiftWeaponSync( false );
            }
        }
    }
};