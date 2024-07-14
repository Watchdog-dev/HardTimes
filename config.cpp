class CfgPatches
{
    class HardTimes
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Data",
            "DZ_Characters_Vests",
            "DZ_Characters_Backpacks",
            "DZ_Scripts",
            "DZ_Characters",
            "DZ_Gear_Drinks",
            "DZ_Gear_Medical",
            "DZ_Gear_Containers",
            "DZ_Gear_Camping",
            "AC_Mod_Pack",
            "AC_Sample",
            "DZ_Data_Bliss",
            "DZ_Gear_Consumables",
            "DZ_gear_food",
            "DZ_Pistols",
            "DZ_Structures_Furniture",
            "DZ_Surfaces",
            "DZ_Weapons_Ammunition",
            "DZ_Weapons_Archery",
            "DZ_Weapons_Firearms",
            "DZ_Weapons_Magazines",
            "DZ_Weapons_Melee",
            "DZ_Weapons_Muzzles"
        };
    };
};
class CfgMods
{
    class HardTimes
    {
        dir="HardTimes";
        name="HardTimes";
        credits="";
        author="Watchdog";
        authorID="76561198410697903";
        version="1.0";
        extra=0;
        type="mod";
        dependencies[]=
        {
            "Game",
            "DZ_Characters",
            "World",
            "Mission"
        };
        class defs
        {
            class gameScriptModule
            {
                value="";
                files[]=
                {
                    "HardTimes/Scripts/3_Game"
                };
            };
            class worldScriptModule
            {
                value="";
                files[]=
                {
                    "HardTimes/scripts/4_World"
                };
            };
        };
    };
};
class CfgVehicles
{
    class M65Jacket_Black;
    class HuntingBag;
    class CargoPants_Black;
    class BeanieHat_Grey;
    class DryBag_Red;
    class HardTimes_HuntingBag: HuntingBag
    {
        displayName="HuntingBag";
        descriptionShort="HardTimes HuntingBag";
        scope=2;
        itemSize[]={4,4};
        itemsCargoSize[]={10,20};
        hiddenSelectionsTextures[]=
        {
            "HardTimes\data\HuntingBag.paa",
            "HardTimes\data\HuntingBag.paa",
            "HardTimes\data\HuntingBag.paa"
        };
    };
    class HardTimes_M65Jacket: M65Jacket_Black
    {
        displayName="M65Jacket";
        descriptionShort="HardTimes M65Jacket";
        scope=2;
        itemSize[]={4,4};
        itemsCargoSize[]={10,10};
        hiddenSelectionsTextures[]=
        {
            "HardTimes\data\M65Jacket.paa",
            "HardTimes\data\M65Jacket.paa",
            "HardTimes\data\M65Jacket.paa"
        };
    };
    class HardTimes_CargoPants: CargoPants_Black
    {
        displayName="CargoPants";
        descriptionShort="HardTimes CargoPants";
        scope=2;
        itemSize[]={4,3};
        itemsCargoSize[]={10,10};
        hiddenSelectionsTextures[]=
        {
            "HardTimes\data\CargoPants.paa",
            "HardTimes\data\CargoPants.paa",
            "HardTimes\data\CargoPants.paa"
        };
    };
    class HardTimes_BeanieHat: BeanieHat_Grey
    {
        displayName="BeanieHat";
        descriptionShort="HardTimes BeanieHat";
        scope=2;
        itemSize[]={2,2};
        itemsCargoSize[]={2,1};
        hiddenSelectionsTextures[]=
        {
            "HardTimes\data\BeanieHat.paa",
            "HardTimes\data\BeanieHat.paa",
            "HardTimes\data\BeanieHat.paa"
        };
    };
    class ItemSuppressor;
    class M4_Suppressor: ItemSuppressor
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 400;
                };
            };
        };
        lootCategory = "Attachments";
        lootTag[] = { "Military_west" };
        inventorySlot[] =
        {
            "suppressorImpro",
            "weaponMuzzleAK",
            "weaponMuzzleM4",
            "pistolMuzzle"
        };
        selectionFireAnim = "zasleh";
        muzzlePos = "usti hlavne";
    };
    class AK_Suppressor: ItemSuppressor
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 400;
                };
            };
        };
        lootCategory = "Attachments";
        lootTag[] = { "Military_west" };
        inventorySlot[] =
        {
            "suppressorImpro",
            "weaponMuzzleAK",
            "weaponMuzzleM4",
            "pistolMuzzle"
        };
        selectionFireAnim = "zasleh";
        muzzlePos = "usti hlavne";
    };
    class PistolSuppressor: ItemSuppressor
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 500;
                };
            };
        };
    };
    class ImprovisedSuppressor: ItemSuppressor
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 20;
                };
            };
        };
        lootCategory = "Attachments";
        lootTag[] = { "Military_west" };
        inventorySlot[] =
        {
            "suppressorImpro",
            "weaponMuzzleAK",
            "weaponMuzzleM4",
            "pistolMuzzle"
        };
        selectionFireAnim = "zasleh";
        muzzlePos = "usti hlavne";
    };
};
class cfgWeapons
{
    class Archery_Base;
    class Crossbow_Base: Archery_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class AK101_Base;
    class AK101: AK101_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class AK74_Base;
    class AK74: AK74_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class AKS74U: AK74_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class AKM_Base;
    class AKM: AKM_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class Aug_Base;
    class Aug: Aug_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class AugShort: Aug_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class M4A1_Base;
    class M4A1: M4A1_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class FAL_Base;
    class FAL: FAL_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class Rifle_Base;
    class Famas_Base: Rifle_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class SawedoffFAMAS: Famas_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    }
    class M16A2_Base: Rifle_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class B95_Base;
    class B95: B95_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class SawedoffB95: B95_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class CZ527_Base;
    class CZ527: CZ527_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class CZ550_Base;
    class CZ550: CZ550_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class Repeater_Base: Rifle_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class Ruger1022_Base;
    class Ruger1022: Ruger1022_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class M14_Base;
    class M14: M14_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class BoltActionRifle_InnerMagazine_Base;
    class Mosin9130_Base: BoltActionRifle_InnerMagazine_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class Mosin9130: Mosin9130_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class SawedoffMosin9130_Base;
    class SawedoffMosin9130 : SawedoffMosin9130_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class Scout_Base;
    class Scout: Scout_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class SSG82_Base;
    class SSG82: SSG82_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class SVD_Base;
    class SVD: SVD_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class SKS_Base;
    class SKS: SKS_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class Winchester70_Base;
    class Winchester70: Winchester70_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class VSS_Base;
    class VSS: VSS_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class ASVAL: VSS_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class Vikhr : VSS_Base 
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class Izh18Shotgun_Base;
    class Izh18Shotgun: Izh18Shotgun_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class SawedoffIzh18Shotgun: Izh18Shotgun_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class Izh43Shotgun_Base;
    class Izh43Shotgun: Izh43Shotgun_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class SawedoffIzh43Shotgun: Izh43Shotgun_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class Mp133Shotgun_Base;
    class Mp133Shotgun: Mp133Shotgun_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class Saiga_Base;
    class Saiga: Saiga_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class CZ61_Base;
    class CZ61: CZ61_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class MP5K_Base;
    class MP5K: MP5K_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class PP19_Base: Rifle_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class UMP45_Base;
    class UMP45: UMP45_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class Colt1911_Base;
    class Colt1911: Colt1911_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class Engraved1911: Colt1911_Base 
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class CZ75_Base;
    class CZ75: CZ75_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class Deagle_Base;
    class Deagle: Deagle_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class Deagle_Gold: Deagle
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class Pistol_Base;
    class Derringer_Base: Pistol_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class FNX45_Base;
    class FNX45: FNX45_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class Glock19_Base;
    class Glock19: Glock19_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class Longhorn_Base;
    class Longhorn: Longhorn_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class MKII_Base;
    class MKII: MKII_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class Magnum_Base;
    class Magnum: Magnum_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class SawedoffMagnum: Magnum_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class MakarovIJ70_Base;
    class MakarovIJ70: MakarovIJ70_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class P1_Base;
    class P1: P1_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
    class M79_Base;
    class M79 : M79_Base
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
        };
    };
};
class CfgVehicleSurfaces
{
    class Asphalt
    {
        friction = 0.94999999;
        frictionOffroad = 1;
        frictionSlick = 1;
        rollResistance = 1;
        rollDrag = 0.1;
    };
    class Dirt
    {
        friction = 0.94999999;
        frictionOffroad = 1;
        frictionSlick = 1;
        rollResistance = 1;
        rollDrag = 0.1;
    };
    class Grass
    {
        friction = 0.94999999;
        frictionOffroad = 1;
        frictionSlick = 1;
        rollResistance = 1;
        rollDrag = 0.1;
    };
    class Forest
    {
        friction = 0.94999999;
        frictionOffroad = 1;
        frictionSlick = 1;
        rollResistance = 1;
        rollDrag = 0.1;
    };
    class Gravel
    {
        friction = 0.94999999;
        frictionOffroad = 1;
        frictionSlick = 1;
        rollResistance = 1;
        rollDrag = 0.1;
    };
};
class CfgSurfaces
{
    class DZ_SurfacesExt;
    class cp_concrete1: DZ_SurfacesExt
    {
        friction = 1;
        restitution = 1;
        vpSurface = "Asphalt";
    };
    class cp_concrete2: DZ_SurfacesExt
    {
        friction = 1;
        restitution = 1;
        vpSurface = "Asphalt";
    };
    class cp_dirt: DZ_SurfacesExt
    {
        friction = 1;
        restitution = 1;
        vpSurface = "Asphalt";
    };
    class cp_broadleaf_dense1: DZ_SurfacesExt
    {
        friction = 1;
        restitution = 1;
        vpSurface = "Asphalt";
    };
    class cp_broadleaf_dense2: DZ_SurfacesExt
    {
        friction = 1;
        restitution = 1;
        vpSurface = "Asphalt";
    };
    class cp_broadleaf_sparse1: DZ_SurfacesExt
    {
        friction = 1;
        restitution = 1;
        vpSurface = "Asphalt";
    };
    class cp_broadleaf_sparse2: DZ_SurfacesExt
    {
        friction = 1;
        restitution = 1;
        vpSurface = "Asphalt";
    };
    class cp_conifer_common1: DZ_SurfacesExt
    {
        friction = 1;
        restitution = 1;
        vpSurface = "Asphalt";
    };
    class cp_conifer_common2: DZ_SurfacesExt
    {
        friction = 1;
        restitution = 1;
        vpSurface = "Asphalt";
    };
    class cp_conifer_moss2: DZ_SurfacesExt
    {
        friction = 1;
        restitution = 1;
        vpSurface = "Asphalt";
    };
    class cp_grass: DZ_SurfacesExt
    {
        friction = 1;
        restitution = 1;
        vpSurface = "Asphalt";
    };
    class cp_grass_tall: DZ_SurfacesExt
    {
        friction = 1;
        restitution = 1;
        vpSurface = "Asphalt";
    };
    class cp_rock: DZ_SurfacesExt
    {
        friction = 1;
        restitution = 1;
        vpSurface = "Asphalt";
    };
    class cp_gravel: DZ_SurfacesExt
    {
        friction = 1;
        restitution = 1;
        vpSurface = "Asphalt";
    };
    class en_grass1 : DZ_SurfacesExt
    {
        friction = 1;
        restitution = 1;
        vpSurface = "Asphalt";
    };
    class en_grass2 : DZ_SurfacesExt
    {
        friction = 1;
        restitution = 1;
        vpSurface = "Asphalt";
    };
    class en_flowers1 : en_grass2
    {
        friction = 1;
        restitution = 1;
        vpSurface = "Asphalt";
    };
    class en_flowers2 : en_grass2
    {
        friction = 1;
        restitution = 1;
        vpSurface = "Asphalt";
    };
    class en_flowers3 : en_grass2
    {
        friction = 1;
        restitution = 1;
        vpSurface = "Asphalt";
    };
    class en_forestcon : DZ_SurfacesExt
    {
        friction = 1;
        restitution = 1;
        vpSurface = "Asphalt";
    };
    class en_forestdec : DZ_SurfacesExt
    {
        friction = 1;
        restitution = 1;
        vpSurface = "Asphalt";
    };
    class en_soil : DZ_SurfacesExt
    {
        friction = 1;
        restitution = 1;
        vpSurface = "Asphalt";
    };
    class en_tarmac : DZ_SurfacesExt
    {
        friction = 1;
        restitution = 1;
        vpSurface = "Asphalt";
    };
    class en_tarmacold : DZ_SurfacesExt
    {
        friction = 1;
        restitution = 1;
        vpSurface = "Asphalt";
    };
    class en_stubble : DZ_SurfacesExt
    {
        friction = 1;
        restitution = 1;
        vpSurface = "Asphalt";
    };
    class en_stones : DZ_SurfacesExt
    {
        friction = 1;
        restitution = 1;
        vpSurface = "Asphalt";
    };
};
class CfgMagazines
{
    class Magazine_Base;
    class Ammunition_Base: Magazine_Base {};
    class Ammo_45ACP: Ammunition_Base
    {
        count=200;
    };
    class Ammo_308Win: Ammunition_Base
    {
        count=200;
    };
    class Ammo_308WinTracer: Ammunition_Base
    {
        count=200;
    };
    class Ammo_9x19: Ammunition_Base
    {
        count=200;
    };
    class Ammo_380: Ammunition_Base
    {
        count=200;
    };
    class Ammo_556x45: Ammunition_Base
    {
        count=200;
    };
    class Ammo_556x45Tracer: Ammunition_Base
    {
        count=200;
    };
    class Ammo_762x54: Ammunition_Base
    {
        count=200;
    };
    class Ammo_762x54Tracer: Ammunition_Base
    {
        count=200;
    };
    class Ammo_762x39: Ammunition_Base
    {
        count=200;
    };
    class Ammo_762x39Tracer: Ammunition_Base
    {
        count=200;
    };
    class Ammo_9x39: Ammunition_Base
    {
        count=200;
    };
    class Ammo_9x39AP: Ammunition_Base
    {
        count=200;
    };
    class Ammo_22: Ammunition_Base
    {
        count=200;
    };
    class Ammo_12gaPellets: Ammunition_Base
    {
        count=200;
    };
    class Ammo_12gaSlug: Ammunition_Base
    {
        count=200;
    };
    class Ammo_357: Ammunition_Base
    {
        count=200;
    };
    class Ammo_545x39: Ammunition_Base
    {
        count=200;
    };
    class Ammo_545x39Tracer: Ammunition_Base
    {
        count=200;
    };
    class Ammo_ArrowComposite: Ammunition_Base
    {
        count=200;
    };
    class Ammo_SharpStick: Ammunition_Base
    {
        count=200;
    };
    class Ammo_ArrowPrimitive: Ammunition_Base
    {
        count=200;
    };
    class Ammo_ArrowBoned: Ammunition_Base
    {
        count=200;
    };
    class Ammo_ArrowBolt: Ammunition_Base
    {
        count=200;
    };
    class Ammo_DartSyringe: Ammunition_Base
    {
        count=200;
    };
    class Ammo_Flare: Ammunition_Base
    {
        count=200;
    };
    class Ammo_RPG7_HE: Ammunition_Base
    {
        count=200;
    };
    class Ammo_RPG7_AP: Ammunition_Base
    {
        count=200;
    };
    class Ammo_LAW_HE: Ammunition_Base
    {
        count=200;
    };
    class Ammo_GrenadeM4: Ammunition_Base
    {
        count=200;
    };
    class Ammo_46x30: Ammunition_Base
    {
        count=200;
    };
    class Ammo_8mm: Ammunition_Base
    {
        count=200;
    };
    class Ammo_338: Ammunition_Base
    {
        count=200;
    };
    class Ammo_408Chey: Ammunition_Base
    {
        count=200;
    };
    class Ammo_12GaBB: Ammunition_Base
    {
        count=200;
    };
    class Ammo_12gaRubblerSlug: Ammunition_Base
    {
        count=200;
    };
    class Ammo_303: Ammunition_Base
    {
        count=200;
    };
    class Ammo_12gaNeedles: Ammunition_Base
    {
        count=200;
    };
    class Ammo_FUGAS: Ammunition_Base
    {
        count=200;
    };
    class Ammo_12gaPellets_tracer: Ammunition_Base
    {
        count=200;
    };
    class Ammo_4x30: Ammunition_Base
    {
        count=200;
    };
    class Ammo_338Tracer: Ammunition_Base
    {
        count=200;
    };
    class Ammo_408: Ammunition_Base
    {
        count=200;
    };
    class Ammo_408Tracer: Ammunition_Base
    {
        count=200;
    };
    class Ammo_792x33: Ammunition_Base
    {
        count=200;
    };
    class Ammo_12_7x55: Ammunition_Base
    {
        count=200;
    };
    class Ammo_12x99: Ammunition_Base
    {
        count=200;
    };
    class Ammo_12x99Tracer_Green: Ammunition_Base
    {
        count=200;
    };
    class Ammo_12x99Tracer_Yell: Ammunition_Base
    {
        count=200;
    };
    class Ammo_nails: Ammunition_Base
    {
        count=200;
    };
    class Ammo_762x25: Ammunition_Base
    {
        count=200;
    };
    class Ammo_5_7x28: Ammunition_Base
    {
        count=200;
    };
    class Ammo_5_7x28Tracer: Ammunition_Base
    {
        count=200;
    };
    class Ammo_762x33: Ammunition_Base
    {
        count=200;
    };
    class Ammo_792x57: Ammunition_Base
    {
        count=200;
    };
    class Ammo_9x18: Ammunition_Base
    {
        count=200;
    };
    class Ammo_shock: Ammunition_Base
    {
        count=200;
    };
};