/*
 * cabtype.c
 *
 *  Created on: Mar 28, 2016
 *      Author: lifeng
 */

static struct CabType {
	int id;
	const char* code;
	const char* name;
};
	static struct CabType cab_list[]={
	{.id=1,.code="JF",.name="解放"},
	{.id=3,.code="QJ",.name="前进"},
	{.id=5,.code="JS",.name="建设"},
	{.id=6,.code="KD7",.name="KD7"},
	{.id=101,.code="DF",.name="东风"},
	{.id=102,.code="DF2",.name="东风2"},
	{.id=103,.code="DF3",.name="东风3"},
	{.id=104,.code="DF4",.name="东风4"},
	{.id=105,.code="DF4K",.name="东风4(客)"},
	{.id=106,.code="DF4C",.name="东风4(C)"},
	{.id=107,.code="DF5",.name="东风5"},
	{.id=108,.code="DF5K",.name="东风5(宽)"},
	{.id=109,.code="DF6",.name="东风6"},
	{.id=110,.code="DF7",.name="东风7"},
	{.id=111,.code="DF8",.name="东风8"},
	{.id=112,.code="DF9",.name="东风9"},
	{.id=113,.code="DF10",.name="东风10"},
	{.id=114,.code="DFH1",.name="东方红1"},
	{.id=115,.code="DFH2",.name="东方红2"},
	{.id=116,.code="DFH3",.name="东方红3"},
	{.id=117,.code="DFH5",.name="东方红5"},
	{.id=118,.code="BJ",.name="北京"},
	{.id=119,.code="BJK",.name="北京(宽)"},
	{.id=120,.code="ND2",.name="ND2"},
	{.id=121,.code="ND3",.name="ND3"},
	{.id=122,.code="ND4",.name="ND4"},
	{.id=123,.code="ND5",.name="ND5"},
	{.id=124,.code="NY5",.name="NY5"},
	{.id=125,.code="NY6",.name="NY6"},
	{.id=126,.code="NY7",.name="NY7"},
	{.id=127,.code="QY",.name="轻油"},
	{.id=128,.code="DFH21",.name="东方红21"},
	{.id=129,.code="DF7B",.name="东风7(B)"},
	{.id=130,.code="DF5KO",.name="东风5(口)S"},
	{.id=131,.code="DF7C",.name="东风7(C)"},
	{.id=132,.code="DF7S",.name="东风7(S)"},
	{.id=133,.code="GK1",.name="工矿1"},
	{.id=134,.code="GK1F",.name="工矿1F"},
	{.id=135,.code="DF4E",.name="东风4(E)"},
	{.id=136,.code="DF7D",.name="东风7(D)"},
	{.id=137,.code="GK1A",.name="工矿1(A)"},
	{.id=138,.code="DF11",.name="东风11"},
	{.id=139,.code="TA",.name="天安"},
	{.id=140,.code="DF10F",.name="东风10(F)"},
	{.id=141,.code="DF4D",.name="东风4(D)"},
	{.id=142,.code="DF8B",.name="东风8(B)"},
	{.id=143,.code="DF12",.name="东风12"},
	{.id=144,.code="DF7E",.name="DF7E"},
	{.id=145,.code="NYJ1",.name="NYJ1"},
	{.id=146,.code="NZJ1",.name="NZJ1"},
	{.id=147,.code="NZJ2",.name="NZJ2"},
	{.id=148,.code="DF4DJ",.name="DF4DJ"},
	{.id=149,.code="NDJ1",.name="新曙光"},
	{.id=150,.code="NDJ2",.name="神州"},
	{.id=151,.code="NJ2",.name="NJ2"},
	{.id=152,.code="DF7G",.name="东风7G"},
	{.id=156,.code="DF11Z",.name="东风11Z"},
	{.id=158,.code="DF11G",.name="DF11G"},
	{.id=160,.code="HXN3",.name="HXN3"},
	{.id=161,.code="HXN5",.name="HXN5"},
	{.id=162,.code="HXN3B",.name="HXN3B"},
	{.id=163,.code="HXN5B",.name="HXN5B"},
	{.id=201,.code="8G",.name="8G"},
	{.id=202,.code="8K",.name="8K"},
	{.id=203,.code="6G",.name="6G"},
	{.id=204,.code="6K",.name="6K"},
	{.id=205,.code="SS1",.name="韶山1"},
	{.id=206,.code="SS3",.name="韶山3"},
	{.id=207,.code="SS4",.name="韶山4"},
	{.id=208,.code="SS5",.name="韶山5"},
	{.id=209,.code="SS6",.name="韶山6"},
	{.id=210,.code="SS3B",.name="韶山3(G)"},
	{.id=211,.code="SS7",.name="韶山7"},
	{.id=212,.code="SS8",.name="韶山8"},
	{.id=213,.code="SS7B",.name="韶山7B"},
	{.id=214,.code="SS7C",.name="韶山7C"},
	{.id=215,.code="SS6B",.name="韶山6B"},
	{.id=216,.code="SS9",.name="韶山9"},
	{.id=217,.code="SS7D",.name="韶山7D"},
	{.id=218,.code="DJ",.name="熊猫"},
	{.id=219,.code="DJ1",.name="西门子车"},
	{.id=220,.code="DJ2",.name="澳星(AC4000)"},
	{.id=221,.code="DJF",.name="中原之星"},
	{.id=222,.code="DJJ1",.name="蓝剑"},
	{.id=223,.code="DJF",.name="先锋"},
	{.id=224,.code="SS7E",.name="韶山7E"},
	{.id=225,.code="SSJ3",.name="SSJ3"},
	{.id=226,.code="SS3C",.name="SS3C"},
	{.id=229,.code="DJ4",.name="DJ4"},
	{.id=231,.code="HXD1",.name="和谐1"},
	{.id=232,.code="HXD2",.name="和谐2"},
	{.id=233,.code="HXD3",.name="和谐3"},
	{.id=234,.code="HXD1B",.name="HXD1B"},
	{.id=235,.code="HXD2B",.name="HXD2B"},
	{.id=236,.code="HXD3B",.name="HXD3B"},
	{.id=237,.code="HXD1C",.name="HXD1C"},
	{.id=238,.code="HXD2C",.name="HXD2C"},
	{.id=239,.code="HXD3C",.name="HXD3C"},
	{.id=240,.code="HXD1D",.name="HXD1D"},
	{.id=242,.code="HXD3D",.name="HXD3D"},
	{.id=243,.code="HXD1F",.name="HXD1F"},
	{.id=244,.code="HXD2F",.name="HXD2F"},
	{.id=301,.code="CRH1",.name="动车组"},
	{.id=302,.code="CRH2",.name="动车组"},
	{.id=303,.code="CRH3",.name="动车组"},
	{.id=304,.code="CRH4",.name="动车组"},
	{.id=305,.code="CRH5",.name="动车组"},
	{.id=306,.code="CRH380A",.name="动车组"},
	{.id=307,.code="CRH380B",.name="动车组"},
	{.id=308,.code="CRH380C",.name="动车组"},
	{.id=309,.code="CRH380D",.name="动车组"},
	{.id=351,.code="JW-3",.name="JW-3"},
	{.id=352,.code="JW-4",.name="JW-4"},
	{.id=353,.code="JW-7",.name="JW-7"},
	{.id=354,.code="TY2",.name="TY2"},
	{.id=355,.code="TY5",.name="TY5"},
	{.id=356,.code="TY6",.name="TY6"},
	{.id=357,.code="DA7B",.name="DA7B"},
	{.id=358,.code="DA8",.name="DA8"},
	{.id=359,.code="DA11",.name="DA11"},
	{.id=360,.code="DA12",.name="DA12"},
	{.id=361,.code="DA220",.name="DA220"},
	{.id=381,.code="JZW-4",.name="JZW-4"},
	{.id=382,.code="DAX",.name="DAX"},
	{.id=391,.code="QGC-16",.name="QGC-16"},
	{.id=392,.code="QGC-25",.name="QGC-25"},
	{.id=500,.code="GC-160",.name="重型轨道车"},
	{.id=501,.code="GC-170",.name="重型轨道车"},
	{.id=502,.code="JY-230",.name="重型轨道车"},
	{.id=503,.code="GC-210",.name="重型轨道车"},
	{.id=504,.code="GCS-220",.name="重型轨道车"},
	{.id=505,.code="GCS-270",.name="重型轨道车"},
	{.id=506,.code="GCS-290",.name="重型轨道车"},
	{.id=507,.code="JY-400G",.name="重型轨道车"},
	{.id=508,.code="GCY-400G",.name="重型轨道车"},
	{.id=509,.code="GCD-470",.name="重型轨道车"},
	{.id=605,.code="GQ16-2",.name="起重轨道车"},
	{.id=608,.code="GQ30",.name="起重轨道车"},
	{.id=655,.code="SRM-80",.name="道渣清筛车"},
	{.id=686,.code="D08-32",.name="双枕捣固车"},
	{.id=690,.code="CD08-475",.name="道岔捣固车"},
	{.id=695,.code="WD-320",.name="动力稳定车"},
	{.id=700,.code="PGM-48",.name="钢轨打磨车"},
	{.id=715,.code="GTC-4",.name="钢轨探伤车"},
	{.id=801,.code="NS0631",.name="国产起重机"},
	{.id=802,.code="N1002",.name="国产起重机"},
	{.id=803,.code="NS100G",.name="国产起重机"},
	{.id=804,.code="NS100GT",.name="国产起重机"},
	{.id=805,.code="NS1251",.name="国产起重机"},
	{.id=806,.code="N1601",.name="国产起重机"},
	{.id=807,.code="NS1601",.name="国产起重机"},
	{.id=808,.code="NS1600",.name="进口起重机"},
};

const char * get_cab_code(int id)
{
	int i;
	for(i=0;i<sizeof(cab_list);i++)
	{
		if(cab_list[i].id==id)
		{
			return cab_list[i].code;
		}
	}
	return "XXX";
}
