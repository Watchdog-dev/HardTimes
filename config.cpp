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
			"DZ_Weapons_Magazines",
			"DZ_Gear_Camping",
			"AC_Mod_Pack",
			"AC_Sample"
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
		authorID="0";
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
		};
	};
};
class CfgVehicles
{
	class M65Jacket_Black;
	class HuntingBag;
	class CargoPants_Black;
	class BeanieHat_Grey;
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
};
