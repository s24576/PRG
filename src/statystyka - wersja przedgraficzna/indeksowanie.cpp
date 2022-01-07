#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string i_z,n_z,przekaz;
    fstream zapis;
    zapis.open("Awszyscy.txt",ios::out);
    int liga=1;
    int druzyna=1;

    fstream mnc;
    mnc.open("PLcity.txt",ios::in);
    for(int man_c=0;man_c<11;man_c++)
    {
        mnc>>i_z>>n_z;
		przekaz=i_z+" "+n_z;
		zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<man_c+1<<endl;
    }
    mnc.close();
	druzyna++;
    fstream mnu;
    mnu.open("PLunited.txt",ios::in);
    for(int man_u=0;man_u<11;man_u++)
    {
        mnu>>i_z>>n_z;
		przekaz=i_z+" "+n_z;
		zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<man_u+1<<endl;
    }
    mnu.close();
	druzyna++;
    fstream lfc;
    lfc.open("PLliverpool.txt",ios::in);
    for(int liverpool=0;liverpool<11;liverpool++)
    {
        lfc>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<liverpool+1<<endl;
    }
    lfc.close();
	druzyna++;
    fstream cfc;
    cfc.open("PLchelsea.txt",ios::in);
    for(int chelsea=0;chelsea<11;chelsea++)
    {
        cfc>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<chelsea+1<<endl;
    }
    cfc.close();
	druzyna++;
    fstream lei;
    lei.open("PLleicester.txt",ios::in);
    for(int leicester=0;leicester<11;leicester++)
    {
        lei>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<leicester+1<<endl;
    }
    lei.close();
	druzyna++;
    fstream whu;
    whu.open("PLwhu.txt",ios::in);
    for(int whun=0;whun<11;whun++)
    {
        whu>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<whun+1<<endl;
    }
    whu.close();
	druzyna++;
    fstream tot;
    tot.open("PLtottenham.txt",ios::in);
    for(int tottenham=0;tottenham<11;tottenham++)
    {
        tot>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<tottenham+1<<endl;
    }
    tot.close();
	druzyna++;
    fstream ars;
    ars.open("PLarsenal.txt",ios::in);
    for(int arsenal=0;arsenal<11;arsenal++)
    {
        ars>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<arsenal+1<<endl;
    }
    ars.close();
	druzyna++;
    fstream leu;
    leu.open("PLleeds.txt",ios::in);
    for(int leeds=0;leeds<11;leeds++)
    {
        leu>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<leeds+1<<endl;
    }
    leu.close();
	druzyna++;
    fstream eve;
    eve.open("everton.txt",ios::in);
    for(int everton=0;everton<11;everton++)
    {
        eve>>i_z>>n_z;
		przekaz=i_z+" "+n_z;
		zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<everton+1<<endl;
    }
    eve.close();
	druzyna++;
    fstream asv;
    asv.open("PLvilla.txt",ios::in);
    for(int villa=0;villa<11;villa++)
    {
        asv>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<villa+1<<endl;
    }
    asv.close();
    druzyna++;
    fstream ncl;
    ncl.open("PLnewcastle.txt",ios::in);
    for(int newcastle=0;newcastle<11;newcastle++)
    {
        ncl>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<newcastle+1<<endl;
    }
    ncl.close();
    druzyna++;
    fstream wov;
    wov.open("PLwolverhampton.txt",ios::in);
    for(int wolverhampton=0;wolverhampton<11;wolverhampton++)
    {
        wov>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<wolverhampton+1<<endl;
    }
    wov.close();
    druzyna++;
    fstream cpl;
    cpl.open("PLcrystal.txt",ios::in);
    for(int crystal=0;crystal<11;crystal++)
    {
        cpl>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<crystal+1<<endl;
    }
    cpl.close();
    druzyna++;
    fstream sth;
    sth.open("PLsouthampton.txt",ios::in);
    for(int southampton=0;southampton<11;southampton++)
    {
        sth>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<southampton+1<<endl;
    }
    sth.close();
    druzyna++;
    fstream bri;
    bri.open("PLbrighton.txt",ios::in);
    for(int brighton=0;brighton<11;brighton++)
    {
        bri>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<brighton+1<<endl;
    }
    bri.close();
    druzyna++;
    fstream bur;
    bur.open("PLburnley.txt",ios::in);
    for(int burnley=0;burnley<11;burnley++)
    {
        bur>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<burnley+1<<endl;
    }
    bur.close();
    druzyna++;
    fstream ful;
    ful.open("PLfulham.txt",ios::in);
    for(int fulham=0;fulham<11;fulham++)
    {
        ful>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<fulham+1<<endl;
    }
    ful.close();
    druzyna++;
    fstream wba;
    wba.open("PLwba.txt",ios::in);
    for(int brom=0;brom<11;brom++)
    {
        wba>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<brom+1<<endl;
    }
    wba.close();
    druzyna++;
    fstream shu;
    shu.open("PLsheffield.txt",ios::in);
    for(int sheffield=0;sheffield<11;sheffield++)
    {
        shu>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<sheffield+1<<endl;
    }
    shu.close();

    liga=2;
    druzyna=1;

    fstream SAint;
    SAint.open("SAinter.txt",ios::in);
    for(int man_c=0;man_c<11;man_c++)
    {
        SAint>>i_z>>n_z;
		przekaz=i_z+" "+n_z;
		zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<man_c+1<<endl;
    }
    SAint.close();
	druzyna++;
    fstream SAmil;
    SAmil.open("SAmilan.txt",ios::in);
    for(int man_u=0;man_u<11;man_u++)
    {
        SAmil>>i_z>>n_z;
		przekaz=i_z+" "+n_z;
		zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<man_u+1<<endl;
    }
    SAmil.close();
	druzyna++;
    fstream SAatl;
    SAatl.open("SAatlanta.txt",ios::in);
    for(int liverpool=0;liverpool<11;liverpool++)
    {
        SAatl>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<liverpool+1<<endl;
    }
    SAatl.close();
	druzyna++;
    fstream SAjuv;
    SAjuv.open("SAjuventus.txt",ios::in);
    for(int chelsea=0;chelsea<11;chelsea++)
    {
        SAjuv>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<chelsea+1<<endl;
    }
    SAjuv.close();
	druzyna++;
    fstream SAnap;
    SAnap.open("SAnapoli.txt",ios::in);
    for(int SAnapcester=0;SAnapcester<11;SAnapcester++)
    {
        SAnap>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<SAnapcester+1<<endl;
    }
    SAnap.close();
	druzyna++;
    fstream SAlaz;
    SAlaz.open("SAlazio.txt",ios::in);
    for(int SAlazn=0;SAlazn<11;SAlazn++)
    {
        SAlaz>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<SAlazn+1<<endl;
    }
    SAlaz.close();
	druzyna++;
    fstream SArom;
    SArom.open("SAroma.txt",ios::in);
    for(int SAromenal=0;SAromenal<11;SAromenal++)
    {
        SArom>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<SAromenal+1<<endl;
    }
    SArom.close();
    druzyna++;
    fstream SAsas;
    SAsas.open("SAsassuolo.txt",ios::in);
    for(int SAsastenham=0;SAsastenham<11;SAsastenham++)
    {
        SAsas>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<SAsastenham+1<<endl;
    }
    SAsas.close();
	druzyna++;
    fstream SAsam;
    SAsam.open("SAsampdoria.txt",ios::in);
    for(int leeds=0;leeds<11;leeds++)
    {
        SAsam>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<leeds+1<<endl;
    }
    SAsam.close();
	druzyna++;
    fstream SAver;
    SAver.open("SAwerona.txt",ios::in);
    for(int SAverrton=0;SAverrton<11;SAverrton++)
    {
        SAver>>i_z>>n_z;
		przekaz=i_z+" "+n_z;
		zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<SAverrton+1<<endl;
    }
    SAver.close();
	druzyna++;
    fstream SAgen;
    SAgen.open("SAgenoa.txt",ios::in);
    for(int villa=0;villa<11;villa++)
    {
        SAgen>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<villa+1<<endl;
    }
    SAgen.close();
    druzyna++;
    fstream SAbol;
    SAbol.open("SAbologna.txt",ios::in);
    for(int newcastle=0;newcastle<11;newcastle++)
    {
        SAbol>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<newcastle+1<<endl;
    }
    SAbol.close();
    druzyna++;
    fstream SAfio;
    SAfio.open("SAfiorentina.txt",ios::in);
    for(int wolverhampton=0;wolverhampton<11;wolverhampton++)
    {
        SAfio>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<wolverhampton+1<<endl;
    }
    SAfio.close();
    druzyna++;
    fstream SAudi;
    SAudi.open("SAudinese.txt",ios::in);
    for(int crystal=0;crystal<11;crystal++)
    {
        SAudi>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<crystal+1<<endl;
    }
    SAudi.close();
    druzyna++;
    fstream SAspe;
    SAspe.open("SAspezia.txt",ios::in);
    for(int southampton=0;southampton<11;southampton++)
    {
        SAspe>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<southampton+1<<endl;
    }
    SAspe.close();
    druzyna++;
    fstream SAcag;
    SAcag.open("SAcagliari.txt",ios::in);
    for(int SAcagghton=0;SAcagghton<11;SAcagghton++)
    {
        SAcag>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<SAcagghton+1<<endl;
    }
    SAcag.close();
    druzyna++;
    fstream SAtor;
    SAtor.open("SAtorino.txt",ios::in);
    for(int SAtornley=0;SAtornley<11;SAtornley++)
    {
        SAtor>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<SAtornley+1<<endl;
    }
    SAtor.close();
    druzyna++;
    fstream SAben;
    SAben.open("SAbenevento.txt",ios::in);
    for(int SAbenham=0;SAbenham<11;SAbenham++)
    {
        SAben>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<SAbenham+1<<endl;
    }
    SAben.close();
    druzyna++;
    fstream SAcro;
    SAcro.open("SAcrotone.txt",ios::in);
    for(int brom=0;brom<11;brom++)
    {
        SAcro>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<brom+1<<endl;
    }
    SAcro.close();
    druzyna++;
    fstream SApar;
    SApar.open("SAparma.txt",ios::in);
    for(int sheffield=0;sheffield<11;sheffield++)
    {
        SApar>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<sheffield+1<<endl;
    }
    SApar.close();

    liga=3;
    druzyna=1;


    fstream lil;
    lil.open("L1lil.txt", ios::in);
    for (int Lille = 0; Lille < 11; Lille++)
    {
        lil >> i_z >> n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<Lille+1<<endl;
    }
    lil.close();

	druzyna++;
    fstream psg;
    psg.open("L1psg.txt", ios::in);
    for (int Paris = 0; Paris < 11; Paris++)
    {
        psg >> i_z >> n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<Paris+1<<endl;
    }
    psg.close();
druzyna++;
    fstream mon;
    mon.open("L1mon.txt", ios::in);
    for (int Monaco = 0; Monaco < 11; Monaco++)
    {
        mon >> i_z >> n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<Monaco+1<<endl;
    }
    mon.close();
druzyna++;
    fstream lyo;
    lyo.open("L1lyo.txt", ios::in);
    for (int Lyon = 0; Lyon < 11; Lyon++)
    {
        lyo >> i_z >> n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<Lyon+1<<endl;
    }
    lyo.close();
druzyna++;
    fstream mar;
    mar.open("L1mar.txt", ios::in);
    for (int Marseille = 0; Marseille < 11; Marseille++)
    {
        mar >> i_z >> n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<Marseille+1<<endl;
    }
    mar.close();
druzyna++;
    fstream ren;
    ren.open("L1ren.txt", ios::in);
    for (int Rennais = 0; Rennais < 11; Rennais++)
    {
        ren >> i_z >> n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<Rennais+1<<endl;
    }
    ren.close();
druzyna++;
    fstream len;
    len.open("L1len.txt", ios::in);
    for (int Lens = 0; Lens < 11; Lens++)
    {
        len >> i_z >> n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<Lens+1<<endl;
    }
    len.close();
druzyna++;
    fstream mot;
    mot.open("L1mot.txt", ios::in);
    for (int Montpellier = 0; Montpellier < 11; Montpellier++)
    {
        mot >> i_z >> n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<Montpellier+1<<endl;
    }
    mot.close();
druzyna++;
    fstream nic;
    nic.open("L1nic.txt", ios::in);
    for (int Nice = 0; Nice < 11; Nice++)
    {
        nic >> i_z >> n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<Nice+1<<endl;
    }
    nic.close();
druzyna++;
    fstream met;
    met.open("L1met.txt", ios::in);
    for (int Metz = 0; Metz < 11; Metz++)
    {
        met >> i_z >> n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<Metz+1<<endl;
    }
    met.close();
druzyna++;
    fstream eti;
    eti.open("L1eti.txt", ios::in);
    for (int Etienne = 0; Etienne < 11; Etienne++)
    {
        eti >> i_z >> n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<Etienne+1<<endl;
    }
    eti.close();
druzyna++;
    fstream bor;
    bor.open("L1bor.txt", ios::in);
    for (int Bordeaux = 0; Bordeaux < 11; Bordeaux++)
    {
        bor >> i_z >> n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<Bordeaux+1<<endl;
    }
    bor.close();
druzyna++;
    fstream ang;
    ang.open("L1ang.txt", ios::in);
    for (int Angers = 0; Angers < 11; Angers++)
    {
        ang >> i_z >> n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<Angers+1<<endl;
    }
    ang.close();
druzyna++;
    fstream rei;
    rei.open("L1rei.txt", ios::in);
    for (int Reims = 0; Reims < 11; Reims++)
    {
        rei >> i_z >> n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<Reims+1<<endl;
    }
    rei.close();
druzyna++;
    fstream str;
    str.open("L1str.txt", ios::in);
    for (int Strasbourg = 0; Strasbourg < 11; Strasbourg++)
    {
        str >> i_z >> n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<Strasbourg+1<<endl;
    }
    str.close();
druzyna++;
    fstream lor;
    lor.open("L1lor.txt", ios::in);
    for (int Lorient = 0; Lorient < 11; Lorient++)
    {
        lor >> i_z >> n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<Lorient+1<<endl;
    }
    lor.close();
druzyna++;
    fstream bre;
    bre.open("L1bre.txt", ios::in);
    for (int Brestois = 0; Brestois < 11; Brestois++)
    {
        bre >> i_z >> n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<Brestois+1<<endl;
	}
    bre.close();
druzyna++;
    fstream nan;
    nan.open("L1nan.txt", ios::in);
    for (int Nantes = 0; Nantes < 11; Nantes++)
    {
        nan >> i_z >> n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<Nantes+1<<endl;
    }
    nan.close();
druzyna++;
    fstream nim;
    nim.open("L1nim.txt", ios::in);
    for (int Nimes = 0; Nimes < 11; Nimes++)
    {
        nim >> i_z >> n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<Nimes+1<<endl;
    }
    nim.close();
    druzyna++;
    fstream dij;
    dij.open("L1dij.txt", ios::in);
    for (int Dijon = 0; Dijon < 11; Dijon++)
    {
        dij >> i_z >> n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<Dijon+1<<endl;
    }
    dij.close();

    liga=4;
    druzyna=1;


    fstream mon_b;
    mon_b.open("BLbayern.txt",ios::in);
    for(int bayern_m=0;bayern_m<11;bayern_m++)
    {
        mon_b>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<bayern_m+1<<endl;
    }
    mon_b.close();
druzyna++;
    fstream rbl;
    rbl.open("BLlipsk.txt",ios::in);
    for(int rb_l=0;rb_l<11;rb_l++)
    {
        rbl>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<rb_l+1<<endl;
    }
    rbl.close();
druzyna++;
    fstream bod;
    bod.open("BLborussiad.txt",ios::in);
    for(int borussia_d=0;borussia_d<11;borussia_d++)
    {
        bod>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<< borussia_d+1<<endl;
    }
    bod.close();
druzyna++;
    fstream vfl;
    vfl.open("BLwolfsburg.txt",ios::in);
    for(int wolfsburg=0;wolfsburg<11;wolfsburg++)
    {
        vfl>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<wolfsburg+1<<endl;
    }
    vfl.close();
druzyna++;
    fstream ein;
    ein.open("BLeintracht.txt",ios::in);
    for(int eintracht=0;eintracht<11;eintracht++)
    {
        ein>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<eintracht+1<<endl;
    }
    ein.close();
druzyna++;
    fstream bay;
    bay.open("BLbayer.txt",ios::in);
    for(int bayer=0;bayer<11;bayer++)
    {
        bay>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<bayer+1<<endl;
    }
    bay.close();
druzyna++;
    fstream uni;
    uni.open("BLunion.txt",ios::in);
    for(int union_b=0;union_b<11;union_b++)
    {
        uni>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<union_b+1<<endl;
    }
    uni.close();
druzyna++;
    fstream bom;
    bom.open("BLbmgladbach.txt",ios::in);
    for(int monchengladbach=0;monchengladbach<11;monchengladbach++)
    {
        bom>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<monchengladbach+1<<endl;
    }
    bom.close();
druzyna++;
    fstream vfb;
    vfb.open("BLstuttgart.txt",ios::in);
    for(int stuttgart=0;stuttgart<11;stuttgart++)
    {
        vfb>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<stuttgart+1<<endl;
    }
    vfb.close();
druzyna++;
    fstream scf;
    scf.open("BLfreiburg.txt",ios::in);
    for(int freiburg=0;freiburg<11;freiburg++)
    {
        scf>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<freiburg+1<<endl;
    }
    scf.close();
druzyna++;
    fstream tsg;
    tsg.open("BLhoffenheim.txt",ios::in);
    for(int hoffenheim=0;hoffenheim<11;hoffenheim++)
    {
        tsg>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<hoffenheim+1<<endl;
    }
    tsg.close();
druzyna++;
    fstream fsv;
    fsv.open("BLmainz.txt",ios::in);
    for(int mainz=0;mainz<11;mainz++)
    {
        fsv>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<mainz+1<<endl;
    }
    fsv.close();
druzyna++;
    fstream fca;
    fca.open("BLaugsburg.txt",ios::in);
    for(int augsburg=0;augsburg<11;augsburg++)
    {
        fca>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<augsburg+1<<endl;
    }
    fca.close();
druzyna++;
    fstream her;
    her.open("BLhertha.txt",ios::in);
    for(int hertha=0;hertha<11;hertha++)
    {
        her>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<hertha+1<<endl;
    }
    her.close();
druzyna++;
    fstream arm;
    arm.open("BLarminia.txt",ios::in);
    for(int arminia=0;arminia<11;arminia++)
    {
        arm>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<arminia+1<<endl;
    }
    arm.close();
druzyna++;
    fstream odk;
    odk.open("BLkoln.txt",ios::in);
    for(int koln=0;koln<11;koln++)
    {
        odk>>i_z>>n_z;
		przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<koln+1<<endl;
    }
    odk.close();
druzyna++;
    fstream wer;
    wer.open("BLwerder.txt",ios::in);
    for(int werder=0;werder<11;werder++)
    {
        wer>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<werder+1<<endl;
    }
    wer.close();
druzyna++;
    fstream ods;
    ods.open("BLschalke.txt",ios::in);
    for(int schalke=0;schalke<11;schalke++)
    {
        ods>>i_z>>n_z;
        przekaz=i_z+" "+n_z;
        zapis<<przekaz<<" "<<liga<<" "<<druzyna<<" "<<schalke+1<<endl;
    }
    ods.close();

}
