class CfgPatches
{
	class 111_SOG_Objects
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"3den_objects"};
	};
};

class cfgVehicles
{
	
	class Static;
	class 111_SOG_Banner: Static
	{
		author = "Krossin & Dagger";
		editorCategory = "EdCat_Signs";
		editorSubcategory = "EdSubcat_Military";
		displayName = "111th SOG Banner (USA)";
		icon = "iconObject_5x1";
		scope = 2;
		model = "\3den_objects\objects_f\banner_f\banner_f.p3d";
		vehicleClass = "signs";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"\3den_objects\objects_f\banner_f\banner.rvmat"};
		hiddenSelectionsTextures[] = {"\111_SOG_ITEMS\data\banner_usa_f.paa"};
	};
	
	class 111_SOG_Banner_CIA: 111_SOG_Banner
	{
		editorPreview = "3den_objects\data_f\editor_previews_f\Banner_TFA_F.jpg";
		displayName = "111th SOG Banner (CIA)";
		hiddenSelectionsTextures[] = {"\111_SOG_ITEMS\data\banner_CIA_f.paa"};
	};
	
	class 111_SOG_Banner_111: 111_SOG_Banner
	{
		editorPreview = "3den_objects\data_f\editor_previews_f\Banner_TFA_F.jpg";
		displayName = "111th SOG Banner (111)";
		hiddenSelectionsTextures[] = {"\111_SOG_ITEMS\data\banner_111_f.paa"};
	};
};