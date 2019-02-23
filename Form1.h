#pragma once
#include "OpenGL.h"


namespace PlantCreator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace OpenGLForm;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			OpenGL = gcnew COpenGL(this, 700, 500);
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  pickPlantgroupBox1;
	private: System::Windows::Forms::Label^  classlabel;
	private: System::Windows::Forms::Label^  divisionlabel;
	private: System::Windows::Forms::Label^  orderlabel;

	private: System::Windows::Forms::Label^  familyLabel;
	private: System::Windows::Forms::Label^  subOrderLabel;
	private: System::Windows::Forms::Label^  subClasslabel;
	private: System::Windows::Forms::Label^  subDivisionlabel;
	private: System::Windows::Forms::Label^  speciesLabel;

	private: System::Windows::Forms::Label^  genusLabel;
	private: System::Windows::Forms::Label^  subFamilyLabel;
	private: System::Windows::Forms::ComboBox^  subFamilycomboBox;

	private: System::Windows::Forms::ComboBox^  familycomboBox;
	private: System::Windows::Forms::ComboBox^  subOrdercomboBox;
	private: System::Windows::Forms::ComboBox^  ordercomboBox;
	private: System::Windows::Forms::ComboBox^  subClasscomboBox;
	private: System::Windows::Forms::ComboBox^  classcomboBox;
	private: System::Windows::Forms::ComboBox^  subDivisioncomboBox;
	private: System::Windows::Forms::ComboBox^  divisioncomboBox;


	private: System::Windows::Forms::ComboBox^  speciescomboBox;

	private: System::Windows::Forms::ComboBox^  genuscomboBox;

	private: System::Windows::Forms::Label^  seeThePlantlabel;
	private: System::Windows::Forms::GroupBox^  MakeaPlantgroupBox;
	private: System::Windows::Forms::GroupBox^  stemPropertiesgroupBox;





	private: System::Windows::Forms::Label^  stemRadiuslabel;



	private: System::Windows::Forms::Label^  steemLengthlabel;
	private: System::Windows::Forms::Label^  stemStringlabel;
	private: System::Windows::Forms::GroupBox^  petiolePropertiesgroupBox;
	private: System::Windows::Forms::Label^  petioleLengthlabel;
	private: System::Windows::Forms::TextBox^  txtstemLstring;
	private: System::Windows::Forms::TextBox^  txtpetioleLstring;
	private: System::Windows::Forms::Label^  petioleLStringlabel;
	private: System::Windows::Forms::Label^  petioleRadiuslabel;
	private: System::Windows::Forms::GroupBox^  veinPropertiesgroupBox;
	private: System::Windows::Forms::Label^  veinLengthlabel;
	private: System::Windows::Forms::Label^  veinLStringlabel;
	private: System::Windows::Forms::TextBox^  txtveinLstring;
	private: System::Windows::Forms::Label^  veinRadiuslabel;
	private: System::Windows::Forms::GroupBox^  leafPropertiesgroupBox;
	private: System::Windows::Forms::ComboBox^  LeafShapecomboBox;
	private: System::Windows::Forms::Label^  leafShapelabel;
	private: System::Windows::Forms::Label^  leafRadiuslabel;
	private: System::Windows::Forms::Label^  leafLengthlabel;
	private: System::Windows::Forms::GroupBox^  fruitSeedgroupBox;
	private: System::Windows::Forms::ComboBox^  fruitTypecomboBox;
	private: System::Windows::Forms::Label^  fruitTypelabel;
	private: System::Windows::Forms::Label^  notelabel;
	private: System::Windows::Forms::Label^  seedTypelabel;
	private: System::Windows::Forms::ComboBox^  flowerTypecomboBox;
	private: System::Windows::Forms::Label^  flowerTypelabel;
	private: System::Windows::Forms::TextBox^  seedTypetextBox;
	private: System::Windows::Forms::Button^  defaultbutton;
	private: System::Windows::Forms::Button^  renderMakePlantbutton;
	private: System::Windows::Forms::GroupBox^  environmentPlantgroupBox;
	private: System::Windows::Forms::Label^  soilTexturelabel;
	private: System::Windows::Forms::Label^  waterAmountlabel;
	private: System::Windows::Forms::ComboBox^  soilTypecomboBox;
	private: System::Windows::Forms::Label^  soilTypelabel;
	private: System::Windows::Forms::ComboBox^  soilTexturecomboBox;
private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::GroupBox^  macrogroupBox;
private: System::Windows::Forms::Label^  oxygenlabel;
private: System::Windows::Forms::Label^  nitrogenlabel;
private: System::Windows::Forms::Label^  magnesiumlabel;
private: System::Windows::Forms::Label^  hydrogenlabel;

private: System::Windows::Forms::Label^  calciumlabel;
private: System::Windows::Forms::Label^  sulferlabel;
private: System::Windows::Forms::Label^  potassiumlabel;
private: System::Windows::Forms::Label^  phosphorouslabel;
private: System::Windows::Forms::TextBox^  sulfurtextBox;
private: System::Windows::Forms::TextBox^  potassiumtextBox;
private: System::Windows::Forms::TextBox^  phosphoroustextBox;
private: System::Windows::Forms::TextBox^  oxygentextBox;
private: System::Windows::Forms::TextBox^  nitrogentextBox;
private: System::Windows::Forms::TextBox^  magnesiumtextBox;
private: System::Windows::Forms::TextBox^  hydrogentextBox;

private: System::Windows::Forms::TextBox^  calciumtextBox;
private: System::Windows::Forms::GroupBox^  microgroupBox;


private: System::Windows::Forms::TextBox^  zinctextBox;
private: System::Windows::Forms::TextBox^  sodiumtextBox;

private: System::Windows::Forms::TextBox^  molybdenumtextBox;
private: System::Windows::Forms::TextBox^  manganesetextBox;
private: System::Windows::Forms::TextBox^  irontextBox;
private: System::Windows::Forms::TextBox^  coppertextBox;
private: System::Windows::Forms::TextBox^  chlorinetextBox;
private: System::Windows::Forms::TextBox^  borontextBox;
private: System::Windows::Forms::Label^  zinclabel;
private: System::Windows::Forms::Label^  nickellabel;
private: System::Windows::Forms::Label^  molyblabel;
private: System::Windows::Forms::Label^  manganeselabel;
private: System::Windows::Forms::Label^  ironlabel;
private: System::Windows::Forms::Label^  copperlabel;
private: System::Windows::Forms::Label^  chlorinelabel;
private: System::Windows::Forms::Label^  boronlabel;
private: System::Windows::Forms::GroupBox^  animatePlantgroupBox;
private: System::Windows::Forms::Button^  rotateupbutton;
private: System::Windows::Forms::Button^  movebackbutton;
private: System::Windows::Forms::Button^  rotaterightbutton;
private: System::Windows::Forms::Button^  rotateleftbutton;
private: System::Windows::Forms::Button^  takegenerationbutton;
private: System::Windows::Forms::Button^  addGenerationbutton;
private: System::Windows::Forms::Button^  rotatedownbutton;
private: System::Windows::Forms::Button^  moveforwardbutton;
private: System::Windows::Forms::GroupBox^  windgroupBox;
private: System::Windows::Forms::TextBox^  txtwinddirectionz;
private: System::Windows::Forms::TextBox^  txtwinddirectiony;
private: System::Windows::Forms::TextBox^  txtwinddirectionx;
private: System::Windows::Forms::Button^  onoffbutton;
private: System::Windows::Forms::Label^  strengthlabel;
private: System::Windows::Forms::Label^  directionlabel;
private: System::Windows::Forms::TextBox^  txtwindStrength;
private: System::Windows::Forms::ComboBox^  seasoncomboBox;
private: System::Windows::Forms::Label^  seasonlabel;
private: System::Windows::Forms::Timer^  timer1;
private: System::ComponentModel::IContainer^  components;
private: System::Windows::Forms::MaskedTextBox^  numveinLength;
private: System::Windows::Forms::MaskedTextBox^  numveinRadius;
private: System::Windows::Forms::MaskedTextBox^  numpetioleLength;
private: System::Windows::Forms::MaskedTextBox^  numpetioleRadius;
private: System::Windows::Forms::MaskedTextBox^  numstemLength;
private: System::Windows::Forms::MaskedTextBox^  numstemRadius;
private: System::Windows::Forms::MaskedTextBox^  numleafRadius;
private: System::Windows::Forms::MaskedTextBox^  numleafLength;
private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand1;
private: System::Data::OleDb::OleDbConnection^  oleDbConnection1;
private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand1;
private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand1;
private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand1;
private: System::Data::OleDb::OleDbDataAdapter^  divisionoleDbDataAdapter;
private: PlantCreator::divisionDataSet^  divisionDataSet1;
private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand2;
private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand2;
private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand2;
private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand2;
private: System::Data::OleDb::OleDbDataAdapter^  classoleDbDataAdapter;
private: PlantCreator::classDataSet^  classDataSet1;
private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand3;
private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand3;
private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand3;
private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand3;
private: System::Data::OleDb::OleDbDataAdapter^  subDivisionoleDbDataAdapter;
private: PlantCreator::subDivisionDataSet^  subDivisionDataSet1;
private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand4;
private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand4;
private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand4;
private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand4;
private: System::Data::OleDb::OleDbDataAdapter^  subClassoleDbDataAdapter;
private: PlantCreator::subClassDataSet^  subClassDataSet1;
private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand5;
private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand5;
private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand5;
private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand5;
private: System::Data::OleDb::OleDbDataAdapter^  orderoleDbDataAdapter;
private: PlantCreator::orderDataSet^  orderDataSet1;
private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand6;
private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand6;
private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand6;
private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand6;
private: System::Data::OleDb::OleDbDataAdapter^  subOrderoleDbDataAdapter;
private: PlantCreator::subOrderDataSet^  subOrderDataSet1;
private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand7;
private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand7;
private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand7;
private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand7;
private: System::Data::OleDb::OleDbDataAdapter^  familyoleDbDataAdapter;
private: PlantCreator::familyDataSet^  familyDataSet1;
private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand8;
private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand8;
private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand8;
private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand8;
private: System::Data::OleDb::OleDbDataAdapter^  subFamilyoleDbDataAdapter;
private: PlantCreator::subFamilyDataSet^  subFamilyDataSet1;
private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand9;
private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand9;
private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand9;
private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand9;
private: System::Data::OleDb::OleDbDataAdapter^  genusoleDbDataAdapter;
private: PlantCreator::genusDataSet^  genusDataSet1;
private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand10;
private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand10;
private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand10;
private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand10;
private: System::Data::OleDb::OleDbDataAdapter^  speciesoleDbDataAdapter;
private: PlantCreator::speciesDataSet^  speciesDataSet1;
private: System::Windows::Forms::Button^  seasonButton;
private: System::Windows::Forms::Button^  growthButton;
private: System::Windows::Forms::GroupBox^  seasonBox;
private: System::Windows::Forms::Button^  NewPlant;


private: System::Windows::Forms::Label^  PlantInstance;
private: System::Windows::Forms::ComboBox^  plantGraphicscomboBox;

private: PlantCreator::PlantGraphics^  plantGraphics1;
private: PlantCreator::PlantGraphicsTableAdapters::PlantGraphicsInformationTableAdapter^  PlantGraphicsInformationTableAdapter;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::TextBox^  calciumMintextBox;
private: System::Windows::Forms::TextBox^  magnesiumopttextBox;

private: System::Windows::Forms::TextBox^  hydrogenopttextBox;

private: System::Windows::Forms::TextBox^  calciumopttextBox;
private: System::Windows::Forms::TextBox^  sulfurmintextBox;



private: System::Windows::Forms::TextBox^  potassiummintextBox;

private: System::Windows::Forms::TextBox^  phosphorousmintextBox;

private: System::Windows::Forms::TextBox^  nitrogenmintextBox;

private: System::Windows::Forms::TextBox^  magnesiummintextBox;

private: System::Windows::Forms::TextBox^  hydrogenmintextBox;
private: System::Windows::Forms::TextBox^  phosphoroustoxtextBox;



private: System::Windows::Forms::TextBox^  nitrogentoxtextBox;


private: System::Windows::Forms::TextBox^  magnesiumtoxtextBox;

private: System::Windows::Forms::TextBox^  hydrogentoxtextBox;

private: System::Windows::Forms::TextBox^  calciumtoxtextBox;
private: System::Windows::Forms::TextBox^  sulfuropttextBox;



private: System::Windows::Forms::TextBox^  potassiumopttextBox;

private: System::Windows::Forms::TextBox^  phosphorousopttextBox;

private: System::Windows::Forms::TextBox^  nitrogenopttextBox;
private: System::Windows::Forms::TextBox^  sulfurtoxtextBox;


private: System::Windows::Forms::TextBox^  potassiumtoxtextBox;
private: System::Windows::Forms::TextBox^  manganeseopttextBox;

private: System::Windows::Forms::TextBox^  ironopttextBox;

private: System::Windows::Forms::TextBox^  copperopttextBox;

private: System::Windows::Forms::TextBox^  chlorineopttextBox;
private: System::Windows::Forms::TextBox^  zincmintextBox;



private: System::Windows::Forms::TextBox^  borontoxtextBox;

private: System::Windows::Forms::TextBox^  boronopttextBox;
private: System::Windows::Forms::TextBox^  sodiummintextBox;





private: System::Windows::Forms::TextBox^  molybdenummintextBox;

private: System::Windows::Forms::TextBox^  manganesemintextBox;


private: System::Windows::Forms::TextBox^  ironmintextBox;



private: System::Windows::Forms::TextBox^  coppermintextBox;

private: System::Windows::Forms::TextBox^  chlorinemintextBox;


private: System::Windows::Forms::TextBox^  boronmintextBox;
private: System::Windows::Forms::TextBox^  zincopttextBox;




private: System::Windows::Forms::TextBox^  sodiumtoxtextBox;

private: System::Windows::Forms::TextBox^  molybdenumtoxtextBox;

private: System::Windows::Forms::TextBox^  manganesetoxtextBox;

private: System::Windows::Forms::TextBox^  irontoxtextBox;

private: System::Windows::Forms::TextBox^  coppertoxtextBox;

private: System::Windows::Forms::TextBox^  chlorinetoxtextBox;
private: System::Windows::Forms::TextBox^  sodiumopttextBox;


private: System::Windows::Forms::TextBox^  molybdenumopttextBox;
private: System::Windows::Forms::TextBox^  zinctoxtextBox;
private: System::Windows::Forms::Button^  Wheat_button;





















	protected: 

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

		OpenGLForm::COpenGL ^ OpenGL;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->pickPlantgroupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->Wheat_button = (gcnew System::Windows::Forms::Button());
			this->plantGraphicscomboBox = (gcnew System::Windows::Forms::ComboBox());
			this->plantGraphics1 = (gcnew PlantCreator::PlantGraphics());
			this->PlantInstance = (gcnew System::Windows::Forms::Label());
			this->seeThePlantlabel = (gcnew System::Windows::Forms::Label());
			this->speciescomboBox = (gcnew System::Windows::Forms::ComboBox());
			this->speciesDataSet1 = (gcnew PlantCreator::speciesDataSet());
			this->genuscomboBox = (gcnew System::Windows::Forms::ComboBox());
			this->genusDataSet1 = (gcnew PlantCreator::genusDataSet());
			this->subFamilycomboBox = (gcnew System::Windows::Forms::ComboBox());
			this->subFamilyDataSet1 = (gcnew PlantCreator::subFamilyDataSet());
			this->familycomboBox = (gcnew System::Windows::Forms::ComboBox());
			this->familyDataSet1 = (gcnew PlantCreator::familyDataSet());
			this->subOrdercomboBox = (gcnew System::Windows::Forms::ComboBox());
			this->subOrderDataSet1 = (gcnew PlantCreator::subOrderDataSet());
			this->ordercomboBox = (gcnew System::Windows::Forms::ComboBox());
			this->orderDataSet1 = (gcnew PlantCreator::orderDataSet());
			this->subClasscomboBox = (gcnew System::Windows::Forms::ComboBox());
			this->subClassDataSet1 = (gcnew PlantCreator::subClassDataSet());
			this->classcomboBox = (gcnew System::Windows::Forms::ComboBox());
			this->classDataSet1 = (gcnew PlantCreator::classDataSet());
			this->subDivisioncomboBox = (gcnew System::Windows::Forms::ComboBox());
			this->subDivisionDataSet1 = (gcnew PlantCreator::subDivisionDataSet());
			this->divisioncomboBox = (gcnew System::Windows::Forms::ComboBox());
			this->divisionDataSet1 = (gcnew PlantCreator::divisionDataSet());
			this->speciesLabel = (gcnew System::Windows::Forms::Label());
			this->genusLabel = (gcnew System::Windows::Forms::Label());
			this->subFamilyLabel = (gcnew System::Windows::Forms::Label());
			this->familyLabel = (gcnew System::Windows::Forms::Label());
			this->subOrderLabel = (gcnew System::Windows::Forms::Label());
			this->subClasslabel = (gcnew System::Windows::Forms::Label());
			this->subDivisionlabel = (gcnew System::Windows::Forms::Label());
			this->orderlabel = (gcnew System::Windows::Forms::Label());
			this->classlabel = (gcnew System::Windows::Forms::Label());
			this->divisionlabel = (gcnew System::Windows::Forms::Label());
			this->MakeaPlantgroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->NewPlant = (gcnew System::Windows::Forms::Button());
			this->defaultbutton = (gcnew System::Windows::Forms::Button());
			this->renderMakePlantbutton = (gcnew System::Windows::Forms::Button());
			this->fruitSeedgroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->flowerTypecomboBox = (gcnew System::Windows::Forms::ComboBox());
			this->flowerTypelabel = (gcnew System::Windows::Forms::Label());
			this->seedTypetextBox = (gcnew System::Windows::Forms::TextBox());
			this->seedTypelabel = (gcnew System::Windows::Forms::Label());
			this->fruitTypecomboBox = (gcnew System::Windows::Forms::ComboBox());
			this->fruitTypelabel = (gcnew System::Windows::Forms::Label());
			this->leafPropertiesgroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->numleafRadius = (gcnew System::Windows::Forms::MaskedTextBox());
			this->numleafLength = (gcnew System::Windows::Forms::MaskedTextBox());
			this->notelabel = (gcnew System::Windows::Forms::Label());
			this->LeafShapecomboBox = (gcnew System::Windows::Forms::ComboBox());
			this->leafShapelabel = (gcnew System::Windows::Forms::Label());
			this->leafRadiuslabel = (gcnew System::Windows::Forms::Label());
			this->leafLengthlabel = (gcnew System::Windows::Forms::Label());
			this->veinPropertiesgroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->numveinLength = (gcnew System::Windows::Forms::MaskedTextBox());
			this->numveinRadius = (gcnew System::Windows::Forms::MaskedTextBox());
			this->veinLStringlabel = (gcnew System::Windows::Forms::Label());
			this->txtveinLstring = (gcnew System::Windows::Forms::TextBox());
			this->veinRadiuslabel = (gcnew System::Windows::Forms::Label());
			this->veinLengthlabel = (gcnew System::Windows::Forms::Label());
			this->petiolePropertiesgroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->numpetioleRadius = (gcnew System::Windows::Forms::MaskedTextBox());
			this->numpetioleLength = (gcnew System::Windows::Forms::MaskedTextBox());
			this->txtpetioleLstring = (gcnew System::Windows::Forms::TextBox());
			this->petioleLStringlabel = (gcnew System::Windows::Forms::Label());
			this->petioleRadiuslabel = (gcnew System::Windows::Forms::Label());
			this->petioleLengthlabel = (gcnew System::Windows::Forms::Label());
			this->stemPropertiesgroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->numstemLength = (gcnew System::Windows::Forms::MaskedTextBox());
			this->numstemRadius = (gcnew System::Windows::Forms::MaskedTextBox());
			this->txtstemLstring = (gcnew System::Windows::Forms::TextBox());
			this->stemStringlabel = (gcnew System::Windows::Forms::Label());
			this->stemRadiuslabel = (gcnew System::Windows::Forms::Label());
			this->steemLengthlabel = (gcnew System::Windows::Forms::Label());
			this->environmentPlantgroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->seasonBox = (gcnew System::Windows::Forms::GroupBox());
			this->seasonButton = (gcnew System::Windows::Forms::Button());
			this->seasoncomboBox = (gcnew System::Windows::Forms::ComboBox());
			this->seasonlabel = (gcnew System::Windows::Forms::Label());
			this->windgroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->txtwindStrength = (gcnew System::Windows::Forms::TextBox());
			this->txtwinddirectionz = (gcnew System::Windows::Forms::TextBox());
			this->txtwinddirectiony = (gcnew System::Windows::Forms::TextBox());
			this->txtwinddirectionx = (gcnew System::Windows::Forms::TextBox());
			this->onoffbutton = (gcnew System::Windows::Forms::Button());
			this->strengthlabel = (gcnew System::Windows::Forms::Label());
			this->directionlabel = (gcnew System::Windows::Forms::Label());
			this->microgroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->zinctoxtextBox = (gcnew System::Windows::Forms::TextBox());
			this->zincopttextBox = (gcnew System::Windows::Forms::TextBox());
			this->sodiumtoxtextBox = (gcnew System::Windows::Forms::TextBox());
			this->molybdenumtoxtextBox = (gcnew System::Windows::Forms::TextBox());
			this->manganesetoxtextBox = (gcnew System::Windows::Forms::TextBox());
			this->irontoxtextBox = (gcnew System::Windows::Forms::TextBox());
			this->coppertoxtextBox = (gcnew System::Windows::Forms::TextBox());
			this->chlorinetoxtextBox = (gcnew System::Windows::Forms::TextBox());
			this->sodiumopttextBox = (gcnew System::Windows::Forms::TextBox());
			this->molybdenumopttextBox = (gcnew System::Windows::Forms::TextBox());
			this->manganeseopttextBox = (gcnew System::Windows::Forms::TextBox());
			this->ironopttextBox = (gcnew System::Windows::Forms::TextBox());
			this->copperopttextBox = (gcnew System::Windows::Forms::TextBox());
			this->chlorineopttextBox = (gcnew System::Windows::Forms::TextBox());
			this->zincmintextBox = (gcnew System::Windows::Forms::TextBox());
			this->borontoxtextBox = (gcnew System::Windows::Forms::TextBox());
			this->boronopttextBox = (gcnew System::Windows::Forms::TextBox());
			this->sodiummintextBox = (gcnew System::Windows::Forms::TextBox());
			this->molybdenummintextBox = (gcnew System::Windows::Forms::TextBox());
			this->manganesemintextBox = (gcnew System::Windows::Forms::TextBox());
			this->ironmintextBox = (gcnew System::Windows::Forms::TextBox());
			this->coppermintextBox = (gcnew System::Windows::Forms::TextBox());
			this->chlorinemintextBox = (gcnew System::Windows::Forms::TextBox());
			this->boronmintextBox = (gcnew System::Windows::Forms::TextBox());
			this->zinctextBox = (gcnew System::Windows::Forms::TextBox());
			this->sodiumtextBox = (gcnew System::Windows::Forms::TextBox());
			this->molybdenumtextBox = (gcnew System::Windows::Forms::TextBox());
			this->manganesetextBox = (gcnew System::Windows::Forms::TextBox());
			this->irontextBox = (gcnew System::Windows::Forms::TextBox());
			this->coppertextBox = (gcnew System::Windows::Forms::TextBox());
			this->chlorinetextBox = (gcnew System::Windows::Forms::TextBox());
			this->borontextBox = (gcnew System::Windows::Forms::TextBox());
			this->zinclabel = (gcnew System::Windows::Forms::Label());
			this->nickellabel = (gcnew System::Windows::Forms::Label());
			this->molyblabel = (gcnew System::Windows::Forms::Label());
			this->manganeselabel = (gcnew System::Windows::Forms::Label());
			this->ironlabel = (gcnew System::Windows::Forms::Label());
			this->copperlabel = (gcnew System::Windows::Forms::Label());
			this->chlorinelabel = (gcnew System::Windows::Forms::Label());
			this->boronlabel = (gcnew System::Windows::Forms::Label());
			this->oxygentextBox = (gcnew System::Windows::Forms::TextBox());
			this->macrogroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->sulfurtoxtextBox = (gcnew System::Windows::Forms::TextBox());
			this->potassiumtoxtextBox = (gcnew System::Windows::Forms::TextBox());
			this->phosphoroustoxtextBox = (gcnew System::Windows::Forms::TextBox());
			this->nitrogentoxtextBox = (gcnew System::Windows::Forms::TextBox());
			this->magnesiumtoxtextBox = (gcnew System::Windows::Forms::TextBox());
			this->hydrogentoxtextBox = (gcnew System::Windows::Forms::TextBox());
			this->calciumtoxtextBox = (gcnew System::Windows::Forms::TextBox());
			this->sulfuropttextBox = (gcnew System::Windows::Forms::TextBox());
			this->potassiumopttextBox = (gcnew System::Windows::Forms::TextBox());
			this->phosphorousopttextBox = (gcnew System::Windows::Forms::TextBox());
			this->nitrogenopttextBox = (gcnew System::Windows::Forms::TextBox());
			this->magnesiumopttextBox = (gcnew System::Windows::Forms::TextBox());
			this->hydrogenopttextBox = (gcnew System::Windows::Forms::TextBox());
			this->calciumopttextBox = (gcnew System::Windows::Forms::TextBox());
			this->sulfurmintextBox = (gcnew System::Windows::Forms::TextBox());
			this->potassiummintextBox = (gcnew System::Windows::Forms::TextBox());
			this->phosphorousmintextBox = (gcnew System::Windows::Forms::TextBox());
			this->nitrogenmintextBox = (gcnew System::Windows::Forms::TextBox());
			this->magnesiummintextBox = (gcnew System::Windows::Forms::TextBox());
			this->hydrogenmintextBox = (gcnew System::Windows::Forms::TextBox());
			this->calciumMintextBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->sulfurtextBox = (gcnew System::Windows::Forms::TextBox());
			this->potassiumtextBox = (gcnew System::Windows::Forms::TextBox());
			this->phosphoroustextBox = (gcnew System::Windows::Forms::TextBox());
			this->nitrogentextBox = (gcnew System::Windows::Forms::TextBox());
			this->magnesiumtextBox = (gcnew System::Windows::Forms::TextBox());
			this->hydrogentextBox = (gcnew System::Windows::Forms::TextBox());
			this->calciumtextBox = (gcnew System::Windows::Forms::TextBox());
			this->potassiumlabel = (gcnew System::Windows::Forms::Label());
			this->phosphorouslabel = (gcnew System::Windows::Forms::Label());
			this->nitrogenlabel = (gcnew System::Windows::Forms::Label());
			this->magnesiumlabel = (gcnew System::Windows::Forms::Label());
			this->hydrogenlabel = (gcnew System::Windows::Forms::Label());
			this->calciumlabel = (gcnew System::Windows::Forms::Label());
			this->sulferlabel = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->waterAmountlabel = (gcnew System::Windows::Forms::Label());
			this->soilTypecomboBox = (gcnew System::Windows::Forms::ComboBox());
			this->soilTypelabel = (gcnew System::Windows::Forms::Label());
			this->soilTexturecomboBox = (gcnew System::Windows::Forms::ComboBox());
			this->soilTexturelabel = (gcnew System::Windows::Forms::Label());
			this->oxygenlabel = (gcnew System::Windows::Forms::Label());
			this->animatePlantgroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->growthButton = (gcnew System::Windows::Forms::Button());
			this->rotatedownbutton = (gcnew System::Windows::Forms::Button());
			this->moveforwardbutton = (gcnew System::Windows::Forms::Button());
			this->rotateupbutton = (gcnew System::Windows::Forms::Button());
			this->movebackbutton = (gcnew System::Windows::Forms::Button());
			this->rotaterightbutton = (gcnew System::Windows::Forms::Button());
			this->rotateleftbutton = (gcnew System::Windows::Forms::Button());
			this->takegenerationbutton = (gcnew System::Windows::Forms::Button());
			this->addGenerationbutton = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbConnection1 = (gcnew System::Data::OleDb::OleDbConnection());
			this->oleDbInsertCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->divisionoleDbDataAdapter = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->oleDbSelectCommand2 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand2 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand2 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand2 = (gcnew System::Data::OleDb::OleDbCommand());
			this->classoleDbDataAdapter = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->oleDbSelectCommand3 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand3 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand3 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand3 = (gcnew System::Data::OleDb::OleDbCommand());
			this->subDivisionoleDbDataAdapter = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->oleDbSelectCommand4 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand4 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand4 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand4 = (gcnew System::Data::OleDb::OleDbCommand());
			this->subClassoleDbDataAdapter = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->oleDbSelectCommand5 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand5 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand5 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand5 = (gcnew System::Data::OleDb::OleDbCommand());
			this->orderoleDbDataAdapter = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->oleDbSelectCommand6 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand6 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand6 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand6 = (gcnew System::Data::OleDb::OleDbCommand());
			this->subOrderoleDbDataAdapter = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->oleDbSelectCommand7 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand7 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand7 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand7 = (gcnew System::Data::OleDb::OleDbCommand());
			this->familyoleDbDataAdapter = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->oleDbSelectCommand8 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand8 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand8 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand8 = (gcnew System::Data::OleDb::OleDbCommand());
			this->subFamilyoleDbDataAdapter = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->oleDbSelectCommand9 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand9 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand9 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand9 = (gcnew System::Data::OleDb::OleDbCommand());
			this->genusoleDbDataAdapter = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->oleDbSelectCommand10 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand10 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand10 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand10 = (gcnew System::Data::OleDb::OleDbCommand());
			this->speciesoleDbDataAdapter = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->PlantGraphicsInformationTableAdapter = (gcnew PlantCreator::PlantGraphicsTableAdapters::PlantGraphicsInformationTableAdapter());
			this->pickPlantgroupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->plantGraphics1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->speciesDataSet1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->genusDataSet1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->subFamilyDataSet1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->familyDataSet1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->subOrderDataSet1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->orderDataSet1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->subClassDataSet1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->classDataSet1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->subDivisionDataSet1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->divisionDataSet1))->BeginInit();
			this->MakeaPlantgroupBox->SuspendLayout();
			this->fruitSeedgroupBox->SuspendLayout();
			this->leafPropertiesgroupBox->SuspendLayout();
			this->veinPropertiesgroupBox->SuspendLayout();
			this->petiolePropertiesgroupBox->SuspendLayout();
			this->stemPropertiesgroupBox->SuspendLayout();
			this->environmentPlantgroupBox->SuspendLayout();
			this->seasonBox->SuspendLayout();
			this->windgroupBox->SuspendLayout();
			this->microgroupBox->SuspendLayout();
			this->macrogroupBox->SuspendLayout();
			this->animatePlantgroupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// pickPlantgroupBox1
			// 
			this->pickPlantgroupBox1->Controls->Add(this->Wheat_button);
			this->pickPlantgroupBox1->Controls->Add(this->plantGraphicscomboBox);
			this->pickPlantgroupBox1->Controls->Add(this->PlantInstance);
			this->pickPlantgroupBox1->Controls->Add(this->seeThePlantlabel);
			this->pickPlantgroupBox1->Controls->Add(this->speciescomboBox);
			this->pickPlantgroupBox1->Controls->Add(this->genuscomboBox);
			this->pickPlantgroupBox1->Controls->Add(this->subFamilycomboBox);
			this->pickPlantgroupBox1->Controls->Add(this->familycomboBox);
			this->pickPlantgroupBox1->Controls->Add(this->subOrdercomboBox);
			this->pickPlantgroupBox1->Controls->Add(this->ordercomboBox);
			this->pickPlantgroupBox1->Controls->Add(this->subClasscomboBox);
			this->pickPlantgroupBox1->Controls->Add(this->classcomboBox);
			this->pickPlantgroupBox1->Controls->Add(this->subDivisioncomboBox);
			this->pickPlantgroupBox1->Controls->Add(this->divisioncomboBox);
			this->pickPlantgroupBox1->Controls->Add(this->speciesLabel);
			this->pickPlantgroupBox1->Controls->Add(this->genusLabel);
			this->pickPlantgroupBox1->Controls->Add(this->subFamilyLabel);
			this->pickPlantgroupBox1->Controls->Add(this->familyLabel);
			this->pickPlantgroupBox1->Controls->Add(this->subOrderLabel);
			this->pickPlantgroupBox1->Controls->Add(this->subClasslabel);
			this->pickPlantgroupBox1->Controls->Add(this->subDivisionlabel);
			this->pickPlantgroupBox1->Controls->Add(this->orderlabel);
			this->pickPlantgroupBox1->Controls->Add(this->classlabel);
			this->pickPlantgroupBox1->Controls->Add(this->divisionlabel);
			this->pickPlantgroupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->pickPlantgroupBox1->Location = System::Drawing::Point(2, 10);
			this->pickPlantgroupBox1->Margin = System::Windows::Forms::Padding(2);
			this->pickPlantgroupBox1->Name = L"pickPlantgroupBox1";
			this->pickPlantgroupBox1->Padding = System::Windows::Forms::Padding(2);
			this->pickPlantgroupBox1->Size = System::Drawing::Size(245, 396);
			this->pickPlantgroupBox1->TabIndex = 0;
			this->pickPlantgroupBox1->TabStop = false;
			this->pickPlantgroupBox1->Text = L"Pick a Plant";
			// 
			// Wheat_button
			// 
			this->Wheat_button->Location = System::Drawing::Point(59, 328);
			this->Wheat_button->Name = L"Wheat_button";
			this->Wheat_button->Size = System::Drawing::Size(138, 29);
			this->Wheat_button->TabIndex = 27;
			this->Wheat_button->Text = L"Wheat On/Off";
			this->Wheat_button->UseVisualStyleBackColor = true;
			this->Wheat_button->Click += gcnew System::EventHandler(this, &Form1::Wheat_button_Click);
			// 
			// plantGraphicscomboBox
			// 
			this->plantGraphicscomboBox->DataSource = this->plantGraphics1;
			this->plantGraphicscomboBox->DisplayMember = L"PlantGraphicsInformation.ScienceNameID";
			this->plantGraphicscomboBox->FormattingEnabled = true;
			this->plantGraphicscomboBox->Location = System::Drawing::Point(95, 23);
			this->plantGraphicscomboBox->Margin = System::Windows::Forms::Padding(2);
			this->plantGraphicscomboBox->Name = L"plantGraphicscomboBox";
			this->plantGraphicscomboBox->Size = System::Drawing::Size(146, 24);
			this->plantGraphicscomboBox->TabIndex = 26;
			this->plantGraphicscomboBox->ValueMember = L"PlantGraphicsInformation.PlantlsystemID";
			this->plantGraphicscomboBox->DropDown += gcnew System::EventHandler(this, &Form1::PlantInstancecomboBox_DropDown);
			this->plantGraphicscomboBox->Click += gcnew System::EventHandler(this, &Form1::plantGraphicscomboBox_Click);
			// 
			// plantGraphics1
			// 
			this->plantGraphics1->DataSetName = L"PlantGraphics";
			this->plantGraphics1->SchemaSerializationMode = System::Data::SchemaSerializationMode::IncludeSchema;
			// 
			// PlantInstance
			// 
			this->PlantInstance->AutoSize = true;
			this->PlantInstance->Location = System::Drawing::Point(2, 30);
			this->PlantInstance->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->PlantInstance->Name = L"PlantInstance";
			this->PlantInstance->Size = System::Drawing::Size(97, 17);
			this->PlantInstance->TabIndex = 25;
			this->PlantInstance->Text = L"Plant Instance";
			// 
			// seeThePlantlabel
			// 
			this->seeThePlantlabel->AutoSize = true;
			this->seeThePlantlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->seeThePlantlabel->Location = System::Drawing::Point(5, 370);
			this->seeThePlantlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->seeThePlantlabel->Name = L"seeThePlantlabel";
			this->seeThePlantlabel->Size = System::Drawing::Size(129, 24);
			this->seeThePlantlabel->TabIndex = 1;
			this->seeThePlantlabel->Text = L"See The Plant";
			// 
			// speciescomboBox
			// 
			this->speciescomboBox->DataSource = this->speciesDataSet1;
			this->speciescomboBox->DisplayMember = L"ScienceName.ScienceName";
			this->speciescomboBox->FormattingEnabled = true;
			this->speciescomboBox->Location = System::Drawing::Point(95, 265);
			this->speciescomboBox->Margin = System::Windows::Forms::Padding(2);
			this->speciescomboBox->Name = L"speciescomboBox";
			this->speciescomboBox->Size = System::Drawing::Size(146, 24);
			this->speciescomboBox->TabIndex = 21;
			this->speciescomboBox->ValueMember = L"ScienceName.ScienceNameID";
			this->speciescomboBox->DropDown += gcnew System::EventHandler(this, &Form1::speciescomboBox_DropDown);
			// 
			// speciesDataSet1
			// 
			this->speciesDataSet1->DataSetName = L"speciesDataSet";
			this->speciesDataSet1->SchemaSerializationMode = System::Data::SchemaSerializationMode::IncludeSchema;
			// 
			// genuscomboBox
			// 
			this->genuscomboBox->DataSource = this->genusDataSet1;
			this->genuscomboBox->DisplayMember = L"ScienceName.ScienceName";
			this->genuscomboBox->FormattingEnabled = true;
			this->genuscomboBox->Location = System::Drawing::Point(95, 240);
			this->genuscomboBox->Margin = System::Windows::Forms::Padding(2);
			this->genuscomboBox->Name = L"genuscomboBox";
			this->genuscomboBox->Size = System::Drawing::Size(146, 24);
			this->genuscomboBox->TabIndex = 19;
			this->genuscomboBox->ValueMember = L"ScienceName.ScienceNameID";
			this->genuscomboBox->DropDown += gcnew System::EventHandler(this, &Form1::genuscomboBox_DropDown);
			// 
			// genusDataSet1
			// 
			this->genusDataSet1->DataSetName = L"genusDataSet";
			this->genusDataSet1->SchemaSerializationMode = System::Data::SchemaSerializationMode::IncludeSchema;
			// 
			// subFamilycomboBox
			// 
			this->subFamilycomboBox->DataSource = this->subFamilyDataSet1;
			this->subFamilycomboBox->DisplayMember = L"ScienceName.ScienceName";
			this->subFamilycomboBox->FormattingEnabled = true;
			this->subFamilycomboBox->Location = System::Drawing::Point(95, 215);
			this->subFamilycomboBox->Margin = System::Windows::Forms::Padding(2);
			this->subFamilycomboBox->Name = L"subFamilycomboBox";
			this->subFamilycomboBox->Size = System::Drawing::Size(146, 24);
			this->subFamilycomboBox->TabIndex = 18;
			this->subFamilycomboBox->ValueMember = L"ScienceName.ScienceNameID";
			this->subFamilycomboBox->DropDown += gcnew System::EventHandler(this, &Form1::subFamilycomboBox_DropDown);
			// 
			// subFamilyDataSet1
			// 
			this->subFamilyDataSet1->DataSetName = L"subFamilyDataSet";
			this->subFamilyDataSet1->SchemaSerializationMode = System::Data::SchemaSerializationMode::IncludeSchema;
			// 
			// familycomboBox
			// 
			this->familycomboBox->DataSource = this->familyDataSet1;
			this->familycomboBox->DisplayMember = L"ScienceName.ScienceName";
			this->familycomboBox->FormattingEnabled = true;
			this->familycomboBox->Location = System::Drawing::Point(95, 191);
			this->familycomboBox->Margin = System::Windows::Forms::Padding(2);
			this->familycomboBox->Name = L"familycomboBox";
			this->familycomboBox->Size = System::Drawing::Size(146, 24);
			this->familycomboBox->TabIndex = 17;
			this->familycomboBox->ValueMember = L"ScienceName.ScienceNameID";
			this->familycomboBox->DropDown += gcnew System::EventHandler(this, &Form1::familycomboBox_DropDown);
			// 
			// familyDataSet1
			// 
			this->familyDataSet1->DataSetName = L"familyDataSet";
			this->familyDataSet1->SchemaSerializationMode = System::Data::SchemaSerializationMode::IncludeSchema;
			// 
			// subOrdercomboBox
			// 
			this->subOrdercomboBox->DataSource = this->subOrderDataSet1;
			this->subOrdercomboBox->DisplayMember = L"ScienceName.ScienceName";
			this->subOrdercomboBox->FormattingEnabled = true;
			this->subOrdercomboBox->Location = System::Drawing::Point(95, 167);
			this->subOrdercomboBox->Margin = System::Windows::Forms::Padding(2);
			this->subOrdercomboBox->Name = L"subOrdercomboBox";
			this->subOrdercomboBox->Size = System::Drawing::Size(146, 24);
			this->subOrdercomboBox->TabIndex = 16;
			this->subOrdercomboBox->ValueMember = L"ScienceName.ScienceNameID";
			this->subOrdercomboBox->DropDown += gcnew System::EventHandler(this, &Form1::subOrdercomboBox_DropDown);
			// 
			// subOrderDataSet1
			// 
			this->subOrderDataSet1->DataSetName = L"subOrderDataSet";
			this->subOrderDataSet1->SchemaSerializationMode = System::Data::SchemaSerializationMode::IncludeSchema;
			// 
			// ordercomboBox
			// 
			this->ordercomboBox->DataSource = this->orderDataSet1;
			this->ordercomboBox->DisplayMember = L"ScienceName.ScienceName";
			this->ordercomboBox->FormattingEnabled = true;
			this->ordercomboBox->Location = System::Drawing::Point(95, 143);
			this->ordercomboBox->Margin = System::Windows::Forms::Padding(2);
			this->ordercomboBox->Name = L"ordercomboBox";
			this->ordercomboBox->Size = System::Drawing::Size(146, 24);
			this->ordercomboBox->TabIndex = 15;
			this->ordercomboBox->ValueMember = L"ScienceName.ScienceNameID";
			this->ordercomboBox->DropDown += gcnew System::EventHandler(this, &Form1::ordercomboBox_DropDown);
			// 
			// orderDataSet1
			// 
			this->orderDataSet1->DataSetName = L"orderDataSet";
			this->orderDataSet1->SchemaSerializationMode = System::Data::SchemaSerializationMode::IncludeSchema;
			// 
			// subClasscomboBox
			// 
			this->subClasscomboBox->DataSource = this->subClassDataSet1;
			this->subClasscomboBox->DisplayMember = L"ScienceName.ScienceName";
			this->subClasscomboBox->FormattingEnabled = true;
			this->subClasscomboBox->Location = System::Drawing::Point(95, 119);
			this->subClasscomboBox->Margin = System::Windows::Forms::Padding(2);
			this->subClasscomboBox->Name = L"subClasscomboBox";
			this->subClasscomboBox->Size = System::Drawing::Size(146, 24);
			this->subClasscomboBox->TabIndex = 14;
			this->subClasscomboBox->ValueMember = L"ScienceName.ScienceNameID";
			this->subClasscomboBox->DropDown += gcnew System::EventHandler(this, &Form1::subClasscomboBox_DropDown);
			// 
			// subClassDataSet1
			// 
			this->subClassDataSet1->DataSetName = L"subClassDataSet";
			this->subClassDataSet1->SchemaSerializationMode = System::Data::SchemaSerializationMode::IncludeSchema;
			// 
			// classcomboBox
			// 
			this->classcomboBox->DataSource = this->classDataSet1;
			this->classcomboBox->DisplayMember = L"ScienceName.ScienceName";
			this->classcomboBox->FormattingEnabled = true;
			this->classcomboBox->Location = System::Drawing::Point(95, 94);
			this->classcomboBox->Margin = System::Windows::Forms::Padding(2);
			this->classcomboBox->Name = L"classcomboBox";
			this->classcomboBox->Size = System::Drawing::Size(146, 24);
			this->classcomboBox->TabIndex = 13;
			this->classcomboBox->ValueMember = L"ScienceName.ScienceNameID";
			this->classcomboBox->DropDown += gcnew System::EventHandler(this, &Form1::classcomboBox_DropDown);
			// 
			// classDataSet1
			// 
			this->classDataSet1->DataSetName = L"classDataSet";
			this->classDataSet1->SchemaSerializationMode = System::Data::SchemaSerializationMode::IncludeSchema;
			// 
			// subDivisioncomboBox
			// 
			this->subDivisioncomboBox->DataSource = this->subDivisionDataSet1;
			this->subDivisioncomboBox->DisplayMember = L"ScienceName.ScienceName";
			this->subDivisioncomboBox->FormattingEnabled = true;
			this->subDivisioncomboBox->Location = System::Drawing::Point(95, 71);
			this->subDivisioncomboBox->Margin = System::Windows::Forms::Padding(2);
			this->subDivisioncomboBox->Name = L"subDivisioncomboBox";
			this->subDivisioncomboBox->Size = System::Drawing::Size(146, 24);
			this->subDivisioncomboBox->TabIndex = 12;
			this->subDivisioncomboBox->ValueMember = L"ScienceName.ScienceNameID";
			this->subDivisioncomboBox->DropDown += gcnew System::EventHandler(this, &Form1::subDivisioncomboBox_DropDown);
			// 
			// subDivisionDataSet1
			// 
			this->subDivisionDataSet1->DataSetName = L"subDivisionDataSet";
			this->subDivisionDataSet1->SchemaSerializationMode = System::Data::SchemaSerializationMode::IncludeSchema;
			// 
			// divisioncomboBox
			// 
			this->divisioncomboBox->DataSource = this->divisionDataSet1;
			this->divisioncomboBox->DisplayMember = L"ScienceName.ScienceName";
			this->divisioncomboBox->FormattingEnabled = true;
			this->divisioncomboBox->Location = System::Drawing::Point(95, 48);
			this->divisioncomboBox->Margin = System::Windows::Forms::Padding(2);
			this->divisioncomboBox->Name = L"divisioncomboBox";
			this->divisioncomboBox->Size = System::Drawing::Size(146, 24);
			this->divisioncomboBox->TabIndex = 11;
			this->divisioncomboBox->ValueMember = L"ScienceName.ScienceNameID";
			this->divisioncomboBox->DropDown += gcnew System::EventHandler(this, &Form1::divisioncomboBox_DropDown);
			// 
			// divisionDataSet1
			// 
			this->divisionDataSet1->DataSetName = L"divisionDataSet";
			this->divisionDataSet1->SchemaSerializationMode = System::Data::SchemaSerializationMode::IncludeSchema;
			// 
			// speciesLabel
			// 
			this->speciesLabel->AutoSize = true;
			this->speciesLabel->Location = System::Drawing::Point(2, 271);
			this->speciesLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->speciesLabel->Name = L"speciesLabel";
			this->speciesLabel->Size = System::Drawing::Size(58, 17);
			this->speciesLabel->TabIndex = 10;
			this->speciesLabel->Text = L"Species";
			// 
			// genusLabel
			// 
			this->genusLabel->AutoSize = true;
			this->genusLabel->Location = System::Drawing::Point(3, 245);
			this->genusLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->genusLabel->Name = L"genusLabel";
			this->genusLabel->Size = System::Drawing::Size(50, 17);
			this->genusLabel->TabIndex = 8;
			this->genusLabel->Text = L"Genus";
			// 
			// subFamilyLabel
			// 
			this->subFamilyLabel->AutoSize = true;
			this->subFamilyLabel->Location = System::Drawing::Point(3, 221);
			this->subFamilyLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->subFamilyLabel->Name = L"subFamilyLabel";
			this->subFamilyLabel->Size = System::Drawing::Size(71, 17);
			this->subFamilyLabel->TabIndex = 7;
			this->subFamilyLabel->Text = L"subFamily";
			// 
			// familyLabel
			// 
			this->familyLabel->AutoSize = true;
			this->familyLabel->Location = System::Drawing::Point(3, 197);
			this->familyLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->familyLabel->Name = L"familyLabel";
			this->familyLabel->Size = System::Drawing::Size(48, 17);
			this->familyLabel->TabIndex = 6;
			this->familyLabel->Text = L"Family";
			// 
			// subOrderLabel
			// 
			this->subOrderLabel->AutoSize = true;
			this->subOrderLabel->Location = System::Drawing::Point(3, 172);
			this->subOrderLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->subOrderLabel->Name = L"subOrderLabel";
			this->subOrderLabel->Size = System::Drawing::Size(68, 17);
			this->subOrderLabel->TabIndex = 5;
			this->subOrderLabel->Text = L"subOrder";
			// 
			// subClasslabel
			// 
			this->subClasslabel->AutoSize = true;
			this->subClasslabel->Location = System::Drawing::Point(3, 124);
			this->subClasslabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->subClasslabel->Name = L"subClasslabel";
			this->subClasslabel->Size = System::Drawing::Size(65, 17);
			this->subClasslabel->TabIndex = 4;
			this->subClasslabel->Text = L"subClass";
			// 
			// subDivisionlabel
			// 
			this->subDivisionlabel->AutoSize = true;
			this->subDivisionlabel->Location = System::Drawing::Point(3, 76);
			this->subDivisionlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->subDivisionlabel->Name = L"subDivisionlabel";
			this->subDivisionlabel->Size = System::Drawing::Size(80, 17);
			this->subDivisionlabel->TabIndex = 3;
			this->subDivisionlabel->Text = L"subDivision";
			// 
			// orderlabel
			// 
			this->orderlabel->AutoSize = true;
			this->orderlabel->Location = System::Drawing::Point(3, 149);
			this->orderlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->orderlabel->Name = L"orderlabel";
			this->orderlabel->Size = System::Drawing::Size(45, 17);
			this->orderlabel->TabIndex = 2;
			this->orderlabel->Text = L"Order";
			// 
			// classlabel
			// 
			this->classlabel->AutoSize = true;
			this->classlabel->Location = System::Drawing::Point(3, 100);
			this->classlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->classlabel->Name = L"classlabel";
			this->classlabel->Size = System::Drawing::Size(42, 17);
			this->classlabel->TabIndex = 1;
			this->classlabel->Text = L"Class";
			// 
			// divisionlabel
			// 
			this->divisionlabel->AutoSize = true;
			this->divisionlabel->Location = System::Drawing::Point(3, 54);
			this->divisionlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->divisionlabel->Name = L"divisionlabel";
			this->divisionlabel->Size = System::Drawing::Size(57, 17);
			this->divisionlabel->TabIndex = 0;
			this->divisionlabel->Text = L"Division";
			// 
			// MakeaPlantgroupBox
			// 
			this->MakeaPlantgroupBox->Controls->Add(this->NewPlant);
			this->MakeaPlantgroupBox->Controls->Add(this->defaultbutton);
			this->MakeaPlantgroupBox->Controls->Add(this->renderMakePlantbutton);
			this->MakeaPlantgroupBox->Controls->Add(this->fruitSeedgroupBox);
			this->MakeaPlantgroupBox->Controls->Add(this->leafPropertiesgroupBox);
			this->MakeaPlantgroupBox->Controls->Add(this->veinPropertiesgroupBox);
			this->MakeaPlantgroupBox->Controls->Add(this->petiolePropertiesgroupBox);
			this->MakeaPlantgroupBox->Controls->Add(this->stemPropertiesgroupBox);
			this->MakeaPlantgroupBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->MakeaPlantgroupBox->Location = System::Drawing::Point(246, 10);
			this->MakeaPlantgroupBox->Margin = System::Windows::Forms::Padding(2);
			this->MakeaPlantgroupBox->Name = L"MakeaPlantgroupBox";
			this->MakeaPlantgroupBox->Padding = System::Windows::Forms::Padding(2);
			this->MakeaPlantgroupBox->Size = System::Drawing::Size(475, 396);
			this->MakeaPlantgroupBox->TabIndex = 2;
			this->MakeaPlantgroupBox->TabStop = false;
			this->MakeaPlantgroupBox->Text = L"Make a Plant";
			// 
			// NewPlant
			// 
			this->NewPlant->Location = System::Drawing::Point(295, 365);
			this->NewPlant->Margin = System::Windows::Forms::Padding(2);
			this->NewPlant->Name = L"NewPlant";
			this->NewPlant->Size = System::Drawing::Size(112, 26);
			this->NewPlant->TabIndex = 7;
			this->NewPlant->Text = L"Save New Plant";
			this->NewPlant->UseVisualStyleBackColor = true;
			this->NewPlant->Click += gcnew System::EventHandler(this, &Form1::NewPlantClick);
			// 
			// defaultbutton
			// 
			this->defaultbutton->Location = System::Drawing::Point(181, 365);
			this->defaultbutton->Margin = System::Windows::Forms::Padding(2);
			this->defaultbutton->Name = L"defaultbutton";
			this->defaultbutton->Size = System::Drawing::Size(112, 26);
			this->defaultbutton->TabIndex = 6;
			this->defaultbutton->Text = L"Default Setting";
			this->defaultbutton->UseVisualStyleBackColor = true;
			this->defaultbutton->Click += gcnew System::EventHandler(this, &Form1::defaultbutton_Click);
			// 
			// renderMakePlantbutton
			// 
			this->renderMakePlantbutton->Location = System::Drawing::Point(8, 365);
			this->renderMakePlantbutton->Margin = System::Windows::Forms::Padding(2);
			this->renderMakePlantbutton->Name = L"renderMakePlantbutton";
			this->renderMakePlantbutton->Size = System::Drawing::Size(159, 26);
			this->renderMakePlantbutton->TabIndex = 5;
			this->renderMakePlantbutton->Text = L"Render Make a Plant";
			this->renderMakePlantbutton->UseVisualStyleBackColor = true;
			this->renderMakePlantbutton->Click += gcnew System::EventHandler(this, &Form1::renderMakePlantbutton_Click);
			// 
			// fruitSeedgroupBox
			// 
			this->fruitSeedgroupBox->Controls->Add(this->flowerTypecomboBox);
			this->fruitSeedgroupBox->Controls->Add(this->flowerTypelabel);
			this->fruitSeedgroupBox->Controls->Add(this->seedTypetextBox);
			this->fruitSeedgroupBox->Controls->Add(this->seedTypelabel);
			this->fruitSeedgroupBox->Controls->Add(this->fruitTypecomboBox);
			this->fruitSeedgroupBox->Controls->Add(this->fruitTypelabel);
			this->fruitSeedgroupBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->fruitSeedgroupBox->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->fruitSeedgroupBox->Location = System::Drawing::Point(8, 295);
			this->fruitSeedgroupBox->Margin = System::Windows::Forms::Padding(2);
			this->fruitSeedgroupBox->Name = L"fruitSeedgroupBox";
			this->fruitSeedgroupBox->Padding = System::Windows::Forms::Padding(2);
			this->fruitSeedgroupBox->Size = System::Drawing::Size(455, 67);
			this->fruitSeedgroupBox->TabIndex = 4;
			this->fruitSeedgroupBox->TabStop = false;
			this->fruitSeedgroupBox->Text = L"Fruit, Seed, Flower properties";
			// 
			// flowerTypecomboBox
			// 
			this->flowerTypecomboBox->FormattingEnabled = true;
			this->flowerTypecomboBox->Location = System::Drawing::Point(84, 41);
			this->flowerTypecomboBox->Margin = System::Windows::Forms::Padding(2);
			this->flowerTypecomboBox->Name = L"flowerTypecomboBox";
			this->flowerTypecomboBox->Size = System::Drawing::Size(158, 23);
			this->flowerTypecomboBox->TabIndex = 5;
			// 
			// flowerTypelabel
			// 
			this->flowerTypelabel->AutoSize = true;
			this->flowerTypelabel->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->flowerTypelabel->Location = System::Drawing::Point(5, 47);
			this->flowerTypelabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->flowerTypelabel->Name = L"flowerTypelabel";
			this->flowerTypelabel->Size = System::Drawing::Size(73, 15);
			this->flowerTypelabel->TabIndex = 4;
			this->flowerTypelabel->Text = L"Flower Type";
			// 
			// seedTypetextBox
			// 
			this->seedTypetextBox->Location = System::Drawing::Point(310, 18);
			this->seedTypetextBox->Margin = System::Windows::Forms::Padding(2);
			this->seedTypetextBox->Name = L"seedTypetextBox";
			this->seedTypetextBox->Size = System::Drawing::Size(141, 21);
			this->seedTypetextBox->TabIndex = 3;
			// 
			// seedTypelabel
			// 
			this->seedTypelabel->AutoSize = true;
			this->seedTypelabel->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->seedTypelabel->Location = System::Drawing::Point(244, 23);
			this->seedTypelabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->seedTypelabel->Name = L"seedTypelabel";
			this->seedTypelabel->Size = System::Drawing::Size(65, 15);
			this->seedTypelabel->TabIndex = 2;
			this->seedTypelabel->Text = L"Seed Type";
			// 
			// fruitTypecomboBox
			// 
			this->fruitTypecomboBox->FormattingEnabled = true;
			this->fruitTypecomboBox->Items->AddRange(gcnew cli::array< System::Object^  >(21) {L"Achene", L"Aggregate", L"Berry", L"Capsule", 
				L"Caryopsis", L"Cypela", L"Drupe", L"Fibrous Drupe", L"Follicle", L"Hesperidium", L"Legume", L"Loment", L"Nut", L"Pepo", L"Wheat", 
				L"Pome", L"Samara", L"Schizocarp", L"Siliqu", L"Silicle", L"Utricle"});
			this->fruitTypecomboBox->Location = System::Drawing::Point(84, 16);
			this->fruitTypecomboBox->Margin = System::Windows::Forms::Padding(2);
			this->fruitTypecomboBox->Name = L"fruitTypecomboBox";
			this->fruitTypecomboBox->Size = System::Drawing::Size(158, 23);
			this->fruitTypecomboBox->TabIndex = 1;
			// 
			// fruitTypelabel
			// 
			this->fruitTypelabel->AutoSize = true;
			this->fruitTypelabel->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->fruitTypelabel->Location = System::Drawing::Point(5, 23);
			this->fruitTypelabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->fruitTypelabel->Name = L"fruitTypelabel";
			this->fruitTypelabel->Size = System::Drawing::Size(60, 15);
			this->fruitTypelabel->TabIndex = 0;
			this->fruitTypelabel->Text = L"Fruit Type";
			// 
			// leafPropertiesgroupBox
			// 
			this->leafPropertiesgroupBox->Controls->Add(this->numleafRadius);
			this->leafPropertiesgroupBox->Controls->Add(this->numleafLength);
			this->leafPropertiesgroupBox->Controls->Add(this->notelabel);
			this->leafPropertiesgroupBox->Controls->Add(this->LeafShapecomboBox);
			this->leafPropertiesgroupBox->Controls->Add(this->leafShapelabel);
			this->leafPropertiesgroupBox->Controls->Add(this->leafRadiuslabel);
			this->leafPropertiesgroupBox->Controls->Add(this->leafLengthlabel);
			this->leafPropertiesgroupBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->leafPropertiesgroupBox->Location = System::Drawing::Point(5, 213);
			this->leafPropertiesgroupBox->Margin = System::Windows::Forms::Padding(2);
			this->leafPropertiesgroupBox->Name = L"leafPropertiesgroupBox";
			this->leafPropertiesgroupBox->Padding = System::Windows::Forms::Padding(2);
			this->leafPropertiesgroupBox->Size = System::Drawing::Size(458, 80);
			this->leafPropertiesgroupBox->TabIndex = 3;
			this->leafPropertiesgroupBox->TabStop = false;
			this->leafPropertiesgroupBox->Text = L"Leaf Properties";
			// 
			// numleafRadius
			// 
			this->numleafRadius->Location = System::Drawing::Point(243, 16);
			this->numleafRadius->Margin = System::Windows::Forms::Padding(2);
			this->numleafRadius->Mask = L"00.0000";
			this->numleafRadius->Name = L"numleafRadius";
			this->numleafRadius->Size = System::Drawing::Size(76, 21);
			this->numleafRadius->TabIndex = 8;
			this->numleafRadius->Text = L"000250";
			// 
			// numleafLength
			// 
			this->numleafLength->Location = System::Drawing::Point(86, 16);
			this->numleafLength->Margin = System::Windows::Forms::Padding(2);
			this->numleafLength->Mask = L"00.0000";
			this->numleafLength->Name = L"numleafLength";
			this->numleafLength->Size = System::Drawing::Size(76, 21);
			this->numleafLength->TabIndex = 7;
			this->numleafLength->Text = L"000500";
			// 
			// notelabel
			// 
			this->notelabel->AutoSize = true;
			this->notelabel->Location = System::Drawing::Point(5, 61);
			this->notelabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->notelabel->Name = L"notelabel";
			this->notelabel->Size = System::Drawing::Size(373, 15);
			this->notelabel->TabIndex = 6;
			this->notelabel->Text = L"Note: Potential leaf shape changes when length and width changes";
			// 
			// LeafShapecomboBox
			// 
			this->LeafShapecomboBox->FormattingEnabled = true;
			this->LeafShapecomboBox->Items->AddRange(gcnew cli::array< System::Object^  >(50) {L"Chordate", L"Ovate", L"Ovate", L"Linear", 
				L"Deltoid", L"Oblate", L"Cuneate2", L"Lanceolate", L"Oblong", L"Cuneate", L"Orbicular", L"Spade", L"Trullate1", L"Round", L"Reniform 2", 
				L"Hastate lobed", L"Sagittate3", L"Sagittate", L"Acicular square", L"Acicular triangular", L"Diamondtospear", L"Trullate2", L"Rhomboidal 2", 
				L"Elliptic", L"Scale", L"Falcate", L"Bileaf", L"Reniform 1", L"Hastate", L"Trileaf", L"Three palmate", L"Five palmate", L"Five unique palmate", 
				L"Six palmate", L"Seven palmate", L"Other palmate", L"Four leaf palmate", L"Spade pointy", L"Cuneate2", L"Oblanceolate", L"Orbicular2", 
				L"Flabellate", L"Rhomboidal\t", L"Serrate", L"Sintuate", L"Ellipse1", L"DeltoidA", L"DeltoidB", L"DeltoidC", L"DeltoidD"});
			this->LeafShapecomboBox->Location = System::Drawing::Point(86, 37);
			this->LeafShapecomboBox->Margin = System::Windows::Forms::Padding(2);
			this->LeafShapecomboBox->Name = L"LeafShapecomboBox";
			this->LeafShapecomboBox->Size = System::Drawing::Size(158, 23);
			this->LeafShapecomboBox->TabIndex = 5;
			this->LeafShapecomboBox->Text = L"Chordate";
			// 
			// leafShapelabel
			// 
			this->leafShapelabel->AutoSize = true;
			this->leafShapelabel->Location = System::Drawing::Point(5, 44);
			this->leafShapelabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->leafShapelabel->Name = L"leafShapelabel";
			this->leafShapelabel->Size = System::Drawing::Size(70, 15);
			this->leafShapelabel->TabIndex = 4;
			this->leafShapelabel->Text = L"Leaf Shape";
			// 
			// leafRadiuslabel
			// 
			this->leafRadiuslabel->AutoSize = true;
			this->leafRadiuslabel->Location = System::Drawing::Point(166, 20);
			this->leafRadiuslabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->leafRadiuslabel->Name = L"leafRadiuslabel";
			this->leafRadiuslabel->Size = System::Drawing::Size(73, 15);
			this->leafRadiuslabel->TabIndex = 2;
			this->leafRadiuslabel->Text = L"Leaf Radius";
			// 
			// leafLengthlabel
			// 
			this->leafLengthlabel->AutoSize = true;
			this->leafLengthlabel->Location = System::Drawing::Point(5, 20);
			this->leafLengthlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->leafLengthlabel->Name = L"leafLengthlabel";
			this->leafLengthlabel->Size = System::Drawing::Size(72, 15);
			this->leafLengthlabel->TabIndex = 0;
			this->leafLengthlabel->Text = L"Leaf Length";
			// 
			// veinPropertiesgroupBox
			// 
			this->veinPropertiesgroupBox->Controls->Add(this->numveinLength);
			this->veinPropertiesgroupBox->Controls->Add(this->numveinRadius);
			this->veinPropertiesgroupBox->Controls->Add(this->veinLStringlabel);
			this->veinPropertiesgroupBox->Controls->Add(this->txtveinLstring);
			this->veinPropertiesgroupBox->Controls->Add(this->veinRadiuslabel);
			this->veinPropertiesgroupBox->Controls->Add(this->veinLengthlabel);
			this->veinPropertiesgroupBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->veinPropertiesgroupBox->Location = System::Drawing::Point(5, 146);
			this->veinPropertiesgroupBox->Margin = System::Windows::Forms::Padding(2);
			this->veinPropertiesgroupBox->Name = L"veinPropertiesgroupBox";
			this->veinPropertiesgroupBox->Padding = System::Windows::Forms::Padding(2);
			this->veinPropertiesgroupBox->Size = System::Drawing::Size(458, 66);
			this->veinPropertiesgroupBox->TabIndex = 2;
			this->veinPropertiesgroupBox->TabStop = false;
			this->veinPropertiesgroupBox->Text = L"Vein Properties";
			// 
			// numveinLength
			// 
			this->numveinLength->Location = System::Drawing::Point(86, 15);
			this->numveinLength->Margin = System::Windows::Forms::Padding(2);
			this->numveinLength->Mask = L"00.00000";
			this->numveinLength->Name = L"numveinLength";
			this->numveinLength->Size = System::Drawing::Size(76, 21);
			this->numveinLength->TabIndex = 7;
			this->numveinLength->Text = L"0001000";
			// 
			// numveinRadius
			// 
			this->numveinRadius->Location = System::Drawing::Point(243, 15);
			this->numveinRadius->Margin = System::Windows::Forms::Padding(2);
			this->numveinRadius->Mask = L"00.00000";
			this->numveinRadius->Name = L"numveinRadius";
			this->numveinRadius->Size = System::Drawing::Size(76, 21);
			this->numveinRadius->TabIndex = 6;
			this->numveinRadius->Text = L"0000625";
			// 
			// veinLStringlabel
			// 
			this->veinLStringlabel->AutoSize = true;
			this->veinLStringlabel->Location = System::Drawing::Point(5, 45);
			this->veinLStringlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->veinLStringlabel->Name = L"veinLStringlabel";
			this->veinLStringlabel->Size = System::Drawing::Size(77, 15);
			this->veinLStringlabel->TabIndex = 5;
			this->veinLStringlabel->Text = L"Vein L-String";
			// 
			// txtveinLstring
			// 
			this->txtveinLstring->Location = System::Drawing::Point(86, 40);
			this->txtveinLstring->Margin = System::Windows::Forms::Padding(2);
			this->txtveinLstring->Name = L"txtveinLstring";
			this->txtveinLstring->Size = System::Drawing::Size(372, 21);
			this->txtveinLstring->TabIndex = 3;
			this->txtveinLstring->Text = L"RA[-F+F]F[+F-F]F[-F+F]";
			// 
			// veinRadiuslabel
			// 
			this->veinRadiuslabel->AutoSize = true;
			this->veinRadiuslabel->Location = System::Drawing::Point(166, 20);
			this->veinRadiuslabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->veinRadiuslabel->Name = L"veinRadiuslabel";
			this->veinRadiuslabel->Size = System::Drawing::Size(73, 15);
			this->veinRadiuslabel->TabIndex = 2;
			this->veinRadiuslabel->Text = L"Vein Radius";
			// 
			// veinLengthlabel
			// 
			this->veinLengthlabel->AutoSize = true;
			this->veinLengthlabel->Location = System::Drawing::Point(5, 20);
			this->veinLengthlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->veinLengthlabel->Name = L"veinLengthlabel";
			this->veinLengthlabel->Size = System::Drawing::Size(72, 15);
			this->veinLengthlabel->TabIndex = 0;
			this->veinLengthlabel->Text = L"Vein Length";
			// 
			// petiolePropertiesgroupBox
			// 
			this->petiolePropertiesgroupBox->Controls->Add(this->numpetioleRadius);
			this->petiolePropertiesgroupBox->Controls->Add(this->numpetioleLength);
			this->petiolePropertiesgroupBox->Controls->Add(this->txtpetioleLstring);
			this->petiolePropertiesgroupBox->Controls->Add(this->petioleLStringlabel);
			this->petiolePropertiesgroupBox->Controls->Add(this->petioleRadiuslabel);
			this->petiolePropertiesgroupBox->Controls->Add(this->petioleLengthlabel);
			this->petiolePropertiesgroupBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->petiolePropertiesgroupBox->Location = System::Drawing::Point(5, 82);
			this->petiolePropertiesgroupBox->Margin = System::Windows::Forms::Padding(2);
			this->petiolePropertiesgroupBox->Name = L"petiolePropertiesgroupBox";
			this->petiolePropertiesgroupBox->Padding = System::Windows::Forms::Padding(2);
			this->petiolePropertiesgroupBox->Size = System::Drawing::Size(463, 63);
			this->petiolePropertiesgroupBox->TabIndex = 1;
			this->petiolePropertiesgroupBox->TabStop = false;
			this->petiolePropertiesgroupBox->Text = L"Petiole Properties";
			// 
			// numpetioleRadius
			// 
			this->numpetioleRadius->Location = System::Drawing::Point(254, 13);
			this->numpetioleRadius->Margin = System::Windows::Forms::Padding(2);
			this->numpetioleRadius->Mask = L"00.0000";
			this->numpetioleRadius->Name = L"numpetioleRadius";
			this->numpetioleRadius->Size = System::Drawing::Size(76, 21);
			this->numpetioleRadius->TabIndex = 7;
			this->numpetioleRadius->Text = L"000250";
			// 
			// numpetioleLength
			// 
			this->numpetioleLength->Location = System::Drawing::Point(86, 13);
			this->numpetioleLength->Margin = System::Windows::Forms::Padding(2);
			this->numpetioleLength->Mask = L"00.0000";
			this->numpetioleLength->Name = L"numpetioleLength";
			this->numpetioleLength->Size = System::Drawing::Size(76, 21);
			this->numpetioleLength->TabIndex = 6;
			this->numpetioleLength->Text = L"005000";
			// 
			// txtpetioleLstring
			// 
			this->txtpetioleLstring->Location = System::Drawing::Point(89, 36);
			this->txtpetioleLstring->Margin = System::Windows::Forms::Padding(2);
			this->txtpetioleLstring->Name = L"txtpetioleLstring";
			this->txtpetioleLstring->Size = System::Drawing::Size(372, 21);
			this->txtpetioleLstring->TabIndex = 5;
			this->txtpetioleLstring->Text = L"[+RFLUSV][-RFLUSV][^RFLUSV][&RFLUSV]";
			// 
			// petioleLStringlabel
			// 
			this->petioleLStringlabel->AutoSize = true;
			this->petioleLStringlabel->Location = System::Drawing::Point(5, 40);
			this->petioleLStringlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->petioleLStringlabel->Name = L"petioleLStringlabel";
			this->petioleLStringlabel->Size = System::Drawing::Size(91, 15);
			this->petioleLStringlabel->TabIndex = 4;
			this->petioleLStringlabel->Text = L"Petiole L-String";
			// 
			// petioleRadiuslabel
			// 
			this->petioleRadiuslabel->AutoSize = true;
			this->petioleRadiuslabel->Location = System::Drawing::Point(166, 18);
			this->petioleRadiuslabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->petioleRadiuslabel->Name = L"petioleRadiuslabel";
			this->petioleRadiuslabel->Size = System::Drawing::Size(87, 15);
			this->petioleRadiuslabel->TabIndex = 2;
			this->petioleRadiuslabel->Text = L"Petiole Radius";
			// 
			// petioleLengthlabel
			// 
			this->petioleLengthlabel->AutoSize = true;
			this->petioleLengthlabel->Location = System::Drawing::Point(5, 18);
			this->petioleLengthlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->petioleLengthlabel->Name = L"petioleLengthlabel";
			this->petioleLengthlabel->Size = System::Drawing::Size(86, 15);
			this->petioleLengthlabel->TabIndex = 0;
			this->petioleLengthlabel->Text = L"Petiole Length";
			// 
			// stemPropertiesgroupBox
			// 
			this->stemPropertiesgroupBox->Controls->Add(this->numstemLength);
			this->stemPropertiesgroupBox->Controls->Add(this->numstemRadius);
			this->stemPropertiesgroupBox->Controls->Add(this->txtstemLstring);
			this->stemPropertiesgroupBox->Controls->Add(this->stemStringlabel);
			this->stemPropertiesgroupBox->Controls->Add(this->stemRadiuslabel);
			this->stemPropertiesgroupBox->Controls->Add(this->steemLengthlabel);
			this->stemPropertiesgroupBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->stemPropertiesgroupBox->Location = System::Drawing::Point(5, 17);
			this->stemPropertiesgroupBox->Margin = System::Windows::Forms::Padding(2);
			this->stemPropertiesgroupBox->Name = L"stemPropertiesgroupBox";
			this->stemPropertiesgroupBox->Padding = System::Windows::Forms::Padding(2);
			this->stemPropertiesgroupBox->Size = System::Drawing::Size(458, 63);
			this->stemPropertiesgroupBox->TabIndex = 0;
			this->stemPropertiesgroupBox->TabStop = false;
			this->stemPropertiesgroupBox->Text = L"Stem Properties";
			// 
			// numstemLength
			// 
			this->numstemLength->Location = System::Drawing::Point(86, 13);
			this->numstemLength->Margin = System::Windows::Forms::Padding(2);
			this->numstemLength->Mask = L"00000.00";
			this->numstemLength->Name = L"numstemLength";
			this->numstemLength->Size = System::Drawing::Size(76, 21);
			this->numstemLength->TabIndex = 7;
			this->numstemLength->Text = L"0000100";
			// 
			// numstemRadius
			// 
			this->numstemRadius->Location = System::Drawing::Point(243, 15);
			this->numstemRadius->Margin = System::Windows::Forms::Padding(2);
			this->numstemRadius->Mask = L"00000.00";
			this->numstemRadius->Name = L"numstemRadius";
			this->numstemRadius->Size = System::Drawing::Size(76, 21);
			this->numstemRadius->TabIndex = 6;
			this->numstemRadius->Text = L"0000005";
			// 
			// txtstemLstring
			// 
			this->txtstemLstring->Location = System::Drawing::Point(86, 36);
			this->txtstemLstring->Margin = System::Windows::Forms::Padding(2);
			this->txtstemLstring->Name = L"txtstemLstring";
			this->txtstemLstring->Size = System::Drawing::Size(372, 21);
			this->txtstemLstring->TabIndex = 5;
			this->txtstemLstring->Text = L"{FBB[-/RFBP][+/RFBP]\\\\RFBP}";
			// 
			// stemStringlabel
			// 
			this->stemStringlabel->AutoSize = true;
			this->stemStringlabel->Location = System::Drawing::Point(5, 41);
			this->stemStringlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->stemStringlabel->Name = L"stemStringlabel";
			this->stemStringlabel->Size = System::Drawing::Size(82, 15);
			this->stemStringlabel->TabIndex = 4;
			this->stemStringlabel->Text = L"Stem L-String";
			// 
			// stemRadiuslabel
			// 
			this->stemRadiuslabel->AutoSize = true;
			this->stemRadiuslabel->Location = System::Drawing::Point(166, 20);
			this->stemRadiuslabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->stemRadiuslabel->Name = L"stemRadiuslabel";
			this->stemRadiuslabel->Size = System::Drawing::Size(78, 15);
			this->stemRadiuslabel->TabIndex = 2;
			this->stemRadiuslabel->Text = L"Stem Radius";
			// 
			// steemLengthlabel
			// 
			this->steemLengthlabel->AutoSize = true;
			this->steemLengthlabel->Location = System::Drawing::Point(5, 20);
			this->steemLengthlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->steemLengthlabel->Name = L"steemLengthlabel";
			this->steemLengthlabel->Size = System::Drawing::Size(77, 15);
			this->steemLengthlabel->TabIndex = 0;
			this->steemLengthlabel->Text = L"Stem Length";
			// 
			// environmentPlantgroupBox
			// 
			this->environmentPlantgroupBox->Controls->Add(this->seasonBox);
			this->environmentPlantgroupBox->Controls->Add(this->windgroupBox);
			this->environmentPlantgroupBox->Controls->Add(this->microgroupBox);
			this->environmentPlantgroupBox->Controls->Add(this->oxygentextBox);
			this->environmentPlantgroupBox->Controls->Add(this->macrogroupBox);
			this->environmentPlantgroupBox->Controls->Add(this->textBox1);
			this->environmentPlantgroupBox->Controls->Add(this->waterAmountlabel);
			this->environmentPlantgroupBox->Controls->Add(this->soilTypecomboBox);
			this->environmentPlantgroupBox->Controls->Add(this->soilTypelabel);
			this->environmentPlantgroupBox->Controls->Add(this->soilTexturecomboBox);
			this->environmentPlantgroupBox->Controls->Add(this->soilTexturelabel);
			this->environmentPlantgroupBox->Controls->Add(this->oxygenlabel);
			this->environmentPlantgroupBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->environmentPlantgroupBox->Location = System::Drawing::Point(727, 11);
			this->environmentPlantgroupBox->Margin = System::Windows::Forms::Padding(2);
			this->environmentPlantgroupBox->Name = L"environmentPlantgroupBox";
			this->environmentPlantgroupBox->Padding = System::Windows::Forms::Padding(2);
			this->environmentPlantgroupBox->Size = System::Drawing::Size(523, 627);
			this->environmentPlantgroupBox->TabIndex = 3;
			this->environmentPlantgroupBox->TabStop = false;
			this->environmentPlantgroupBox->Text = L"Environment of the Plant";
			// 
			// seasonBox
			// 
			this->seasonBox->Controls->Add(this->seasonButton);
			this->seasonBox->Controls->Add(this->seasoncomboBox);
			this->seasonBox->Controls->Add(this->seasonlabel);
			this->seasonBox->Location = System::Drawing::Point(5, 565);
			this->seasonBox->Margin = System::Windows::Forms::Padding(2);
			this->seasonBox->Name = L"seasonBox";
			this->seasonBox->Padding = System::Windows::Forms::Padding(2);
			this->seasonBox->Size = System::Drawing::Size(383, 53);
			this->seasonBox->TabIndex = 11;
			this->seasonBox->TabStop = false;
			this->seasonBox->Text = L"Season";
			// 
			// seasonButton
			// 
			this->seasonButton->Location = System::Drawing::Point(255, 16);
			this->seasonButton->Margin = System::Windows::Forms::Padding(2);
			this->seasonButton->Name = L"seasonButton";
			this->seasonButton->Size = System::Drawing::Size(123, 26);
			this->seasonButton->TabIndex = 10;
			this->seasonButton->Text = L"Season On / Off";
			this->seasonButton->UseVisualStyleBackColor = true;
			this->seasonButton->Click += gcnew System::EventHandler(this, &Form1::seasonButton_Click);
			// 
			// seasoncomboBox
			// 
			this->seasoncomboBox->FormattingEnabled = true;
			this->seasoncomboBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Spring", L"Summer", L"Fall", L"Winter"});
			this->seasoncomboBox->Location = System::Drawing::Point(71, 17);
			this->seasoncomboBox->Margin = System::Windows::Forms::Padding(2);
			this->seasoncomboBox->Name = L"seasoncomboBox";
			this->seasoncomboBox->Size = System::Drawing::Size(158, 24);
			this->seasoncomboBox->TabIndex = 9;
			// 
			// seasonlabel
			// 
			this->seasonlabel->AutoSize = true;
			this->seasonlabel->Location = System::Drawing::Point(7, 20);
			this->seasonlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->seasonlabel->Name = L"seasonlabel";
			this->seasonlabel->Size = System::Drawing::Size(56, 17);
			this->seasonlabel->TabIndex = 8;
			this->seasonlabel->Text = L"Season";
			// 
			// windgroupBox
			// 
			this->windgroupBox->Controls->Add(this->txtwindStrength);
			this->windgroupBox->Controls->Add(this->txtwinddirectionz);
			this->windgroupBox->Controls->Add(this->txtwinddirectiony);
			this->windgroupBox->Controls->Add(this->txtwinddirectionx);
			this->windgroupBox->Controls->Add(this->onoffbutton);
			this->windgroupBox->Controls->Add(this->strengthlabel);
			this->windgroupBox->Controls->Add(this->directionlabel);
			this->windgroupBox->Location = System::Drawing::Point(4, 501);
			this->windgroupBox->Margin = System::Windows::Forms::Padding(2);
			this->windgroupBox->Name = L"windgroupBox";
			this->windgroupBox->Padding = System::Windows::Forms::Padding(2);
			this->windgroupBox->Size = System::Drawing::Size(384, 61);
			this->windgroupBox->TabIndex = 7;
			this->windgroupBox->TabStop = false;
			this->windgroupBox->Text = L"Wind";
			// 
			// txtwindStrength
			// 
			this->txtwindStrength->Location = System::Drawing::Point(127, 37);
			this->txtwindStrength->Margin = System::Windows::Forms::Padding(2);
			this->txtwindStrength->Name = L"txtwindStrength";
			this->txtwindStrength->Size = System::Drawing::Size(76, 23);
			this->txtwindStrength->TabIndex = 12;
			this->txtwindStrength->Text = L"10";
			// 
			// txtwinddirectionz
			// 
			this->txtwinddirectionz->Location = System::Drawing::Point(214, 12);
			this->txtwinddirectionz->Margin = System::Windows::Forms::Padding(2);
			this->txtwinddirectionz->Name = L"txtwinddirectionz";
			this->txtwinddirectionz->Size = System::Drawing::Size(38, 23);
			this->txtwinddirectionz->TabIndex = 11;
			this->txtwinddirectionz->Text = L"0";
			// 
			// txtwinddirectiony
			// 
			this->txtwinddirectiony->Location = System::Drawing::Point(171, 12);
			this->txtwinddirectiony->Margin = System::Windows::Forms::Padding(2);
			this->txtwinddirectiony->Name = L"txtwinddirectiony";
			this->txtwinddirectiony->Size = System::Drawing::Size(38, 23);
			this->txtwinddirectiony->TabIndex = 10;
			this->txtwinddirectiony->Text = L"0";
			// 
			// txtwinddirectionx
			// 
			this->txtwinddirectionx->Location = System::Drawing::Point(128, 12);
			this->txtwinddirectionx->Margin = System::Windows::Forms::Padding(2);
			this->txtwinddirectionx->Name = L"txtwinddirectionx";
			this->txtwinddirectionx->Size = System::Drawing::Size(38, 23);
			this->txtwinddirectionx->TabIndex = 9;
			this->txtwinddirectionx->Text = L"1";
			// 
			// onoffbutton
			// 
			this->onoffbutton->Location = System::Drawing::Point(257, 11);
			this->onoffbutton->Margin = System::Windows::Forms::Padding(2);
			this->onoffbutton->Name = L"onoffbutton";
			this->onoffbutton->Size = System::Drawing::Size(106, 24);
			this->onoffbutton->TabIndex = 8;
			this->onoffbutton->Text = L"Wind On / Off";
			this->onoffbutton->UseVisualStyleBackColor = true;
			this->onoffbutton->Click += gcnew System::EventHandler(this, &Form1::onoffbutton_Click);
			// 
			// strengthlabel
			// 
			this->strengthlabel->AutoSize = true;
			this->strengthlabel->Location = System::Drawing::Point(7, 39);
			this->strengthlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->strengthlabel->Name = L"strengthlabel";
			this->strengthlabel->Size = System::Drawing::Size(62, 17);
			this->strengthlabel->TabIndex = 1;
			this->strengthlabel->Text = L"Strength";
			// 
			// directionlabel
			// 
			this->directionlabel->AutoSize = true;
			this->directionlabel->Location = System::Drawing::Point(7, 16);
			this->directionlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->directionlabel->Name = L"directionlabel";
			this->directionlabel->Size = System::Drawing::Size(114, 17);
			this->directionlabel->TabIndex = 0;
			this->directionlabel->Text = L"Direction (x, y, z)";
			// 
			// microgroupBox
			// 
			this->microgroupBox->Controls->Add(this->zinctoxtextBox);
			this->microgroupBox->Controls->Add(this->zincopttextBox);
			this->microgroupBox->Controls->Add(this->sodiumtoxtextBox);
			this->microgroupBox->Controls->Add(this->molybdenumtoxtextBox);
			this->microgroupBox->Controls->Add(this->manganesetoxtextBox);
			this->microgroupBox->Controls->Add(this->irontoxtextBox);
			this->microgroupBox->Controls->Add(this->coppertoxtextBox);
			this->microgroupBox->Controls->Add(this->chlorinetoxtextBox);
			this->microgroupBox->Controls->Add(this->sodiumopttextBox);
			this->microgroupBox->Controls->Add(this->molybdenumopttextBox);
			this->microgroupBox->Controls->Add(this->manganeseopttextBox);
			this->microgroupBox->Controls->Add(this->ironopttextBox);
			this->microgroupBox->Controls->Add(this->copperopttextBox);
			this->microgroupBox->Controls->Add(this->chlorineopttextBox);
			this->microgroupBox->Controls->Add(this->zincmintextBox);
			this->microgroupBox->Controls->Add(this->borontoxtextBox);
			this->microgroupBox->Controls->Add(this->boronopttextBox);
			this->microgroupBox->Controls->Add(this->sodiummintextBox);
			this->microgroupBox->Controls->Add(this->molybdenummintextBox);
			this->microgroupBox->Controls->Add(this->manganesemintextBox);
			this->microgroupBox->Controls->Add(this->ironmintextBox);
			this->microgroupBox->Controls->Add(this->coppermintextBox);
			this->microgroupBox->Controls->Add(this->chlorinemintextBox);
			this->microgroupBox->Controls->Add(this->boronmintextBox);
			this->microgroupBox->Controls->Add(this->zinctextBox);
			this->microgroupBox->Controls->Add(this->sodiumtextBox);
			this->microgroupBox->Controls->Add(this->molybdenumtextBox);
			this->microgroupBox->Controls->Add(this->manganesetextBox);
			this->microgroupBox->Controls->Add(this->irontextBox);
			this->microgroupBox->Controls->Add(this->coppertextBox);
			this->microgroupBox->Controls->Add(this->chlorinetextBox);
			this->microgroupBox->Controls->Add(this->borontextBox);
			this->microgroupBox->Controls->Add(this->zinclabel);
			this->microgroupBox->Controls->Add(this->nickellabel);
			this->microgroupBox->Controls->Add(this->molyblabel);
			this->microgroupBox->Controls->Add(this->manganeselabel);
			this->microgroupBox->Controls->Add(this->ironlabel);
			this->microgroupBox->Controls->Add(this->copperlabel);
			this->microgroupBox->Controls->Add(this->chlorinelabel);
			this->microgroupBox->Controls->Add(this->boronlabel);
			this->microgroupBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->microgroupBox->Location = System::Drawing::Point(9, 288);
			this->microgroupBox->Margin = System::Windows::Forms::Padding(2);
			this->microgroupBox->Name = L"microgroupBox";
			this->microgroupBox->Padding = System::Windows::Forms::Padding(2);
			this->microgroupBox->Size = System::Drawing::Size(502, 209);
			this->microgroupBox->TabIndex = 7;
			this->microgroupBox->TabStop = false;
			this->microgroupBox->Text = L"Micronutrient Amount";
			// 
			// zinctoxtextBox
			// 
			this->zinctoxtextBox->Location = System::Drawing::Point(371, 180);
			this->zinctoxtextBox->Name = L"zinctoxtextBox";
			this->zinctoxtextBox->Size = System::Drawing::Size(64, 21);
			this->zinctoxtextBox->TabIndex = 40;
			this->zinctoxtextBox->Text = L"0.0006";
			// 
			// zincopttextBox
			// 
			this->zincopttextBox->Location = System::Drawing::Point(298, 180);
			this->zincopttextBox->Name = L"zincopttextBox";
			this->zincopttextBox->Size = System::Drawing::Size(64, 21);
			this->zincopttextBox->TabIndex = 39;
			this->zincopttextBox->Text = L"0.000129";
			// 
			// sodiumtoxtextBox
			// 
			this->sodiumtoxtextBox->Location = System::Drawing::Point(370, 157);
			this->sodiumtoxtextBox->Name = L"sodiumtoxtextBox";
			this->sodiumtoxtextBox->Size = System::Drawing::Size(64, 21);
			this->sodiumtoxtextBox->TabIndex = 38;
			this->sodiumtoxtextBox->Text = L"10000";
			// 
			// molybdenumtoxtextBox
			// 
			this->molybdenumtoxtextBox->Location = System::Drawing::Point(370, 135);
			this->molybdenumtoxtextBox->Name = L"molybdenumtoxtextBox";
			this->molybdenumtoxtextBox->Size = System::Drawing::Size(64, 21);
			this->molybdenumtoxtextBox->TabIndex = 37;
			this->molybdenumtoxtextBox->Text = L"1.0";
			// 
			// manganesetoxtextBox
			// 
			this->manganesetoxtextBox->Location = System::Drawing::Point(370, 113);
			this->manganesetoxtextBox->Name = L"manganesetoxtextBox";
			this->manganesetoxtextBox->Size = System::Drawing::Size(64, 21);
			this->manganesetoxtextBox->TabIndex = 36;
			this->manganesetoxtextBox->Text = L"0.00106";
			// 
			// irontoxtextBox
			// 
			this->irontoxtextBox->Location = System::Drawing::Point(370, 90);
			this->irontoxtextBox->Name = L"irontoxtextBox";
			this->irontoxtextBox->Size = System::Drawing::Size(64, 21);
			this->irontoxtextBox->TabIndex = 35;
			this->irontoxtextBox->Text = L"0.0067";
			// 
			// coppertoxtextBox
			// 
			this->coppertoxtextBox->Location = System::Drawing::Point(370, 67);
			this->coppertoxtextBox->Name = L"coppertoxtextBox";
			this->coppertoxtextBox->Size = System::Drawing::Size(64, 21);
			this->coppertoxtextBox->TabIndex = 34;
			this->coppertoxtextBox->Text = L"0.006";
			// 
			// chlorinetoxtextBox
			// 
			this->chlorinetoxtextBox->Location = System::Drawing::Point(370, 42);
			this->chlorinetoxtextBox->Name = L"chlorinetoxtextBox";
			this->chlorinetoxtextBox->Size = System::Drawing::Size(64, 21);
			this->chlorinetoxtextBox->TabIndex = 33;
			this->chlorinetoxtextBox->Text = L"10000";
			// 
			// sodiumopttextBox
			// 
			this->sodiumopttextBox->Location = System::Drawing::Point(298, 157);
			this->sodiumopttextBox->Name = L"sodiumopttextBox";
			this->sodiumopttextBox->Size = System::Drawing::Size(64, 21);
			this->sodiumopttextBox->TabIndex = 32;
			this->sodiumopttextBox->Text = L"0.000020";
			// 
			// molybdenumopttextBox
			// 
			this->molybdenumopttextBox->Location = System::Drawing::Point(298, 135);
			this->molybdenumopttextBox->Name = L"molybdenumopttextBox";
			this->molybdenumopttextBox->Size = System::Drawing::Size(64, 21);
			this->molybdenumopttextBox->TabIndex = 31;
			this->molybdenumopttextBox->Text = L"0.000010";
			// 
			// manganeseopttextBox
			// 
			this->manganeseopttextBox->Location = System::Drawing::Point(298, 113);
			this->manganeseopttextBox->Name = L"manganeseopttextBox";
			this->manganeseopttextBox->Size = System::Drawing::Size(64, 21);
			this->manganeseopttextBox->TabIndex = 30;
			this->manganeseopttextBox->Text = L"0.001043";
			// 
			// ironopttextBox
			// 
			this->ironopttextBox->Location = System::Drawing::Point(298, 90);
			this->ironopttextBox->Name = L"ironopttextBox";
			this->ironopttextBox->Size = System::Drawing::Size(64, 21);
			this->ironopttextBox->TabIndex = 29;
			this->ironopttextBox->Text = L"0.001786";
			// 
			// copperopttextBox
			// 
			this->copperopttextBox->Location = System::Drawing::Point(298, 67);
			this->copperopttextBox->Name = L"copperopttextBox";
			this->copperopttextBox->Size = System::Drawing::Size(64, 21);
			this->copperopttextBox->TabIndex = 28;
			this->copperopttextBox->Text = L"0.000057";
			// 
			// chlorineopttextBox
			// 
			this->chlorineopttextBox->Location = System::Drawing::Point(298, 42);
			this->chlorineopttextBox->Name = L"chlorineopttextBox";
			this->chlorineopttextBox->Size = System::Drawing::Size(64, 21);
			this->chlorineopttextBox->TabIndex = 27;
			this->chlorineopttextBox->Text = L"0.225357";
			// 
			// zincmintextBox
			// 
			this->zincmintextBox->Location = System::Drawing::Point(227, 180);
			this->zincmintextBox->Name = L"zincmintextBox";
			this->zincmintextBox->Size = System::Drawing::Size(64, 21);
			this->zincmintextBox->TabIndex = 26;
			this->zincmintextBox->Text = L"0.000001";
			// 
			// borontoxtextBox
			// 
			this->borontoxtextBox->Location = System::Drawing::Point(370, 18);
			this->borontoxtextBox->Name = L"borontoxtextBox";
			this->borontoxtextBox->Size = System::Drawing::Size(64, 21);
			this->borontoxtextBox->TabIndex = 25;
			this->borontoxtextBox->Text = L"0.0004";
			// 
			// boronopttextBox
			// 
			this->boronopttextBox->Location = System::Drawing::Point(298, 18);
			this->boronopttextBox->Name = L"boronopttextBox";
			this->boronopttextBox->Size = System::Drawing::Size(64, 21);
			this->boronopttextBox->TabIndex = 24;
			this->boronopttextBox->Text = L"0.002571";
			// 
			// sodiummintextBox
			// 
			this->sodiummintextBox->Location = System::Drawing::Point(227, 157);
			this->sodiummintextBox->Name = L"sodiummintextBox";
			this->sodiummintextBox->Size = System::Drawing::Size(64, 21);
			this->sodiummintextBox->TabIndex = 23;
			this->sodiummintextBox->Text = L"0.000001";
			// 
			// molybdenummintextBox
			// 
			this->molybdenummintextBox->Location = System::Drawing::Point(227, 135);
			this->molybdenummintextBox->Name = L"molybdenummintextBox";
			this->molybdenummintextBox->Size = System::Drawing::Size(64, 21);
			this->molybdenummintextBox->TabIndex = 22;
			this->molybdenummintextBox->Text = L"0.000001";
			// 
			// manganesemintextBox
			// 
			this->manganesemintextBox->Location = System::Drawing::Point(227, 113);
			this->manganesemintextBox->Name = L"manganesemintextBox";
			this->manganesemintextBox->Size = System::Drawing::Size(64, 21);
			this->manganesemintextBox->TabIndex = 21;
			this->manganesemintextBox->Text = L"0.000001";
			// 
			// ironmintextBox
			// 
			this->ironmintextBox->Location = System::Drawing::Point(227, 90);
			this->ironmintextBox->Name = L"ironmintextBox";
			this->ironmintextBox->Size = System::Drawing::Size(64, 21);
			this->ironmintextBox->TabIndex = 20;
			this->ironmintextBox->Text = L"0.000001";
			// 
			// coppermintextBox
			// 
			this->coppermintextBox->Location = System::Drawing::Point(227, 67);
			this->coppermintextBox->Name = L"coppermintextBox";
			this->coppermintextBox->Size = System::Drawing::Size(64, 21);
			this->coppermintextBox->TabIndex = 19;
			this->coppermintextBox->Text = L"0.000001";
			// 
			// chlorinemintextBox
			// 
			this->chlorinemintextBox->Location = System::Drawing::Point(227, 42);
			this->chlorinemintextBox->Name = L"chlorinemintextBox";
			this->chlorinemintextBox->Size = System::Drawing::Size(64, 21);
			this->chlorinemintextBox->TabIndex = 18;
			this->chlorinemintextBox->Text = L"0.001";
			// 
			// boronmintextBox
			// 
			this->boronmintextBox->Location = System::Drawing::Point(227, 18);
			this->boronmintextBox->Name = L"boronmintextBox";
			this->boronmintextBox->Size = System::Drawing::Size(64, 21);
			this->boronmintextBox->TabIndex = 17;
			this->boronmintextBox->Text = L"0.000001";
			// 
			// zinctextBox
			// 
			this->zinctextBox->Location = System::Drawing::Point(152, 180);
			this->zinctextBox->Margin = System::Windows::Forms::Padding(2);
			this->zinctextBox->Name = L"zinctextBox";
			this->zinctextBox->Size = System::Drawing::Size(63, 21);
			this->zinctextBox->TabIndex = 16;
			this->zinctextBox->Text = L"0.000129";
			// 
			// sodiumtextBox
			// 
			this->sodiumtextBox->Location = System::Drawing::Point(152, 157);
			this->sodiumtextBox->Margin = System::Windows::Forms::Padding(2);
			this->sodiumtextBox->Name = L"sodiumtextBox";
			this->sodiumtextBox->Size = System::Drawing::Size(63, 21);
			this->sodiumtextBox->TabIndex = 15;
			this->sodiumtextBox->Text = L"0.000020";
			// 
			// molybdenumtextBox
			// 
			this->molybdenumtextBox->Location = System::Drawing::Point(152, 135);
			this->molybdenumtextBox->Margin = System::Windows::Forms::Padding(2);
			this->molybdenumtextBox->Name = L"molybdenumtextBox";
			this->molybdenumtextBox->Size = System::Drawing::Size(63, 21);
			this->molybdenumtextBox->TabIndex = 14;
			this->molybdenumtextBox->Text = L"0.000010";
			// 
			// manganesetextBox
			// 
			this->manganesetextBox->Location = System::Drawing::Point(152, 113);
			this->manganesetextBox->Margin = System::Windows::Forms::Padding(2);
			this->manganesetextBox->Name = L"manganesetextBox";
			this->manganesetextBox->Size = System::Drawing::Size(63, 21);
			this->manganesetextBox->TabIndex = 13;
			this->manganesetextBox->Text = L"0.001043";
			// 
			// irontextBox
			// 
			this->irontextBox->Location = System::Drawing::Point(153, 90);
			this->irontextBox->Margin = System::Windows::Forms::Padding(2);
			this->irontextBox->Name = L"irontextBox";
			this->irontextBox->Size = System::Drawing::Size(63, 21);
			this->irontextBox->TabIndex = 12;
			this->irontextBox->Text = L"0.001786";
			// 
			// coppertextBox
			// 
			this->coppertextBox->Location = System::Drawing::Point(153, 67);
			this->coppertextBox->Margin = System::Windows::Forms::Padding(2);
			this->coppertextBox->Name = L"coppertextBox";
			this->coppertextBox->Size = System::Drawing::Size(63, 21);
			this->coppertextBox->TabIndex = 11;
			this->coppertextBox->Text = L"0.000057";
			// 
			// chlorinetextBox
			// 
			this->chlorinetextBox->Location = System::Drawing::Point(154, 42);
			this->chlorinetextBox->Margin = System::Windows::Forms::Padding(2);
			this->chlorinetextBox->Name = L"chlorinetextBox";
			this->chlorinetextBox->Size = System::Drawing::Size(63, 21);
			this->chlorinetextBox->TabIndex = 10;
			this->chlorinetextBox->Text = L"0.225357";
			// 
			// borontextBox
			// 
			this->borontextBox->Location = System::Drawing::Point(154, 18);
			this->borontextBox->Margin = System::Windows::Forms::Padding(2);
			this->borontextBox->Name = L"borontextBox";
			this->borontextBox->Size = System::Drawing::Size(64, 21);
			this->borontextBox->TabIndex = 9;
			this->borontextBox->Text = L"0.002571";
			// 
			// zinclabel
			// 
			this->zinclabel->AutoSize = true;
			this->zinclabel->Location = System::Drawing::Point(72, 184);
			this->zinclabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->zinclabel->Name = L"zinclabel";
			this->zinclabel->Size = System::Drawing::Size(30, 15);
			this->zinclabel->TabIndex = 8;
			this->zinclabel->Text = L"Zinc";
			// 
			// nickellabel
			// 
			this->nickellabel->AutoSize = true;
			this->nickellabel->Location = System::Drawing::Point(72, 162);
			this->nickellabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->nickellabel->Name = L"nickellabel";
			this->nickellabel->Size = System::Drawing::Size(50, 15);
			this->nickellabel->TabIndex = 7;
			this->nickellabel->Text = L"Sodium";
			// 
			// molyblabel
			// 
			this->molyblabel->AutoSize = true;
			this->molyblabel->Location = System::Drawing::Point(72, 140);
			this->molyblabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->molyblabel->Name = L"molyblabel";
			this->molyblabel->Size = System::Drawing::Size(79, 15);
			this->molyblabel->TabIndex = 6;
			this->molyblabel->Text = L"Molybdenum";
			// 
			// manganeselabel
			// 
			this->manganeselabel->AutoSize = true;
			this->manganeselabel->Location = System::Drawing::Point(72, 118);
			this->manganeselabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->manganeselabel->Name = L"manganeselabel";
			this->manganeselabel->Size = System::Drawing::Size(73, 15);
			this->manganeselabel->TabIndex = 5;
			this->manganeselabel->Text = L"Manganese";
			// 
			// ironlabel
			// 
			this->ironlabel->AutoSize = true;
			this->ironlabel->Location = System::Drawing::Point(72, 95);
			this->ironlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ironlabel->Name = L"ironlabel";
			this->ironlabel->Size = System::Drawing::Size(28, 15);
			this->ironlabel->TabIndex = 4;
			this->ironlabel->Text = L"Iron";
			// 
			// copperlabel
			// 
			this->copperlabel->AutoSize = true;
			this->copperlabel->Location = System::Drawing::Point(72, 72);
			this->copperlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->copperlabel->Name = L"copperlabel";
			this->copperlabel->Size = System::Drawing::Size(47, 15);
			this->copperlabel->TabIndex = 3;
			this->copperlabel->Text = L"Copper";
			// 
			// chlorinelabel
			// 
			this->chlorinelabel->AutoSize = true;
			this->chlorinelabel->Location = System::Drawing::Point(72, 47);
			this->chlorinelabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->chlorinelabel->Name = L"chlorinelabel";
			this->chlorinelabel->Size = System::Drawing::Size(53, 15);
			this->chlorinelabel->TabIndex = 2;
			this->chlorinelabel->Text = L"Chlorine";
			// 
			// boronlabel
			// 
			this->boronlabel->AutoSize = true;
			this->boronlabel->Location = System::Drawing::Point(72, 23);
			this->boronlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->boronlabel->Name = L"boronlabel";
			this->boronlabel->Size = System::Drawing::Size(40, 15);
			this->boronlabel->TabIndex = 1;
			this->boronlabel->Text = L"Boron";
			// 
			// oxygentextBox
			// 
			this->oxygentextBox->Location = System::Drawing::Point(242, 41);
			this->oxygentextBox->Margin = System::Windows::Forms::Padding(2);
			this->oxygentextBox->Name = L"oxygentextBox";
			this->oxygentextBox->Size = System::Drawing::Size(92, 23);
			this->oxygentextBox->TabIndex = 14;
			// 
			// macrogroupBox
			// 
			this->macrogroupBox->Controls->Add(this->sulfurtoxtextBox);
			this->macrogroupBox->Controls->Add(this->potassiumtoxtextBox);
			this->macrogroupBox->Controls->Add(this->phosphoroustoxtextBox);
			this->macrogroupBox->Controls->Add(this->nitrogentoxtextBox);
			this->macrogroupBox->Controls->Add(this->magnesiumtoxtextBox);
			this->macrogroupBox->Controls->Add(this->hydrogentoxtextBox);
			this->macrogroupBox->Controls->Add(this->calciumtoxtextBox);
			this->macrogroupBox->Controls->Add(this->sulfuropttextBox);
			this->macrogroupBox->Controls->Add(this->potassiumopttextBox);
			this->macrogroupBox->Controls->Add(this->phosphorousopttextBox);
			this->macrogroupBox->Controls->Add(this->nitrogenopttextBox);
			this->macrogroupBox->Controls->Add(this->magnesiumopttextBox);
			this->macrogroupBox->Controls->Add(this->hydrogenopttextBox);
			this->macrogroupBox->Controls->Add(this->calciumopttextBox);
			this->macrogroupBox->Controls->Add(this->sulfurmintextBox);
			this->macrogroupBox->Controls->Add(this->potassiummintextBox);
			this->macrogroupBox->Controls->Add(this->phosphorousmintextBox);
			this->macrogroupBox->Controls->Add(this->nitrogenmintextBox);
			this->macrogroupBox->Controls->Add(this->magnesiummintextBox);
			this->macrogroupBox->Controls->Add(this->hydrogenmintextBox);
			this->macrogroupBox->Controls->Add(this->calciumMintextBox);
			this->macrogroupBox->Controls->Add(this->label4);
			this->macrogroupBox->Controls->Add(this->label3);
			this->macrogroupBox->Controls->Add(this->label2);
			this->macrogroupBox->Controls->Add(this->label1);
			this->macrogroupBox->Controls->Add(this->sulfurtextBox);
			this->macrogroupBox->Controls->Add(this->potassiumtextBox);
			this->macrogroupBox->Controls->Add(this->phosphoroustextBox);
			this->macrogroupBox->Controls->Add(this->nitrogentextBox);
			this->macrogroupBox->Controls->Add(this->magnesiumtextBox);
			this->macrogroupBox->Controls->Add(this->hydrogentextBox);
			this->macrogroupBox->Controls->Add(this->calciumtextBox);
			this->macrogroupBox->Controls->Add(this->potassiumlabel);
			this->macrogroupBox->Controls->Add(this->phosphorouslabel);
			this->macrogroupBox->Controls->Add(this->nitrogenlabel);
			this->macrogroupBox->Controls->Add(this->magnesiumlabel);
			this->macrogroupBox->Controls->Add(this->hydrogenlabel);
			this->macrogroupBox->Controls->Add(this->calciumlabel);
			this->macrogroupBox->Controls->Add(this->sulferlabel);
			this->macrogroupBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->macrogroupBox->Location = System::Drawing::Point(7, 73);
			this->macrogroupBox->Margin = System::Windows::Forms::Padding(2);
			this->macrogroupBox->Name = L"macrogroupBox";
			this->macrogroupBox->Padding = System::Windows::Forms::Padding(2);
			this->macrogroupBox->Size = System::Drawing::Size(508, 212);
			this->macrogroupBox->TabIndex = 6;
			this->macrogroupBox->TabStop = false;
			this->macrogroupBox->Text = L"Macronutrient Amount";
			// 
			// sulfurtoxtextBox
			// 
			this->sulfurtoxtextBox->Location = System::Drawing::Point(370, 182);
			this->sulfurtoxtextBox->Name = L"sulfurtoxtextBox";
			this->sulfurtoxtextBox->Size = System::Drawing::Size(65, 21);
			this->sulfurtoxtextBox->TabIndex = 42;
			this->sulfurtoxtextBox->Text = L"0.111";
			// 
			// potassiumtoxtextBox
			// 
			this->potassiumtoxtextBox->Location = System::Drawing::Point(370, 159);
			this->potassiumtoxtextBox->Name = L"potassiumtoxtextBox";
			this->potassiumtoxtextBox->Size = System::Drawing::Size(65, 21);
			this->potassiumtoxtextBox->TabIndex = 41;
			this->potassiumtoxtextBox->Text = L"0.666";
			// 
			// phosphoroustoxtextBox
			// 
			this->phosphoroustoxtextBox->Location = System::Drawing::Point(370, 137);
			this->phosphoroustoxtextBox->Name = L"phosphoroustoxtextBox";
			this->phosphoroustoxtextBox->Size = System::Drawing::Size(65, 21);
			this->phosphoroustoxtextBox->TabIndex = 40;
			this->phosphoroustoxtextBox->Text = L"0.111";
			// 
			// nitrogentoxtextBox
			// 
			this->nitrogentoxtextBox->Location = System::Drawing::Point(370, 114);
			this->nitrogentoxtextBox->Name = L"nitrogentoxtextBox";
			this->nitrogentoxtextBox->Size = System::Drawing::Size(65, 21);
			this->nitrogentoxtextBox->TabIndex = 39;
			this->nitrogentoxtextBox->Text = L"10.0";
			// 
			// magnesiumtoxtextBox
			// 
			this->magnesiumtoxtextBox->Location = System::Drawing::Point(370, 89);
			this->magnesiumtoxtextBox->Name = L"magnesiumtoxtextBox";
			this->magnesiumtoxtextBox->Size = System::Drawing::Size(65, 21);
			this->magnesiumtoxtextBox->TabIndex = 38;
			this->magnesiumtoxtextBox->Text = L"0.222";
			// 
			// hydrogentoxtextBox
			// 
			this->hydrogentoxtextBox->Location = System::Drawing::Point(370, 66);
			this->hydrogentoxtextBox->Name = L"hydrogentoxtextBox";
			this->hydrogentoxtextBox->Size = System::Drawing::Size(65, 21);
			this->hydrogentoxtextBox->TabIndex = 37;
			this->hydrogentoxtextBox->Text = L"1.0";
			// 
			// calciumtoxtextBox
			// 
			this->calciumtoxtextBox->Location = System::Drawing::Point(370, 42);
			this->calciumtoxtextBox->Name = L"calciumtoxtextBox";
			this->calciumtoxtextBox->Size = System::Drawing::Size(65, 21);
			this->calciumtoxtextBox->TabIndex = 36;
			this->calciumtoxtextBox->Text = L"0.222";
			// 
			// sulfuropttextBox
			// 
			this->sulfuropttextBox->Location = System::Drawing::Point(298, 183);
			this->sulfuropttextBox->Name = L"sulfuropttextBox";
			this->sulfuropttextBox->Size = System::Drawing::Size(65, 21);
			this->sulfuropttextBox->TabIndex = 35;
			this->sulfuropttextBox->Text = L"0.029800";
			// 
			// potassiumopttextBox
			// 
			this->potassiumopttextBox->Location = System::Drawing::Point(298, 159);
			this->potassiumopttextBox->Name = L"potassiumopttextBox";
			this->potassiumopttextBox->Size = System::Drawing::Size(65, 21);
			this->potassiumopttextBox->TabIndex = 34;
			this->potassiumopttextBox->Text = L"0.0307143";
			// 
			// phosphorousopttextBox
			// 
			this->phosphorousopttextBox->Location = System::Drawing::Point(298, 137);
			this->phosphorousopttextBox->Name = L"phosphorousopttextBox";
			this->phosphorousopttextBox->Size = System::Drawing::Size(65, 21);
			this->phosphorousopttextBox->TabIndex = 33;
			this->phosphorousopttextBox->Text = L"0.067143";
			// 
			// nitrogenopttextBox
			// 
			this->nitrogenopttextBox->Location = System::Drawing::Point(298, 114);
			this->nitrogenopttextBox->Name = L"nitrogenopttextBox";
			this->nitrogenopttextBox->Size = System::Drawing::Size(65, 21);
			this->nitrogenopttextBox->TabIndex = 32;
			this->nitrogenopttextBox->Text = L"1.0";
			// 
			// magnesiumopttextBox
			// 
			this->magnesiumopttextBox->Location = System::Drawing::Point(298, 89);
			this->magnesiumopttextBox->Name = L"magnesiumopttextBox";
			this->magnesiumopttextBox->Size = System::Drawing::Size(65, 21);
			this->magnesiumopttextBox->TabIndex = 31;
			this->magnesiumopttextBox->Text = L"0.057143";
			// 
			// hydrogenopttextBox
			// 
			this->hydrogenopttextBox->Location = System::Drawing::Point(298, 66);
			this->hydrogenopttextBox->Name = L"hydrogenopttextBox";
			this->hydrogenopttextBox->Size = System::Drawing::Size(65, 21);
			this->hydrogenopttextBox->TabIndex = 30;
			this->hydrogenopttextBox->Text = L"0.06";
			// 
			// calciumopttextBox
			// 
			this->calciumopttextBox->Location = System::Drawing::Point(298, 42);
			this->calciumopttextBox->Name = L"calciumopttextBox";
			this->calciumopttextBox->Size = System::Drawing::Size(65, 21);
			this->calciumopttextBox->TabIndex = 29;
			this->calciumopttextBox->Text = L"0.071429";
			// 
			// sulfurmintextBox
			// 
			this->sulfurmintextBox->Location = System::Drawing::Point(227, 183);
			this->sulfurmintextBox->Name = L"sulfurmintextBox";
			this->sulfurmintextBox->Size = System::Drawing::Size(65, 21);
			this->sulfurmintextBox->TabIndex = 28;
			this->sulfurmintextBox->Text = L"0.001";
			// 
			// potassiummintextBox
			// 
			this->potassiummintextBox->Location = System::Drawing::Point(227, 159);
			this->potassiummintextBox->Name = L"potassiummintextBox";
			this->potassiummintextBox->Size = System::Drawing::Size(65, 21);
			this->potassiummintextBox->TabIndex = 27;
			this->potassiummintextBox->Text = L"0.001";
			// 
			// phosphorousmintextBox
			// 
			this->phosphorousmintextBox->Location = System::Drawing::Point(227, 137);
			this->phosphorousmintextBox->Name = L"phosphorousmintextBox";
			this->phosphorousmintextBox->Size = System::Drawing::Size(65, 21);
			this->phosphorousmintextBox->TabIndex = 26;
			this->phosphorousmintextBox->Text = L"0.001";
			// 
			// nitrogenmintextBox
			// 
			this->nitrogenmintextBox->Location = System::Drawing::Point(226, 114);
			this->nitrogenmintextBox->Name = L"nitrogenmintextBox";
			this->nitrogenmintextBox->Size = System::Drawing::Size(65, 21);
			this->nitrogenmintextBox->TabIndex = 25;
			this->nitrogenmintextBox->Text = L"0.1";
			// 
			// magnesiummintextBox
			// 
			this->magnesiummintextBox->Location = System::Drawing::Point(225, 89);
			this->magnesiummintextBox->Name = L"magnesiummintextBox";
			this->magnesiummintextBox->Size = System::Drawing::Size(65, 21);
			this->magnesiummintextBox->TabIndex = 24;
			this->magnesiummintextBox->Text = L"0.001";
			// 
			// hydrogenmintextBox
			// 
			this->hydrogenmintextBox->Location = System::Drawing::Point(225, 66);
			this->hydrogenmintextBox->Name = L"hydrogenmintextBox";
			this->hydrogenmintextBox->Size = System::Drawing::Size(65, 21);
			this->hydrogenmintextBox->TabIndex = 23;
			this->hydrogenmintextBox->Text = L"0.001";
			// 
			// calciumMintextBox
			// 
			this->calciumMintextBox->Location = System::Drawing::Point(225, 42);
			this->calciumMintextBox->Name = L"calciumMintextBox";
			this->calciumMintextBox->Size = System::Drawing::Size(65, 21);
			this->calciumMintextBox->TabIndex = 22;
			this->calciumMintextBox->Text = L"0.001";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(374, 22);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 15);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Toxic";
		
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(303, 22);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 15);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Optimum";

			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(231, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 15);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Minimum";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(138, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 15);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Concentration";
			
			// 
			// sulfurtextBox
			// 
			this->sulfurtextBox->Location = System::Drawing::Point(154, 183);
			this->sulfurtextBox->Margin = System::Windows::Forms::Padding(2);
			this->sulfurtextBox->Name = L"sulfurtextBox";
			this->sulfurtextBox->Size = System::Drawing::Size(65, 21);
			this->sulfurtextBox->TabIndex = 17;
			this->sulfurtextBox->Text = L"0.029800";
			// 
			// potassiumtextBox
			// 
			this->potassiumtextBox->Location = System::Drawing::Point(154, 159);
			this->potassiumtextBox->Margin = System::Windows::Forms::Padding(2);
			this->potassiumtextBox->Name = L"potassiumtextBox";
			this->potassiumtextBox->Size = System::Drawing::Size(65, 21);
			this->potassiumtextBox->TabIndex = 16;
			this->potassiumtextBox->Text = L"0.0307143";
			// 
			// phosphoroustextBox
			// 
			this->phosphoroustextBox->Location = System::Drawing::Point(154, 137);
			this->phosphoroustextBox->Margin = System::Windows::Forms::Padding(2);
			this->phosphoroustextBox->Name = L"phosphoroustextBox";
			this->phosphoroustextBox->Size = System::Drawing::Size(65, 21);
			this->phosphoroustextBox->TabIndex = 15;
			this->phosphoroustextBox->Text = L"0.067143";
			// 
			// nitrogentextBox
			// 
			this->nitrogentextBox->Location = System::Drawing::Point(154, 114);
			this->nitrogentextBox->Margin = System::Windows::Forms::Padding(2);
			this->nitrogentextBox->Name = L"nitrogentextBox";
			this->nitrogentextBox->Size = System::Drawing::Size(65, 21);
			this->nitrogentextBox->TabIndex = 13;
			this->nitrogentextBox->Text = L"1.0";
			// 
			// magnesiumtextBox
			// 
			this->magnesiumtextBox->Location = System::Drawing::Point(154, 89);
			this->magnesiumtextBox->Margin = System::Windows::Forms::Padding(2);
			this->magnesiumtextBox->Name = L"magnesiumtextBox";
			this->magnesiumtextBox->Size = System::Drawing::Size(65, 21);
			this->magnesiumtextBox->TabIndex = 12;
			this->magnesiumtextBox->Text = L"0.057143";
			// 
			// hydrogentextBox
			// 
			this->hydrogentextBox->Location = System::Drawing::Point(154, 66);
			this->hydrogentextBox->Margin = System::Windows::Forms::Padding(2);
			this->hydrogentextBox->Name = L"hydrogentextBox";
			this->hydrogentextBox->Size = System::Drawing::Size(65, 21);
			this->hydrogentextBox->TabIndex = 11;
			this->hydrogentextBox->Text = L"0.06";
			// 
			// calciumtextBox
			// 
			this->calciumtextBox->Location = System::Drawing::Point(154, 42);
			this->calciumtextBox->Margin = System::Windows::Forms::Padding(2);
			this->calciumtextBox->Name = L"calciumtextBox";
			this->calciumtextBox->Size = System::Drawing::Size(65, 21);
			this->calciumtextBox->TabIndex = 9;
			this->calciumtextBox->Text = L"0.071429";
			// 
			// potassiumlabel
			// 
			this->potassiumlabel->AutoSize = true;
			this->potassiumlabel->Location = System::Drawing::Point(75, 164);
			this->potassiumlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->potassiumlabel->Name = L"potassiumlabel";
			this->potassiumlabel->Size = System::Drawing::Size(65, 15);
			this->potassiumlabel->TabIndex = 8;
			this->potassiumlabel->Text = L"Potassium";
			// 
			// phosphorouslabel
			// 
			this->phosphorouslabel->AutoSize = true;
			this->phosphorouslabel->Location = System::Drawing::Point(75, 142);
			this->phosphorouslabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->phosphorouslabel->Name = L"phosphorouslabel";
			this->phosphorouslabel->Size = System::Drawing::Size(80, 15);
			this->phosphorouslabel->TabIndex = 7;
			this->phosphorouslabel->Text = L"Phosphorous";
			// 
			// nitrogenlabel
			// 
			this->nitrogenlabel->AutoSize = true;
			this->nitrogenlabel->Location = System::Drawing::Point(75, 119);
			this->nitrogenlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->nitrogenlabel->Name = L"nitrogenlabel";
			this->nitrogenlabel->Size = System::Drawing::Size(54, 15);
			this->nitrogenlabel->TabIndex = 5;
			this->nitrogenlabel->Text = L"Nitrogen";
			// 
			// magnesiumlabel
			// 
			this->magnesiumlabel->AutoSize = true;
			this->magnesiumlabel->Location = System::Drawing::Point(75, 96);
			this->magnesiumlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->magnesiumlabel->Name = L"magnesiumlabel";
			this->magnesiumlabel->Size = System::Drawing::Size(73, 15);
			this->magnesiumlabel->TabIndex = 4;
			this->magnesiumlabel->Text = L"Magnesium";
			// 
			// hydrogenlabel
			// 
			this->hydrogenlabel->AutoSize = true;
			this->hydrogenlabel->Location = System::Drawing::Point(75, 71);
			this->hydrogenlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->hydrogenlabel->Name = L"hydrogenlabel";
			this->hydrogenlabel->Size = System::Drawing::Size(60, 15);
			this->hydrogenlabel->TabIndex = 3;
			this->hydrogenlabel->Text = L"Hydrogen";
			// 
			// calciumlabel
			// 
			this->calciumlabel->AutoSize = true;
			this->calciumlabel->Location = System::Drawing::Point(74, 47);
			this->calciumlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->calciumlabel->Name = L"calciumlabel";
			this->calciumlabel->Size = System::Drawing::Size(52, 15);
			this->calciumlabel->TabIndex = 1;
			this->calciumlabel->Text = L"Calcium";
			// 
			// sulferlabel
			// 
			this->sulferlabel->AutoSize = true;
			this->sulferlabel->Location = System::Drawing::Point(74, 188);
			this->sulferlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->sulferlabel->Name = L"sulferlabel";
			this->sulferlabel->Size = System::Drawing::Size(39, 15);
			this->sulferlabel->TabIndex = 0;
			this->sulferlabel->Text = L"Sulfur";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(82, 41);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(92, 23);
			this->textBox1->TabIndex = 5;
		
			// 
			// waterAmountlabel
			// 
			this->waterAmountlabel->AutoSize = true;
			this->waterAmountlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->waterAmountlabel->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->waterAmountlabel->Location = System::Drawing::Point(14, 47);
			this->waterAmountlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->waterAmountlabel->Name = L"waterAmountlabel";
			this->waterAmountlabel->Size = System::Drawing::Size(39, 15);
			this->waterAmountlabel->TabIndex = 4;
			this->waterAmountlabel->Text = L"Water";
			// 
			// soilTypecomboBox
			// 
			this->soilTypecomboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->soilTypecomboBox->FormattingEnabled = true;
			this->soilTypecomboBox->Items->AddRange(gcnew cli::array< System::Object^  >(29) {L"Acrisol (AC)", L"Albeluvisol (AB)", L"Alisol (AL)", 
				L"Andosol (AN)", L"Anthrosol (AT)", L"Arenosol (AT)", L"Calcisol (CL)", L"Cambisol (CM)", L"Chernozem (CH)", L"Cryosol (CR)", 
				L"Durisol (DU)", L"Ferralsol (FR)", L"Fluvisol (FL)", L"Gleysol (GL)", L"Gypsisol (GY)", L"Histosol (HS)", L"Kastanozem (KS)", 
				L"Leptosol (LP)", L"Lixisol (LX)", L"Luvisol (LV)", L"Nitisol (NT)", L"Phaeozem (PH)", L"Planosol (PL)", L"Podzol (PZ)", L"Regosol (RG)", 
				L"Solonchak (SC)", L"Solonetz (SN)", L"Unbrisol (UM)", L"Vertisol (VR)"});
			this->soilTypecomboBox->Location = System::Drawing::Point(242, 16);
			this->soilTypecomboBox->Margin = System::Windows::Forms::Padding(2);
			this->soilTypecomboBox->Name = L"soilTypecomboBox";
			this->soilTypecomboBox->Size = System::Drawing::Size(92, 23);
			this->soilTypecomboBox->TabIndex = 3;
			// 
			// soilTypelabel
			// 
			this->soilTypelabel->AutoSize = true;
			this->soilTypelabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->soilTypelabel->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->soilTypelabel->Location = System::Drawing::Point(186, 23);
			this->soilTypelabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->soilTypelabel->Name = L"soilTypelabel";
			this->soilTypelabel->Size = System::Drawing::Size(57, 15);
			this->soilTypelabel->TabIndex = 2;
			this->soilTypelabel->Text = L"Soil Type";
			// 
			// soilTexturecomboBox
			// 
			this->soilTexturecomboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->soilTexturecomboBox->FormattingEnabled = true;
			this->soilTexturecomboBox->Items->AddRange(gcnew cli::array< System::Object^  >(12) {L"Sandy loam", L"Silty Loam", L"Clay Loam", 
				L"Sandy Clay loam", L"Silty Clay Loam", L"Loam", L"Sand", L"Silt", L"Clay", L"Sandy Clay", L"Silty Clay", L"Loamy Sand"});
			this->soilTexturecomboBox->Location = System::Drawing::Point(82, 16);
			this->soilTexturecomboBox->Margin = System::Windows::Forms::Padding(2);
			this->soilTexturecomboBox->Name = L"soilTexturecomboBox";
			this->soilTexturecomboBox->Size = System::Drawing::Size(92, 23);
			this->soilTexturecomboBox->TabIndex = 1;
			// 
			// soilTexturelabel
			// 
			this->soilTexturelabel->AutoSize = true;
			this->soilTexturelabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->soilTexturelabel->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->soilTexturelabel->Location = System::Drawing::Point(13, 23);
			this->soilTexturelabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->soilTexturelabel->Name = L"soilTexturelabel";
			this->soilTexturelabel->Size = System::Drawing::Size(72, 15);
			this->soilTexturelabel->TabIndex = 0;
			this->soilTexturelabel->Text = L"Soil Texture";
			// 
			// oxygenlabel
			// 
			this->oxygenlabel->AutoSize = true;
			this->oxygenlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->oxygenlabel->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->oxygenlabel->Location = System::Drawing::Point(186, 46);
			this->oxygenlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->oxygenlabel->Name = L"oxygenlabel";
			this->oxygenlabel->Size = System::Drawing::Size(48, 15);
			this->oxygenlabel->TabIndex = 6;
			this->oxygenlabel->Text = L"Oxygen";
			// 
			// animatePlantgroupBox
			// 
			this->animatePlantgroupBox->Controls->Add(this->growthButton);
			this->animatePlantgroupBox->Controls->Add(this->rotatedownbutton);
			this->animatePlantgroupBox->Controls->Add(this->moveforwardbutton);
			this->animatePlantgroupBox->Controls->Add(this->rotateupbutton);
			this->animatePlantgroupBox->Controls->Add(this->movebackbutton);
			this->animatePlantgroupBox->Controls->Add(this->rotaterightbutton);
			this->animatePlantgroupBox->Controls->Add(this->rotateleftbutton);
			this->animatePlantgroupBox->Controls->Add(this->takegenerationbutton);
			this->animatePlantgroupBox->Controls->Add(this->addGenerationbutton);
			this->animatePlantgroupBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->animatePlantgroupBox->Location = System::Drawing::Point(727, 642);
			this->animatePlantgroupBox->Margin = System::Windows::Forms::Padding(2);
			this->animatePlantgroupBox->Name = L"animatePlantgroupBox";
			this->animatePlantgroupBox->Padding = System::Windows::Forms::Padding(2);
			this->animatePlantgroupBox->Size = System::Drawing::Size(523, 169);
			this->animatePlantgroupBox->TabIndex = 4;
			this->animatePlantgroupBox->TabStop = false;
			this->animatePlantgroupBox->Text = L"Animate Plant";
			// 
			// growthButton
			// 
			this->growthButton->Location = System::Drawing::Point(264, 21);
			this->growthButton->Margin = System::Windows::Forms::Padding(2);
			this->growthButton->Name = L"growthButton";
			this->growthButton->Size = System::Drawing::Size(121, 24);
			this->growthButton->TabIndex = 12;
			this->growthButton->Text = L"Make it Grow";
			this->growthButton->UseVisualStyleBackColor = true;
			this->growthButton->Click += gcnew System::EventHandler(this, &Form1::growthButton_Click);
			// 
			// rotatedownbutton
			// 
			this->rotatedownbutton->Location = System::Drawing::Point(137, 77);
			this->rotatedownbutton->Margin = System::Windows::Forms::Padding(2);
			this->rotatedownbutton->Name = L"rotatedownbutton";
			this->rotatedownbutton->Size = System::Drawing::Size(121, 24);
			this->rotatedownbutton->TabIndex = 6;
			this->rotatedownbutton->Text = L"Rotate Down";
			this->rotatedownbutton->UseVisualStyleBackColor = true;
			this->rotatedownbutton->Click += gcnew System::EventHandler(this, &Form1::rotatedownbutton_Click);
			// 
			// moveforwardbutton
			// 
			this->moveforwardbutton->Location = System::Drawing::Point(7, 105);
			this->moveforwardbutton->Margin = System::Windows::Forms::Padding(2);
			this->moveforwardbutton->Name = L"moveforwardbutton";
			this->moveforwardbutton->Size = System::Drawing::Size(121, 24);
			this->moveforwardbutton->TabIndex = 5;
			this->moveforwardbutton->Text = L"Move Forward";
			this->moveforwardbutton->UseVisualStyleBackColor = true;
			this->moveforwardbutton->Click += gcnew System::EventHandler(this, &Form1::moveforwardbutton_Click);
			// 
			// rotateupbutton
			// 
			this->rotateupbutton->Location = System::Drawing::Point(7, 77);
			this->rotateupbutton->Margin = System::Windows::Forms::Padding(2);
			this->rotateupbutton->Name = L"rotateupbutton";
			this->rotateupbutton->Size = System::Drawing::Size(121, 24);
			this->rotateupbutton->TabIndex = 5;
			this->rotateupbutton->Text = L"Rotate Up";
			this->rotateupbutton->UseVisualStyleBackColor = true;
			this->rotateupbutton->Click += gcnew System::EventHandler(this, &Form1::rotateupbutton_Click);
			// 
			// movebackbutton
			// 
			this->movebackbutton->Location = System::Drawing::Point(137, 105);
			this->movebackbutton->Margin = System::Windows::Forms::Padding(2);
			this->movebackbutton->Name = L"movebackbutton";
			this->movebackbutton->Size = System::Drawing::Size(121, 24);
			this->movebackbutton->TabIndex = 4;
			this->movebackbutton->Text = L"Move Back";
			this->movebackbutton->UseVisualStyleBackColor = true;
			this->movebackbutton->Click += gcnew System::EventHandler(this, &Form1::movebackbutton_Click);
			// 
			// rotaterightbutton
			// 
			this->rotaterightbutton->Location = System::Drawing::Point(137, 49);
			this->rotaterightbutton->Margin = System::Windows::Forms::Padding(2);
			this->rotaterightbutton->Name = L"rotaterightbutton";
			this->rotaterightbutton->Size = System::Drawing::Size(121, 24);
			this->rotaterightbutton->TabIndex = 3;
			this->rotaterightbutton->Text = L"Rotate Right";
			this->rotaterightbutton->UseVisualStyleBackColor = true;
			this->rotaterightbutton->Click += gcnew System::EventHandler(this, &Form1::rotaterightbutton_Click);
			// 
			// rotateleftbutton
			// 
			this->rotateleftbutton->Location = System::Drawing::Point(7, 49);
			this->rotateleftbutton->Margin = System::Windows::Forms::Padding(2);
			this->rotateleftbutton->Name = L"rotateleftbutton";
			this->rotateleftbutton->Size = System::Drawing::Size(121, 24);
			this->rotateleftbutton->TabIndex = 2;
			this->rotateleftbutton->Text = L"Rotate Left";
			this->rotateleftbutton->UseVisualStyleBackColor = true;
			this->rotateleftbutton->Click += gcnew System::EventHandler(this, &Form1::rotateleftbutton_Click);
			// 
			// takegenerationbutton
			// 
			this->takegenerationbutton->Location = System::Drawing::Point(137, 21);
			this->takegenerationbutton->Margin = System::Windows::Forms::Padding(2);
			this->takegenerationbutton->Name = L"takegenerationbutton";
			this->takegenerationbutton->Size = System::Drawing::Size(121, 24);
			this->takegenerationbutton->TabIndex = 1;
			this->takegenerationbutton->Text = L"Back a Year";
			this->takegenerationbutton->UseVisualStyleBackColor = true;
			this->takegenerationbutton->Click += gcnew System::EventHandler(this, &Form1::takegenerationbutton_Click);
			// 
			// addGenerationbutton
			// 
			this->addGenerationbutton->Location = System::Drawing::Point(7, 21);
			this->addGenerationbutton->Margin = System::Windows::Forms::Padding(2);
			this->addGenerationbutton->Name = L"addGenerationbutton";
			this->addGenerationbutton->Size = System::Drawing::Size(121, 24);
			this->addGenerationbutton->TabIndex = 0;
			this->addGenerationbutton->Text = L"Forward a Year";
			this->addGenerationbutton->UseVisualStyleBackColor = true;
			this->addGenerationbutton->Click += gcnew System::EventHandler(this, &Form1::addGenerationbutton_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// oleDbSelectCommand1
			// 
			this->oleDbSelectCommand1->CommandText = L"SELECT ScienceNameID, ScienceName, ParentScienceNameID, CategoryID\r\nFROM     Scie" 
				L"nceName\r\nWHERE  (CategoryID = 133) AND (ParentScienceNameID = 1040)\r\nORDER BY Sc" 
				L"ienceName";
			this->oleDbSelectCommand1->Connection = this->oleDbConnection1;
			// 
			// oleDbConnection1
			// 
			this->oleDbConnection1->ConnectionString = L"Provider=Microsoft.Jet.OLEDB.4.0;Data Source=plantsampledb.mdb";
			// 
			// oleDbInsertCommand1
			// 
			this->oleDbInsertCommand1->CommandText = L"INSERT INTO `ScienceName` (`ScienceName`, `ParentScienceNameID`, `CategoryID`) VA" 
				L"LUES (\?, \?, \?)";
			this->oleDbInsertCommand1->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(3) {(gcnew System::Data::OleDb::OleDbParameter(L"ScienceName", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"ScienceName")), (gcnew System::Data::OleDb::OleDbParameter(L"ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, L"ParentScienceNameID")), (gcnew System::Data::OleDb::OleDbParameter(L"CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, L"CategoryID"))});
			// 
			// oleDbUpdateCommand1
			// 
			this->oleDbUpdateCommand1->CommandText = resources->GetString(L"oleDbUpdateCommand1.CommandText");
			this->oleDbUpdateCommand1->Connection = this->oleDbConnection1;
			this->oleDbUpdateCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(10) {(gcnew System::Data::OleDb::OleDbParameter(L"ScienceName", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"ScienceName")), (gcnew System::Data::OleDb::OleDbParameter(L"ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, L"ParentScienceNameID")), (gcnew System::Data::OleDb::OleDbParameter(L"CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, L"CategoryID")), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ScienceNameID", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ScienceName", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"ScienceName", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceName", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ScienceName", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"ParentScienceNameID", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ParentScienceNameID", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"CategoryID", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"CategoryID", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oleDbDeleteCommand1
			// 
			this->oleDbDeleteCommand1->CommandText = resources->GetString(L"oleDbDeleteCommand1.CommandText");
			this->oleDbDeleteCommand1->Connection = this->oleDbConnection1;
			this->oleDbDeleteCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(7) {(gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ScienceNameID", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ScienceName", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"ScienceName", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceName", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ScienceName", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"ParentScienceNameID", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ParentScienceNameID", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"CategoryID", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"CategoryID", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// divisionoleDbDataAdapter
			// 
			this->divisionoleDbDataAdapter->DeleteCommand = this->oleDbDeleteCommand1;
			this->divisionoleDbDataAdapter->InsertCommand = this->oleDbInsertCommand1;
			this->divisionoleDbDataAdapter->SelectCommand = this->oleDbSelectCommand1;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__1 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(4) {(gcnew System::Data::Common::DataColumnMapping(L"ScienceNameID", 
				L"ScienceNameID")), (gcnew System::Data::Common::DataColumnMapping(L"ScienceName", L"ScienceName")), (gcnew System::Data::Common::DataColumnMapping(L"ParentScienceNameID", 
				L"ParentScienceNameID")), (gcnew System::Data::Common::DataColumnMapping(L"CategoryID", L"CategoryID"))};
			this->divisionoleDbDataAdapter->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"ScienceName", __mcTemp__1))});
			this->divisionoleDbDataAdapter->UpdateCommand = this->oleDbUpdateCommand1;
			// 
			// oleDbSelectCommand2
			// 
			this->oleDbSelectCommand2->CommandText = L"SELECT ScienceNameID, CategoryID, ScienceName, ParentScienceNameID\r\nFROM     Scie" 
				L"nceName\r\nWHERE  (CategoryID = 134) AND (ParentScienceNameID = \?)\r\nORDER BY Scien" 
				L"ceName";
			this->oleDbSelectCommand2->Connection = this->oleDbConnection1;
			this->oleDbSelectCommand2->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(1) {(gcnew System::Data::OleDb::OleDbParameter(L"ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 1, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ParentScienceNameID", System::Data::DataRowVersion::Current, L"0"))});
			// 
			// oleDbInsertCommand2
			// 
			this->oleDbInsertCommand2->CommandText = L"INSERT INTO `ScienceName` (`CategoryID`, `ScienceName`, `ParentScienceNameID`) VA" 
				L"LUES (\?, \?, \?)";
			this->oleDbInsertCommand2->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand2->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(3) {(gcnew System::Data::OleDb::OleDbParameter(L"CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, L"CategoryID")), (gcnew System::Data::OleDb::OleDbParameter(L"ScienceName", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"ScienceName")), (gcnew System::Data::OleDb::OleDbParameter(L"ParentScienceNameID", System::Data::OleDb::OleDbType::Integer, 
				0, L"ParentScienceNameID"))});
			// 
			// oleDbUpdateCommand2
			// 
			this->oleDbUpdateCommand2->CommandText = resources->GetString(L"oleDbUpdateCommand2.CommandText");
			this->oleDbUpdateCommand2->Connection = this->oleDbConnection1;
			this->oleDbUpdateCommand2->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(10) {(gcnew System::Data::OleDb::OleDbParameter(L"CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, L"CategoryID")), (gcnew System::Data::OleDb::OleDbParameter(L"ScienceName", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"ScienceName")), (gcnew System::Data::OleDb::OleDbParameter(L"ParentScienceNameID", System::Data::OleDb::OleDbType::Integer, 
				0, L"ParentScienceNameID")), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceNameID", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ScienceNameID", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_CategoryID", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"CategoryID", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_CategoryID", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"CategoryID", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ScienceName", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ScienceName", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceName", System::Data::OleDb::OleDbType::VarWChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ScienceName", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"ParentScienceNameID", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ParentScienceNameID", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oleDbDeleteCommand2
			// 
			this->oleDbDeleteCommand2->CommandText = resources->GetString(L"oleDbDeleteCommand2.CommandText");
			this->oleDbDeleteCommand2->Connection = this->oleDbConnection1;
			this->oleDbDeleteCommand2->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(7) {(gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ScienceNameID", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"CategoryID", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"CategoryID", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ScienceName", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"ScienceName", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceName", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ScienceName", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"ParentScienceNameID", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ParentScienceNameID", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// classoleDbDataAdapter
			// 
			this->classoleDbDataAdapter->DeleteCommand = this->oleDbDeleteCommand2;
			this->classoleDbDataAdapter->InsertCommand = this->oleDbInsertCommand2;
			this->classoleDbDataAdapter->SelectCommand = this->oleDbSelectCommand2;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__2 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(4) {(gcnew System::Data::Common::DataColumnMapping(L"ScienceNameID", 
				L"ScienceNameID")), (gcnew System::Data::Common::DataColumnMapping(L"CategoryID", L"CategoryID")), (gcnew System::Data::Common::DataColumnMapping(L"ScienceName", 
				L"ScienceName")), (gcnew System::Data::Common::DataColumnMapping(L"ParentScienceNameID", L"ParentScienceNameID"))};
			this->classoleDbDataAdapter->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"ScienceName", __mcTemp__2))});
			this->classoleDbDataAdapter->UpdateCommand = this->oleDbUpdateCommand2;
			// 
			// oleDbSelectCommand3
			// 
			this->oleDbSelectCommand3->CommandText = L"SELECT ScienceNameID, CategoryID, ScienceName, ParentScienceNameID\r\nFROM     Scie" 
				L"nceName\r\nWHERE  (ParentScienceNameID = \?) AND (CategoryID = 139)\r\nORDER BY Scien" 
				L"ceNameID";
			this->oleDbSelectCommand3->Connection = this->oleDbConnection1;
			this->oleDbSelectCommand3->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(1) {(gcnew System::Data::OleDb::OleDbParameter(L"ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, L"ParentScienceNameID"))});
			// 
			// oleDbInsertCommand3
			// 
			this->oleDbInsertCommand3->CommandText = L"INSERT INTO `ScienceName` (`CategoryID`, `ScienceName`, `ParentScienceNameID`) VA" 
				L"LUES (\?, \?, \?)";
			this->oleDbInsertCommand3->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand3->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(3) {(gcnew System::Data::OleDb::OleDbParameter(L"CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, L"CategoryID")), (gcnew System::Data::OleDb::OleDbParameter(L"ScienceName", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"ScienceName")), (gcnew System::Data::OleDb::OleDbParameter(L"ParentScienceNameID", System::Data::OleDb::OleDbType::Integer, 
				0, L"ParentScienceNameID"))});
			// 
			// oleDbUpdateCommand3
			// 
			this->oleDbUpdateCommand3->CommandText = resources->GetString(L"oleDbUpdateCommand3.CommandText");
			this->oleDbUpdateCommand3->Connection = this->oleDbConnection1;
			this->oleDbUpdateCommand3->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(10) {(gcnew System::Data::OleDb::OleDbParameter(L"CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, L"CategoryID")), (gcnew System::Data::OleDb::OleDbParameter(L"ScienceName", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"ScienceName")), (gcnew System::Data::OleDb::OleDbParameter(L"ParentScienceNameID", System::Data::OleDb::OleDbType::Integer, 
				0, L"ParentScienceNameID")), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceNameID", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ScienceNameID", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_CategoryID", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"CategoryID", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_CategoryID", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"CategoryID", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ScienceName", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ScienceName", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceName", System::Data::OleDb::OleDbType::VarWChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ScienceName", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"ParentScienceNameID", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ParentScienceNameID", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oleDbDeleteCommand3
			// 
			this->oleDbDeleteCommand3->CommandText = resources->GetString(L"oleDbDeleteCommand3.CommandText");
			this->oleDbDeleteCommand3->Connection = this->oleDbConnection1;
			this->oleDbDeleteCommand3->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(7) {(gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ScienceNameID", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"CategoryID", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"CategoryID", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ScienceName", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"ScienceName", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceName", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ScienceName", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"ParentScienceNameID", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ParentScienceNameID", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// subDivisionoleDbDataAdapter
			// 
			this->subDivisionoleDbDataAdapter->DeleteCommand = this->oleDbDeleteCommand3;
			this->subDivisionoleDbDataAdapter->InsertCommand = this->oleDbInsertCommand3;
			this->subDivisionoleDbDataAdapter->SelectCommand = this->oleDbSelectCommand3;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__3 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(4) {(gcnew System::Data::Common::DataColumnMapping(L"ScienceNameID", 
				L"ScienceNameID")), (gcnew System::Data::Common::DataColumnMapping(L"CategoryID", L"CategoryID")), (gcnew System::Data::Common::DataColumnMapping(L"ScienceName", 
				L"ScienceName")), (gcnew System::Data::Common::DataColumnMapping(L"ParentScienceNameID", L"ParentScienceNameID"))};
			this->subDivisionoleDbDataAdapter->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"ScienceName", __mcTemp__3))});
			this->subDivisionoleDbDataAdapter->UpdateCommand = this->oleDbUpdateCommand3;
			// 
			// oleDbSelectCommand4
			// 
			this->oleDbSelectCommand4->CommandText = L"SELECT ScienceNameID, CategoryID, ScienceName, ParentScienceNameID\r\nFROM     Scie" 
				L"nceName\r\nWHERE  (CategoryID = 140) AND (ParentScienceNameID = \?)\r\nORDER BY Scien" 
				L"ceName";
			this->oleDbSelectCommand4->Connection = this->oleDbConnection1;
			this->oleDbSelectCommand4->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(1) {(gcnew System::Data::OleDb::OleDbParameter(L"ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, L"ParentScienceNameID"))});
			// 
			// oleDbInsertCommand4
			// 
			this->oleDbInsertCommand4->CommandText = L"INSERT INTO `ScienceName` (`CategoryID`, `ScienceName`, `ParentScienceNameID`) VA" 
				L"LUES (\?, \?, \?)";
			this->oleDbInsertCommand4->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand4->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(3) {(gcnew System::Data::OleDb::OleDbParameter(L"CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, L"CategoryID")), (gcnew System::Data::OleDb::OleDbParameter(L"ScienceName", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"ScienceName")), (gcnew System::Data::OleDb::OleDbParameter(L"ParentScienceNameID", System::Data::OleDb::OleDbType::Integer, 
				0, L"ParentScienceNameID"))});
			// 
			// oleDbUpdateCommand4
			// 
			this->oleDbUpdateCommand4->CommandText = resources->GetString(L"oleDbUpdateCommand4.CommandText");
			this->oleDbUpdateCommand4->Connection = this->oleDbConnection1;
			this->oleDbUpdateCommand4->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(10) {(gcnew System::Data::OleDb::OleDbParameter(L"CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, L"CategoryID")), (gcnew System::Data::OleDb::OleDbParameter(L"ScienceName", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"ScienceName")), (gcnew System::Data::OleDb::OleDbParameter(L"ParentScienceNameID", System::Data::OleDb::OleDbType::Integer, 
				0, L"ParentScienceNameID")), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceNameID", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ScienceNameID", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_CategoryID", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"CategoryID", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_CategoryID", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"CategoryID", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ScienceName", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ScienceName", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceName", System::Data::OleDb::OleDbType::VarWChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ScienceName", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"ParentScienceNameID", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ParentScienceNameID", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oleDbDeleteCommand4
			// 
			this->oleDbDeleteCommand4->CommandText = resources->GetString(L"oleDbDeleteCommand4.CommandText");
			this->oleDbDeleteCommand4->Connection = this->oleDbConnection1;
			this->oleDbDeleteCommand4->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(7) {(gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ScienceNameID", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"CategoryID", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"CategoryID", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ScienceName", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"ScienceName", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceName", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ScienceName", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"ParentScienceNameID", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ParentScienceNameID", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// subClassoleDbDataAdapter
			// 
			this->subClassoleDbDataAdapter->DeleteCommand = this->oleDbDeleteCommand4;
			this->subClassoleDbDataAdapter->InsertCommand = this->oleDbInsertCommand4;
			this->subClassoleDbDataAdapter->SelectCommand = this->oleDbSelectCommand4;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__4 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(4) {(gcnew System::Data::Common::DataColumnMapping(L"ScienceNameID", 
				L"ScienceNameID")), (gcnew System::Data::Common::DataColumnMapping(L"CategoryID", L"CategoryID")), (gcnew System::Data::Common::DataColumnMapping(L"ScienceName", 
				L"ScienceName")), (gcnew System::Data::Common::DataColumnMapping(L"ParentScienceNameID", L"ParentScienceNameID"))};
			this->subClassoleDbDataAdapter->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"ScienceName", __mcTemp__4))});
			this->subClassoleDbDataAdapter->UpdateCommand = this->oleDbUpdateCommand4;
			// 
			// oleDbSelectCommand5
			// 
			this->oleDbSelectCommand5->CommandText = L"SELECT ScienceNameID, CategoryID, ScienceName, ParentScienceNameID\r\nFROM     Scie" 
				L"nceName\r\nWHERE  (CategoryID = 135) AND (ParentScienceNameID = \?)\r\nORDER BY Scien" 
				L"ceName";
			this->oleDbSelectCommand5->Connection = this->oleDbConnection1;
			this->oleDbSelectCommand5->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(1) {(gcnew System::Data::OleDb::OleDbParameter(L"ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, L"ParentScienceNameID"))});
			// 
			// oleDbInsertCommand5
			// 
			this->oleDbInsertCommand5->CommandText = L"INSERT INTO `ScienceName` (`CategoryID`, `ScienceName`, `ParentScienceNameID`) VA" 
				L"LUES (\?, \?, \?)";
			this->oleDbInsertCommand5->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand5->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(3) {(gcnew System::Data::OleDb::OleDbParameter(L"CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, L"CategoryID")), (gcnew System::Data::OleDb::OleDbParameter(L"ScienceName", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"ScienceName")), (gcnew System::Data::OleDb::OleDbParameter(L"ParentScienceNameID", System::Data::OleDb::OleDbType::Integer, 
				0, L"ParentScienceNameID"))});
			// 
			// oleDbUpdateCommand5
			// 
			this->oleDbUpdateCommand5->CommandText = resources->GetString(L"oleDbUpdateCommand5.CommandText");
			this->oleDbUpdateCommand5->Connection = this->oleDbConnection1;
			this->oleDbUpdateCommand5->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(10) {(gcnew System::Data::OleDb::OleDbParameter(L"CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, L"CategoryID")), (gcnew System::Data::OleDb::OleDbParameter(L"ScienceName", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"ScienceName")), (gcnew System::Data::OleDb::OleDbParameter(L"ParentScienceNameID", System::Data::OleDb::OleDbType::Integer, 
				0, L"ParentScienceNameID")), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceNameID", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ScienceNameID", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_CategoryID", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"CategoryID", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_CategoryID", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"CategoryID", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ScienceName", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ScienceName", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceName", System::Data::OleDb::OleDbType::VarWChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ScienceName", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"ParentScienceNameID", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ParentScienceNameID", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oleDbDeleteCommand5
			// 
			this->oleDbDeleteCommand5->CommandText = resources->GetString(L"oleDbDeleteCommand5.CommandText");
			this->oleDbDeleteCommand5->Connection = this->oleDbConnection1;
			this->oleDbDeleteCommand5->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(7) {(gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ScienceNameID", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"CategoryID", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"CategoryID", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ScienceName", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"ScienceName", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceName", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ScienceName", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"ParentScienceNameID", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ParentScienceNameID", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// orderoleDbDataAdapter
			// 
			this->orderoleDbDataAdapter->DeleteCommand = this->oleDbDeleteCommand5;
			this->orderoleDbDataAdapter->InsertCommand = this->oleDbInsertCommand5;
			this->orderoleDbDataAdapter->SelectCommand = this->oleDbSelectCommand5;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__5 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(4) {(gcnew System::Data::Common::DataColumnMapping(L"ScienceNameID", 
				L"ScienceNameID")), (gcnew System::Data::Common::DataColumnMapping(L"CategoryID", L"CategoryID")), (gcnew System::Data::Common::DataColumnMapping(L"ScienceName", 
				L"ScienceName")), (gcnew System::Data::Common::DataColumnMapping(L"ParentScienceNameID", L"ParentScienceNameID"))};
			this->orderoleDbDataAdapter->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"ScienceName", __mcTemp__5))});
			this->orderoleDbDataAdapter->UpdateCommand = this->oleDbUpdateCommand5;
			// 
			// oleDbSelectCommand6
			// 
			this->oleDbSelectCommand6->CommandText = L"SELECT ScienceNameID, CategoryID, ScienceName, ParentScienceNameID\r\nFROM     Scie" 
				L"nceName\r\nWHERE  (CategoryID = 141) AND (ParentScienceNameID = \?)\r\nORDER BY Scien" 
				L"ceName";
			this->oleDbSelectCommand6->Connection = this->oleDbConnection1;
			this->oleDbSelectCommand6->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(1) {(gcnew System::Data::OleDb::OleDbParameter(L"ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, L"ParentScienceNameID"))});
			// 
			// oleDbInsertCommand6
			// 
			this->oleDbInsertCommand6->CommandText = L"INSERT INTO `ScienceName` (`CategoryID`, `ScienceName`, `ParentScienceNameID`) VA" 
				L"LUES (\?, \?, \?)";
			this->oleDbInsertCommand6->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand6->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(3) {(gcnew System::Data::OleDb::OleDbParameter(L"CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, L"CategoryID")), (gcnew System::Data::OleDb::OleDbParameter(L"ScienceName", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"ScienceName")), (gcnew System::Data::OleDb::OleDbParameter(L"ParentScienceNameID", System::Data::OleDb::OleDbType::Integer, 
				0, L"ParentScienceNameID"))});
			// 
			// oleDbUpdateCommand6
			// 
			this->oleDbUpdateCommand6->CommandText = resources->GetString(L"oleDbUpdateCommand6.CommandText");
			this->oleDbUpdateCommand6->Connection = this->oleDbConnection1;
			this->oleDbUpdateCommand6->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(10) {(gcnew System::Data::OleDb::OleDbParameter(L"CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, L"CategoryID")), (gcnew System::Data::OleDb::OleDbParameter(L"ScienceName", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"ScienceName")), (gcnew System::Data::OleDb::OleDbParameter(L"ParentScienceNameID", System::Data::OleDb::OleDbType::Integer, 
				0, L"ParentScienceNameID")), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceNameID", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ScienceNameID", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_CategoryID", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"CategoryID", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_CategoryID", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"CategoryID", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ScienceName", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ScienceName", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceName", System::Data::OleDb::OleDbType::VarWChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ScienceName", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"ParentScienceNameID", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ParentScienceNameID", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oleDbDeleteCommand6
			// 
			this->oleDbDeleteCommand6->CommandText = resources->GetString(L"oleDbDeleteCommand6.CommandText");
			this->oleDbDeleteCommand6->Connection = this->oleDbConnection1;
			this->oleDbDeleteCommand6->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(7) {(gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ScienceNameID", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"CategoryID", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"CategoryID", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ScienceName", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"ScienceName", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceName", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ScienceName", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"ParentScienceNameID", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ParentScienceNameID", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// subOrderoleDbDataAdapter
			// 
			this->subOrderoleDbDataAdapter->DeleteCommand = this->oleDbDeleteCommand6;
			this->subOrderoleDbDataAdapter->InsertCommand = this->oleDbInsertCommand6;
			this->subOrderoleDbDataAdapter->SelectCommand = this->oleDbSelectCommand6;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__6 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(4) {(gcnew System::Data::Common::DataColumnMapping(L"ScienceNameID", 
				L"ScienceNameID")), (gcnew System::Data::Common::DataColumnMapping(L"CategoryID", L"CategoryID")), (gcnew System::Data::Common::DataColumnMapping(L"ScienceName", 
				L"ScienceName")), (gcnew System::Data::Common::DataColumnMapping(L"ParentScienceNameID", L"ParentScienceNameID"))};
			this->subOrderoleDbDataAdapter->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"ScienceName", __mcTemp__6))});
			this->subOrderoleDbDataAdapter->UpdateCommand = this->oleDbUpdateCommand6;
			// 
			// oleDbSelectCommand7
			// 
			this->oleDbSelectCommand7->CommandText = L"SELECT ScienceNameID, CategoryID, ScienceName, ParentScienceNameID\r\nFROM     Scie" 
				L"nceName\r\nWHERE  (CategoryID = 136) AND (ParentScienceNameID = \?)\r\nORDER BY Scien" 
				L"ceName";
			this->oleDbSelectCommand7->Connection = this->oleDbConnection1;
			this->oleDbSelectCommand7->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(1) {(gcnew System::Data::OleDb::OleDbParameter(L"ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, L"ParentScienceNameID"))});
			// 
			// oleDbInsertCommand7
			// 
			this->oleDbInsertCommand7->CommandText = L"INSERT INTO `ScienceName` (`CategoryID`, `ScienceName`, `ParentScienceNameID`) VA" 
				L"LUES (\?, \?, \?)";
			this->oleDbInsertCommand7->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand7->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(3) {(gcnew System::Data::OleDb::OleDbParameter(L"CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, L"CategoryID")), (gcnew System::Data::OleDb::OleDbParameter(L"ScienceName", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"ScienceName")), (gcnew System::Data::OleDb::OleDbParameter(L"ParentScienceNameID", System::Data::OleDb::OleDbType::Integer, 
				0, L"ParentScienceNameID"))});
			// 
			// oleDbUpdateCommand7
			// 
			this->oleDbUpdateCommand7->CommandText = resources->GetString(L"oleDbUpdateCommand7.CommandText");
			this->oleDbUpdateCommand7->Connection = this->oleDbConnection1;
			this->oleDbUpdateCommand7->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(10) {(gcnew System::Data::OleDb::OleDbParameter(L"CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, L"CategoryID")), (gcnew System::Data::OleDb::OleDbParameter(L"ScienceName", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"ScienceName")), (gcnew System::Data::OleDb::OleDbParameter(L"ParentScienceNameID", System::Data::OleDb::OleDbType::Integer, 
				0, L"ParentScienceNameID")), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceNameID", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ScienceNameID", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_CategoryID", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"CategoryID", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_CategoryID", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"CategoryID", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ScienceName", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ScienceName", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceName", System::Data::OleDb::OleDbType::VarWChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ScienceName", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"ParentScienceNameID", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ParentScienceNameID", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oleDbDeleteCommand7
			// 
			this->oleDbDeleteCommand7->CommandText = resources->GetString(L"oleDbDeleteCommand7.CommandText");
			this->oleDbDeleteCommand7->Connection = this->oleDbConnection1;
			this->oleDbDeleteCommand7->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(7) {(gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ScienceNameID", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"CategoryID", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"CategoryID", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ScienceName", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"ScienceName", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceName", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ScienceName", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"ParentScienceNameID", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ParentScienceNameID", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// familyoleDbDataAdapter
			// 
			this->familyoleDbDataAdapter->DeleteCommand = this->oleDbDeleteCommand7;
			this->familyoleDbDataAdapter->InsertCommand = this->oleDbInsertCommand7;
			this->familyoleDbDataAdapter->SelectCommand = this->oleDbSelectCommand7;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__7 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(4) {(gcnew System::Data::Common::DataColumnMapping(L"ScienceNameID", 
				L"ScienceNameID")), (gcnew System::Data::Common::DataColumnMapping(L"CategoryID", L"CategoryID")), (gcnew System::Data::Common::DataColumnMapping(L"ScienceName", 
				L"ScienceName")), (gcnew System::Data::Common::DataColumnMapping(L"ParentScienceNameID", L"ParentScienceNameID"))};
			this->familyoleDbDataAdapter->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"ScienceName", __mcTemp__7))});
			this->familyoleDbDataAdapter->UpdateCommand = this->oleDbUpdateCommand7;
			// 
			// oleDbSelectCommand8
			// 
			this->oleDbSelectCommand8->CommandText = L"SELECT ScienceNameID, CategoryID, ScienceName, ParentScienceNameID\r\nFROM     Scie" 
				L"nceName\r\nWHERE  (CategoryID = 142) AND (ParentScienceNameID = \?)\r\nORDER BY Scien" 
				L"ceName";
			this->oleDbSelectCommand8->Connection = this->oleDbConnection1;
			this->oleDbSelectCommand8->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(1) {(gcnew System::Data::OleDb::OleDbParameter(L"ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, L"ParentScienceNameID"))});
			// 
			// oleDbInsertCommand8
			// 
			this->oleDbInsertCommand8->CommandText = L"INSERT INTO `ScienceName` (`CategoryID`, `ScienceName`, `ParentScienceNameID`) VA" 
				L"LUES (\?, \?, \?)";
			this->oleDbInsertCommand8->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand8->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(3) {(gcnew System::Data::OleDb::OleDbParameter(L"CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, L"CategoryID")), (gcnew System::Data::OleDb::OleDbParameter(L"ScienceName", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"ScienceName")), (gcnew System::Data::OleDb::OleDbParameter(L"ParentScienceNameID", System::Data::OleDb::OleDbType::Integer, 
				0, L"ParentScienceNameID"))});
			// 
			// oleDbUpdateCommand8
			// 
			this->oleDbUpdateCommand8->CommandText = resources->GetString(L"oleDbUpdateCommand8.CommandText");
			this->oleDbUpdateCommand8->Connection = this->oleDbConnection1;
			this->oleDbUpdateCommand8->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(10) {(gcnew System::Data::OleDb::OleDbParameter(L"CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, L"CategoryID")), (gcnew System::Data::OleDb::OleDbParameter(L"ScienceName", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"ScienceName")), (gcnew System::Data::OleDb::OleDbParameter(L"ParentScienceNameID", System::Data::OleDb::OleDbType::Integer, 
				0, L"ParentScienceNameID")), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceNameID", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ScienceNameID", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_CategoryID", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"CategoryID", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_CategoryID", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"CategoryID", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ScienceName", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ScienceName", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceName", System::Data::OleDb::OleDbType::VarWChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ScienceName", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"ParentScienceNameID", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ParentScienceNameID", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oleDbDeleteCommand8
			// 
			this->oleDbDeleteCommand8->CommandText = resources->GetString(L"oleDbDeleteCommand8.CommandText");
			this->oleDbDeleteCommand8->Connection = this->oleDbConnection1;
			this->oleDbDeleteCommand8->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(7) {(gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ScienceNameID", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"CategoryID", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"CategoryID", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ScienceName", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"ScienceName", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceName", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ScienceName", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"ParentScienceNameID", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ParentScienceNameID", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// subFamilyoleDbDataAdapter
			// 
			this->subFamilyoleDbDataAdapter->DeleteCommand = this->oleDbDeleteCommand8;
			this->subFamilyoleDbDataAdapter->InsertCommand = this->oleDbInsertCommand8;
			this->subFamilyoleDbDataAdapter->SelectCommand = this->oleDbSelectCommand8;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__8 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(4) {(gcnew System::Data::Common::DataColumnMapping(L"ScienceNameID", 
				L"ScienceNameID")), (gcnew System::Data::Common::DataColumnMapping(L"CategoryID", L"CategoryID")), (gcnew System::Data::Common::DataColumnMapping(L"ScienceName", 
				L"ScienceName")), (gcnew System::Data::Common::DataColumnMapping(L"ParentScienceNameID", L"ParentScienceNameID"))};
			this->subFamilyoleDbDataAdapter->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"ScienceName", __mcTemp__8))});
			this->subFamilyoleDbDataAdapter->UpdateCommand = this->oleDbUpdateCommand8;
			// 
			// oleDbSelectCommand9
			// 
			this->oleDbSelectCommand9->CommandText = L"SELECT ScienceNameID, CategoryID, ScienceName, ParentScienceNameID\r\nFROM     Scie" 
				L"nceName\r\nWHERE  (CategoryID = 137) AND (ParentScienceNameID = \?)\r\nORDER BY Scien" 
				L"ceName";
			this->oleDbSelectCommand9->Connection = this->oleDbConnection1;
			this->oleDbSelectCommand9->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(1) {(gcnew System::Data::OleDb::OleDbParameter(L"ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, L"ParentScienceNameID"))});
			// 
			// oleDbInsertCommand9
			// 
			this->oleDbInsertCommand9->CommandText = L"INSERT INTO `ScienceName` (`CategoryID`, `ScienceName`, `ParentScienceNameID`) VA" 
				L"LUES (\?, \?, \?)";
			this->oleDbInsertCommand9->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand9->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(3) {(gcnew System::Data::OleDb::OleDbParameter(L"CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, L"CategoryID")), (gcnew System::Data::OleDb::OleDbParameter(L"ScienceName", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"ScienceName")), (gcnew System::Data::OleDb::OleDbParameter(L"ParentScienceNameID", System::Data::OleDb::OleDbType::Integer, 
				0, L"ParentScienceNameID"))});
			// 
			// oleDbUpdateCommand9
			// 
			this->oleDbUpdateCommand9->CommandText = resources->GetString(L"oleDbUpdateCommand9.CommandText");
			this->oleDbUpdateCommand9->Connection = this->oleDbConnection1;
			this->oleDbUpdateCommand9->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(10) {(gcnew System::Data::OleDb::OleDbParameter(L"CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, L"CategoryID")), (gcnew System::Data::OleDb::OleDbParameter(L"ScienceName", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"ScienceName")), (gcnew System::Data::OleDb::OleDbParameter(L"ParentScienceNameID", System::Data::OleDb::OleDbType::Integer, 
				0, L"ParentScienceNameID")), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceNameID", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ScienceNameID", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_CategoryID", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"CategoryID", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_CategoryID", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"CategoryID", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ScienceName", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ScienceName", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceName", System::Data::OleDb::OleDbType::VarWChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ScienceName", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"ParentScienceNameID", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ParentScienceNameID", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oleDbDeleteCommand9
			// 
			this->oleDbDeleteCommand9->CommandText = resources->GetString(L"oleDbDeleteCommand9.CommandText");
			this->oleDbDeleteCommand9->Connection = this->oleDbConnection1;
			this->oleDbDeleteCommand9->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(7) {(gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ScienceNameID", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"CategoryID", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"CategoryID", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ScienceName", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"ScienceName", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceName", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ScienceName", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"ParentScienceNameID", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ParentScienceNameID", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// genusoleDbDataAdapter
			// 
			this->genusoleDbDataAdapter->DeleteCommand = this->oleDbDeleteCommand9;
			this->genusoleDbDataAdapter->InsertCommand = this->oleDbInsertCommand9;
			this->genusoleDbDataAdapter->SelectCommand = this->oleDbSelectCommand9;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__9 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(4) {(gcnew System::Data::Common::DataColumnMapping(L"ScienceNameID", 
				L"ScienceNameID")), (gcnew System::Data::Common::DataColumnMapping(L"CategoryID", L"CategoryID")), (gcnew System::Data::Common::DataColumnMapping(L"ScienceName", 
				L"ScienceName")), (gcnew System::Data::Common::DataColumnMapping(L"ParentScienceNameID", L"ParentScienceNameID"))};
			this->genusoleDbDataAdapter->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"ScienceName", __mcTemp__9))});
			this->genusoleDbDataAdapter->UpdateCommand = this->oleDbUpdateCommand9;
			
			// oleDbSelectCommand10
			// 
			this->oleDbSelectCommand10->CommandText = L"SELECT ScienceNameID, CategoryID, ScienceName, ParentScienceNameID\r\nFROM     Scie" 
				L"nceName\r\nWHERE  (CategoryID = 138) AND (ParentScienceNameID = \?)\r\nORDER BY Scien" 
				L"ceName";
			this->oleDbSelectCommand10->Connection = this->oleDbConnection1;
			this->oleDbSelectCommand10->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(1) {(gcnew System::Data::OleDb::OleDbParameter(L"ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, L"ParentScienceNameID"))});
			// 
			// oleDbInsertCommand10
			// 
			this->oleDbInsertCommand10->CommandText = L"INSERT INTO `ScienceName` (`CategoryID`, `ScienceName`, `ParentScienceNameID`) VA" 
				L"LUES (\?, \?, \?)";
			this->oleDbInsertCommand10->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand10->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(3) {(gcnew System::Data::OleDb::OleDbParameter(L"CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, L"CategoryID")), (gcnew System::Data::OleDb::OleDbParameter(L"ScienceName", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"ScienceName")), (gcnew System::Data::OleDb::OleDbParameter(L"ParentScienceNameID", System::Data::OleDb::OleDbType::Integer, 
				0, L"ParentScienceNameID"))});
			// 
			// oleDbUpdateCommand10
			// 
			this->oleDbUpdateCommand10->CommandText = resources->GetString(L"oleDbUpdateCommand10.CommandText");
			this->oleDbUpdateCommand10->Connection = this->oleDbConnection1;
			this->oleDbUpdateCommand10->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(10) {(gcnew System::Data::OleDb::OleDbParameter(L"CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, L"CategoryID")), (gcnew System::Data::OleDb::OleDbParameter(L"ScienceName", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"ScienceName")), (gcnew System::Data::OleDb::OleDbParameter(L"ParentScienceNameID", System::Data::OleDb::OleDbType::Integer, 
				0, L"ParentScienceNameID")), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceNameID", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ScienceNameID", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_CategoryID", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"CategoryID", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_CategoryID", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"CategoryID", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ScienceName", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ScienceName", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceName", System::Data::OleDb::OleDbType::VarWChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ScienceName", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"ParentScienceNameID", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ParentScienceNameID", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oleDbDeleteCommand10
			// 
			this->oleDbDeleteCommand10->CommandText = resources->GetString(L"oleDbDeleteCommand10.CommandText");
			this->oleDbDeleteCommand10->Connection = this->oleDbConnection1;
			this->oleDbDeleteCommand10->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(7) {(gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ScienceNameID", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"CategoryID", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_CategoryID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"CategoryID", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ScienceName", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"ScienceName", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ScienceName", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ScienceName", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"ParentScienceNameID", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ParentScienceNameID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ParentScienceNameID", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// speciesoleDbDataAdapter
			// 
			this->speciesoleDbDataAdapter->DeleteCommand = this->oleDbDeleteCommand10;
			this->speciesoleDbDataAdapter->InsertCommand = this->oleDbInsertCommand10;
			this->speciesoleDbDataAdapter->SelectCommand = this->oleDbSelectCommand10;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__10 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(4) {(gcnew System::Data::Common::DataColumnMapping(L"ScienceNameID", 
				L"ScienceNameID")), (gcnew System::Data::Common::DataColumnMapping(L"CategoryID", L"CategoryID")), (gcnew System::Data::Common::DataColumnMapping(L"ScienceName", 
				L"ScienceName")), (gcnew System::Data::Common::DataColumnMapping(L"ParentScienceNameID", L"ParentScienceNameID"))};
			this->speciesoleDbDataAdapter->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"ScienceName", __mcTemp__10))});
			this->speciesoleDbDataAdapter->UpdateCommand = this->oleDbUpdateCommand10;
			// 
			// PlantGraphicsInformationTableAdapter
			// 
			this->PlantGraphicsInformationTableAdapter->ClearBeforeFill = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1250, 814);
			this->Controls->Add(this->animatePlantgroupBox);
			this->Controls->Add(this->MakeaPlantgroupBox);
			this->Controls->Add(this->pickPlantgroupBox1);
			this->Controls->Add(this->environmentPlantgroupBox);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Form1";
			this->Text = L"Plant Creator";
			this->pickPlantgroupBox1->ResumeLayout(false);
			this->pickPlantgroupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->plantGraphics1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->speciesDataSet1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->genusDataSet1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->subFamilyDataSet1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->familyDataSet1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->subOrderDataSet1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->orderDataSet1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->subClassDataSet1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->classDataSet1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->subDivisionDataSet1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->divisionDataSet1))->EndInit();
			this->MakeaPlantgroupBox->ResumeLayout(false);
			this->fruitSeedgroupBox->ResumeLayout(false);
			this->fruitSeedgroupBox->PerformLayout();
			this->leafPropertiesgroupBox->ResumeLayout(false);
			this->leafPropertiesgroupBox->PerformLayout();
			this->veinPropertiesgroupBox->ResumeLayout(false);
			this->veinPropertiesgroupBox->PerformLayout();
			this->petiolePropertiesgroupBox->ResumeLayout(false);
			this->petiolePropertiesgroupBox->PerformLayout();
			this->stemPropertiesgroupBox->ResumeLayout(false);
			this->stemPropertiesgroupBox->PerformLayout();
			this->environmentPlantgroupBox->ResumeLayout(false);
			this->environmentPlantgroupBox->PerformLayout();
			this->seasonBox->ResumeLayout(false);
			this->seasonBox->PerformLayout();
			this->windgroupBox->ResumeLayout(false);
			this->windgroupBox->PerformLayout();
			this->microgroupBox->ResumeLayout(false);
			this->microgroupBox->PerformLayout();
			this->macrogroupBox->ResumeLayout(false);
			this->macrogroupBox->PerformLayout();
			this->animatePlantgroupBox->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				
				UNREFERENCED_PARAMETER(sender);
				UNREFERENCED_PARAMETER(e);
				OpenGL->Render();
				OpenGL->SwapOpenGLBuffers();
		 }


private: System::Void addGenerationbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			OpenGL->GiveGeneration();

		 }
private: System::Void takegenerationbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 OpenGL->TakeGeneration();
		 }
private: System::Void rotateleftbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			  OpenGL->RotateLeft();
		 }
private: System::Void rotaterightbutton_Click(System::Object^  sender, System::EventArgs^  e) {
				OpenGL->RotateRight();
		 }
private: System::Void movebackbutton_Click(System::Object^  sender, System::EventArgs^  e) {
				OpenGL->RotateBack();

		 }
private: System::Void moveforwardbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 OpenGL->RotateForward();
		 }
private: System::Void rotateupbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 OpenGL->RotateUp();
		 }
private: System::Void rotatedownbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 OpenGL->RotateDown();
		 }
private: System::Void renderMakePlantbutton_Click(System::Object^  sender, System::EventArgs^  e) {
				 //leaf type
			int selectedIndex = LeafShapecomboBox->SelectedIndex;
			Object^ selectedItem = LeafShapecomboBox->SelectedItem;	
			//leaf properties
			float leafLength = float::Parse( numleafLength->Text);			
			float leafRadius = float::Parse( numleafRadius->Text);
			
			//petiole properties
			string petioleString;
			petioleString.resize( txtpetioleLstring->Text->Length);
			for (unsigned int i=0;i<petioleString.length();i++){
					petioleString[i]=txtpetioleLstring->Text[i];
			}	
			float petioleLength = float::Parse( numpetioleLength->Text);
			float petioleRadius = float::Parse( numpetioleRadius->Text);
			//stem properties
			float stemLength = float::Parse( numstemLength->Text);
			float stemRadius = float::Parse( numstemRadius->Text);	
			string stemString;
			stemString.resize( txtstemLstring->Text->Length);
			for (unsigned int i=0;i<stemString.length();i++){
					stemString[i]=txtstemLstring->Text[i];
			}
			//vein properties
			float veinLength = float::Parse( numveinLength->Text);
			float veinRadius = float::Parse( numveinRadius->Text);
			string veinString;
			veinString.resize( txtveinLstring->Text->Length);
			for (unsigned int i=0;i<veinString.length();i++){
					veinString[i]=txtveinLstring->Text[i];
			}
			//nutrient properties
			double nitrogen = double::Parse (nitrogentextBox->Text);
			double hydrogen = double::Parse (hydrogentextBox->Text);
			double potassium = double::Parse (potassiumtextBox->Text);
			double phosphorous = double::Parse (phosphoroustextBox->Text);
			double calcium = double::Parse (calciumtextBox->Text);
			double magnesium = double::Parse (magnesiumtextBox->Text);
			double sulfur = double::Parse (sulfurtextBox->Text);
			double chlorine = double::Parse (chlorinetextBox->Text);
			double boron = double::Parse (borontextBox->Text);
			double iron = double::Parse (irontextBox->Text);
			double manganese = double::Parse (manganesetextBox->Text);
			double zinc = double::Parse (zinctextBox->Text);
			double copper = double::Parse (coppertextBox->Text);
			double sodium = double::Parse (sodiumtextBox->Text);
			double molybdenum = double::Parse (molybdenumtextBox->Text);
			
			double minnitrogen = double::Parse (nitrogenmintextBox->Text);
			double minhydrogen = double::Parse (hydrogenmintextBox->Text);
			double minpotassium = double::Parse (potassiummintextBox->Text);
			double minphosphorous = double::Parse (phosphorousmintextBox->Text);
			double mincalcium = double::Parse (calciumMintextBox->Text);
			double minmagnesium = double::Parse (magnesiummintextBox->Text);
			double minsulfur = double::Parse (sulfurmintextBox->Text);
			double minchlorine = double::Parse (chlorinemintextBox->Text);
			double minboron = double::Parse (boronmintextBox->Text);
			double miniron = double::Parse (ironmintextBox->Text);
			double minmanganese = double::Parse (manganesemintextBox->Text);
			double minzinc = double::Parse (zincmintextBox->Text);
			double mincopper = double::Parse (coppermintextBox->Text);
			double minsodium = double::Parse (sodiummintextBox->Text);
			double minmolybdenum = double::Parse (molybdenummintextBox->Text);

			double optnitrogen = double::Parse (nitrogenopttextBox->Text);
			double opthydrogen = double::Parse (hydrogenopttextBox->Text);
			double optpotassium = double::Parse (potassiumopttextBox->Text);
			double optphosphorous = double::Parse (phosphorousopttextBox->Text);
			double optcalcium = double::Parse (calciumopttextBox->Text);
			double optmagnesium = double::Parse (magnesiumopttextBox->Text);
			double optsulfur = double::Parse (sulfuropttextBox->Text);
			double optchlorine = double::Parse (chlorineopttextBox->Text);
			double optboron = double::Parse (boronopttextBox->Text);
			double optiron = double::Parse (ironopttextBox->Text);
			double optmanganese = double::Parse (manganeseopttextBox->Text);
			double optzinc = double::Parse (zincopttextBox->Text);
			double optcopper = double::Parse (copperopttextBox->Text);
			double optsodium = double::Parse (sodiumopttextBox->Text);
			double optmolybdenum = double::Parse (molybdenumopttextBox->Text);

			double toxnitrogen = double::Parse (nitrogentoxtextBox->Text);
			double toxhydrogen = double::Parse (hydrogentoxtextBox->Text);
			double toxpotassium = double::Parse (potassiumtoxtextBox->Text);
			double toxphosphorous = double::Parse (phosphoroustoxtextBox->Text);
			double toxcalcium = double::Parse (calciumtoxtextBox->Text);
			double toxmagnesium = double::Parse (magnesiumtoxtextBox->Text);
			double toxsulfur = double::Parse (sulfurtoxtextBox->Text);
			double toxchlorine = double::Parse (chlorinetoxtextBox->Text);
			double toxboron = double::Parse (borontoxtextBox->Text);
			double toxiron = double::Parse (irontoxtextBox->Text);
			double toxmanganese = double::Parse (manganesetoxtextBox->Text);
			double toxzinc = double::Parse (zinctoxtextBox->Text);
			double toxcopper = double::Parse (coppertoxtextBox->Text);
			double toxsodium = double::Parse (sodiumtoxtextBox->Text);
			double toxmolybdenum = double::Parse (molybdenumtoxtextBox->Text);

			UNREFERENCED_PARAMETER(sender);
			UNREFERENCED_PARAMETER(e);
			OpenGL->ChangePlant(selectedIndex,leafLength,leafRadius,petioleLength
				,petioleRadius,petioleString,stemLength,stemRadius,stemString
				,veinLength,veinRadius,veinString, nitrogen, hydrogen, potassium
				,phosphorous, calcium, magnesium, sulfur, chlorine, boron, iron
				,manganese, zinc, copper, sodium, molybdenum,minnitrogen, minhydrogen, minpotassium
				,minphosphorous, mincalcium, minmagnesium, minsulfur, minchlorine, minboron, miniron
				,minmanganese, minzinc, mincopper, minsodium, minmolybdenum, optnitrogen, opthydrogen, optpotassium
				,optphosphorous, optcalcium, optmagnesium, optsulfur, optchlorine, optboron, optiron
				,optmanganese, optzinc, optcopper, optsodium, optmolybdenum,toxnitrogen, toxhydrogen, toxpotassium
				,toxphosphorous, toxcalcium, toxmagnesium, toxsulfur, toxchlorine, toxboron, toxiron
				,toxmanganese, toxzinc, toxcopper, toxsodium, toxmolybdenum,  false);

		 }
private: System::Void onoffbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			if (windon){ windon=false;}
			 else{ 
				// float windstrength=		 
				windon=true;}
			 float windstrength = float::Parse(txtwindStrength->Text);
			 float winddirectionx =float::Parse( txtwinddirectionx->Text);
			 float winddirectiony = float::Parse(txtwinddirectiony->Text);
			 float winddirectionz = float::Parse(txtwinddirectionz->Text);
			 OpenGL->wind(windon,windstrength,winddirectionx,winddirectiony,winddirectionz);

		 }


private: System::Void defaultbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 txtwindStrength->Text = "10";
			 txtwinddirectionx->Text="1";
			 txtwinddirectiony->Text="0";
			 txtwinddirectionz->Text="0";	
			 LeafShapecomboBox->Text="Chordate";
			 numleafRadius->Text = "00050";
			 numleafLength->Text="00.10";
			 txtveinLstring->Text="RA[-F+F]F[+F-F]F[-F+F]";
			 numveinLength->Text="00010000";
			 numveinRadius->Text="0000625";
			 txtpetioleLstring->Text="[+RFLUSV][-RFLUSV][^RFLUSV][&RFLUSV]";
			 numpetioleLength->Text="00.50";
			 numpetioleRadius->Text="00.025";
			 txtstemLstring->Text="FBB[-/RFBP][+/RFBP]\\\\RFBP";
			 numstemLength->Text = "00001.00";
			 numstemRadius->Text = "00000.10";
			 nitrogentextBox->Text="1.0";
			 hydrogentextBox->Text="0.06";
			 potassiumtextBox->Text="0.0307143";
			 phosphoroustextBox->Text="0.067143";
			 calciumtextBox->Text="0.071429";
			 magnesiumtextBox->Text="0.057143";
			 sulfurtextBox->Text="0.02980";
			 chlorinetextBox->Text="0.225357";
			 borontextBox->Text="0.002571";
			 irontextBox->Text="0.001786";
			 manganesetextBox->Text="0.001043";
			 zinctextBox->Text="0.000129";
			 coppertextBox->Text="0.000057";
			 sodiumtextBox->Text="0.000020";
			 molybdenumtextBox->Text="0.000010";
			 windon=false;		
			
		 }
private: System::Void divisioncomboBox_DropDown(System::Object^  sender, System::EventArgs^  e) {
			 divisionDataSet1->Clear();
			 divisionoleDbDataAdapter->Fill(divisionDataSet1);
		 }
private: System::Void subDivisioncomboBox_DropDown(System::Object^  sender, System::EventArgs^  e) {
			int sValue = Convert::ToInt32(divisioncomboBox->SelectedValue->ToString());			
			subDivisionoleDbDataAdapter->SelectCommand->Parameters->default["ParentScienceNameID"]->Value = sValue;
			subDivisionDataSet1->Clear();
			subDivisionoleDbDataAdapter->Fill(subDivisionDataSet1);		 
		 }
private: System::Void classcomboBox_DropDown(System::Object^  sender, System::EventArgs^  e) {
			 int sValue = Convert::ToInt32(divisioncomboBox->SelectedValue->ToString());
			 int sIndex = Convert::ToInt32(subDivisioncomboBox->SelectedIndex);
			 if (sIndex< 0 ){}
			 else{
			       sValue = Convert::ToInt32(subDivisioncomboBox->SelectedValue->ToString());
				}
			 classoleDbDataAdapter->SelectCommand->Parameters->default["ParentScienceNameID"]->Value = sValue;
			 classDataSet1->Clear();
			 classoleDbDataAdapter->Fill(classDataSet1);
		 }
private: System::Void subClasscomboBox_DropDown(System::Object^  sender, System::EventArgs^  e) {
			int sValue = Convert::ToInt32(classcomboBox->SelectedValue->ToString());
			subClassoleDbDataAdapter->SelectCommand->Parameters->default["ParentScienceNameID"]->Value = sValue;
			subClassDataSet1->Clear();
			subClassoleDbDataAdapter->Fill(subClassDataSet1);
		 }
private: System::Void ordercomboBox_DropDown(System::Object^  sender, System::EventArgs^  e) {
			int sValue = Convert::ToInt32(classcomboBox->SelectedValue->ToString());
			int sIndex = Convert::ToInt32(subClasscomboBox->SelectedIndex);
			 if (sIndex.Equals(-1)){}
			 else{
			       sValue = Convert::ToInt32(subClasscomboBox->SelectedValue->ToString());
				}
			 orderoleDbDataAdapter->SelectCommand->Parameters->default["ParentScienceNameID"]->Value = sValue;
			 orderDataSet1->Clear();
			 orderoleDbDataAdapter->Fill(orderDataSet1);
		 }
private: System::Void subOrdercomboBox_DropDown(System::Object^  sender, System::EventArgs^  e) {
			int sValue = Convert::ToInt32(ordercomboBox->SelectedValue->ToString());
			subOrderoleDbDataAdapter->SelectCommand->Parameters->default["ParentScienceNameID"]->Value = sValue;
			subOrderDataSet1->Clear();
			subOrderoleDbDataAdapter->Fill(subOrderDataSet1);
		 }
private: System::Void familycomboBox_DropDown(System::Object^  sender, System::EventArgs^  e) {
			int sValue = Convert::ToInt32(ordercomboBox->SelectedValue->ToString());
			int sIndex = Convert::ToInt32(subOrdercomboBox->SelectedIndex);
			if (sIndex.Equals(-1)){}
			else{
			      sValue = Convert::ToInt32(subOrdercomboBox->SelectedValue->ToString());
			}
			familyoleDbDataAdapter->SelectCommand->Parameters->default["ParentScienceNameID"]->Value = sValue;
			familyDataSet1->Clear();
			familyoleDbDataAdapter->Fill(familyDataSet1);
		 }
private: System::Void subFamilycomboBox_DropDown(System::Object^  sender, System::EventArgs^  e) {
			int sValue = Convert::ToInt32(familycomboBox->SelectedValue->ToString());
			subFamilyoleDbDataAdapter->SelectCommand->Parameters->default["ParentScienceNameID"]->Value = sValue;
			subFamilyDataSet1->Clear();
			subFamilyoleDbDataAdapter->Fill(subFamilyDataSet1);
		 }
private: System::Void genuscomboBox_DropDown(System::Object^  sender, System::EventArgs^  e) {
			int sValue = Convert::ToInt32(familycomboBox->SelectedValue->ToString());
			int sIndex = Convert::ToInt32(subFamilycomboBox->SelectedIndex);
			if (sIndex < 0){}
			else{
			      sValue = Convert::ToInt32(subFamilycomboBox->SelectedValue->ToString());
			}
			genusoleDbDataAdapter->SelectCommand->Parameters->default["ParentScienceNameID"]->Value = sValue;
			genusDataSet1->Clear();
			genusoleDbDataAdapter->Fill(genusDataSet1);
		 }
private: System::Void speciescomboBox_DropDown(System::Object^  sender, System::EventArgs^  e) {
			int sValue = Convert::ToInt32(genuscomboBox->SelectedValue->ToString());
			speciesoleDbDataAdapter->SelectCommand->Parameters->default["ParentScienceNameID"]->Value = sValue;
			speciesDataSet1->Clear();
			speciesoleDbDataAdapter->Fill(speciesDataSet1);
		 }

private: System::Void seasonButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 float yeartime=0;
			 if (season){ season=false;}
			 else{ season=true;}
			int selectedIndex = seasoncomboBox->SelectedIndex;
			if (selectedIndex = 0){yeartime = 0;}
			else if (selectedIndex = 1) {yeartime=91.3125*6;}
			else if (selectedIndex = 2) {yeartime=(91.3125*6*2)+1;}
			else {yeartime= (91.3125*6*3)+1;}
			OpenGL->seasoner(season,yeartime);
		 }
private: System::Void growthButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (season){ season=false;}
			 else{ season=true;}
			 if (growon){ growon = false;}
			 else{ growon = true;}
			 OpenGL->growing(growon,season);
		 }
private: System::Void NewPlantClick(System::Object^  sender, System::EventArgs^  e) {
			//send to the database table (species instance) as a new row			
			 
					PlantGraphicsInformationTableAdapter->Insert(

					speciescomboBox->Text,txtstemLstring->Text,txtpetioleLstring->Text,int(LeafShapecomboBox->SelectedIndex),
					double::Parse( numstemLength->Text),	double::Parse( numstemRadius->Text),
					double::Parse( numstemRadius->Text),	double::Parse( numpetioleLength->Text),
					double::Parse( numpetioleRadius->Text),	double::Parse( numpetioleRadius->Text),
					double::Parse( numveinLength->Text),	double::Parse( numveinRadius->Text),
					double::Parse( numveinRadius->Text),	txtveinLstring->Text,35.0, 40.0, 50.0 ,
					double::Parse (nitrogentextBox->Text),	double::Parse (hydrogentextBox->Text),
					double::Parse (potassiumtextBox->Text),	double::Parse (phosphoroustextBox->Text),
					double::Parse (calciumtextBox->Text),	double::Parse (magnesiumtextBox->Text),
					double::Parse (sulfurtextBox->Text),	double::Parse (chlorinetextBox->Text) ,
					double::Parse (borontextBox->Text),		double::Parse (irontextBox->Text),
					double::Parse (manganesetextBox->Text),	double::Parse (zinctextBox->Text) ,
					double::Parse (coppertextBox->Text),	double::Parse (sodiumtextBox->Text),
					double::Parse (molybdenumtextBox->Text)	
					
					,Convert::ToString(divisioncomboBox->SelectedValue)
					//, divisioncomboBox->Text
					, subDivisioncomboBox->Text
					, classcomboBox->Text,		subClasscomboBox->Text		
					, ordercomboBox->Text,		subOrdercomboBox->Text			
					, familycomboBox->Text,		subFamilycomboBox->Text		
					, genuscomboBox->Text,		"TESTSUBGENUS"
					, speciescomboBox->Text,	"ARRGH"
					,float::Parse( numleafLength->Text),	float::Parse( numleafRadius->Text)
					,1,2);
					
			// done inserting record
			UNREFERENCED_PARAMETER(sender);
			UNREFERENCED_PARAMETER(e);
			     

		 }

private: System::Void PlantInstancecomboBox_DropDown(System::Object^  sender, System::EventArgs^  e) {
			 plantGraphics1->Clear();
			 PlantGraphicsInformationTableAdapter->Fill(plantGraphics1->PlantGraphicsInformation);
			 
			//PlantGraphics->Fill(plantGraphics1);
			 		 
		 }		 
private: System::Void PlantGraphicsToolStripButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 try {
				 this->PlantGraphicsInformationTableAdapter->PlantGraphics(this->plantGraphics1->PlantGraphicsInformation);
			 }
			 catch (System::Exception^ ex) {
				 System::Windows::Forms::MessageBox::Show(ex->Message);
			 }
		 }
private: System::Void plantGraphicscomboBox_Click(System::Object^  sender, System::EventArgs^  e) {
			 int sValue = Convert::ToInt32(plantGraphicscomboBox->SelectedValue->ToString());

			 txtstemLstring->Text = PlantGraphicsInformationTableAdapter->ScalarQueryStemLsystem(sValue);
			 double leng=	 Convert::ToDouble( PlantGraphicsInformationTableAdapter->ScalarQueryStemLength(sValue));
			 numstemLength->Text = leng.ToString("00000.00");
			 double radi = Convert::ToDouble(PlantGraphicsInformationTableAdapter->ScalarQueryStemRadius(sValue));
			 numstemRadius->Text =	radi.ToString("00000.00");
			  
			 txtpetioleLstring->Text=PlantGraphicsInformationTableAdapter->ScalarQueryPetioleLsystem(sValue);
			 double petleng = Convert::ToDouble( PlantGraphicsInformationTableAdapter->ScalarQueryPetioleLength(sValue));
			 numpetioleLength->Text = petleng.ToString("00.00000");
			 double petrad = Convert::ToDouble( PlantGraphicsInformationTableAdapter->ScalarQueryPetioleRadius(sValue));
			 numpetioleRadius->Text = petrad.ToString("00.00000");
					
			 txtveinLstring->Text=PlantGraphicsInformationTableAdapter->ScalarQueryVeinLsystem(sValue);
			 double veinleng = Convert::ToDouble( PlantGraphicsInformationTableAdapter->ScalarQueryVeinLength(sValue));
			 numveinLength->Text = veinleng.ToString("00.00000");
			 double veinrad = Convert::ToDouble( PlantGraphicsInformationTableAdapter->ScalarQueryVeinRadius(sValue));
			 numveinRadius->Text = veinrad.ToString("00.00000");

			 nitrogentextBox->Text=Convert::ToString( PlantGraphicsInformationTableAdapter->ScalarQueryNitrogen(sValue));
			 hydrogentextBox->Text=Convert::ToString( PlantGraphicsInformationTableAdapter->ScalarQueryHydrogen(sValue));
			 potassiumtextBox->Text=Convert::ToString( PlantGraphicsInformationTableAdapter->ScalarQueryPotassium(sValue));
			 phosphoroustextBox->Text=Convert::ToString( PlantGraphicsInformationTableAdapter->ScalarQueryPhosphorous(sValue));
			 calciumtextBox->Text=Convert::ToString( PlantGraphicsInformationTableAdapter->ScalarQueryCalcium(sValue));
			 magnesiumtextBox->Text=Convert::ToString( PlantGraphicsInformationTableAdapter->ScalarQueryMagnesium(sValue));
			 sulfurtextBox->Text=Convert::ToString( PlantGraphicsInformationTableAdapter->ScalarQuerySulfur(sValue));
			 chlorinetextBox->Text=Convert::ToString( PlantGraphicsInformationTableAdapter->ScalarQueryChlorine(sValue));
			 borontextBox->Text=Convert::ToString( PlantGraphicsInformationTableAdapter->ScalarQueryBoron(sValue));
			 irontextBox->Text=Convert::ToString( PlantGraphicsInformationTableAdapter->ScalarQueryIron(sValue));
			 manganesetextBox->Text=Convert::ToString( PlantGraphicsInformationTableAdapter->ScalarQueryManganese(sValue));
			 zinctextBox->Text=Convert::ToString( PlantGraphicsInformationTableAdapter->ScalarQueryZinc(sValue));
			 coppertextBox->Text=Convert::ToString( PlantGraphicsInformationTableAdapter->ScalarQueryCopper(sValue));
			 sodiumtextBox->Text=Convert::ToString( PlantGraphicsInformationTableAdapter->ScalarQuerySodium(sValue));
			 molybdenumtextBox->Text=Convert::ToString( PlantGraphicsInformationTableAdapter->ScalarQueryMolybdenum(sValue));
			// divisioncomboBox->SelectedValue =(PlantGraphicsInformationTableAdapter->ScalarQueryDivision(sValue));
			 //DivisionoleDbDataAdapter->SelectCommand->Parameters->default["ScienceNameID"]->Value = Convert::ToInt32(PlantGraphicsInformationTableAdapter->ScalarQueryDivision(sValue));
			 //DivisionDataSet1->Clear();
			 //DivisionoleDbDataAdapter->Fill(DivisionDataSet1);	
		
		    
			 LeafShapecomboBox->SelectedValue = (PlantGraphicsInformationTableAdapter->ScalarQueryLeafType(sValue));
			 LeafShapecomboBox->DisplayMember;	
			 double leafrad = Convert::ToDouble( PlantGraphicsInformationTableAdapter->ScalarQueryLeafRadius(sValue));
			 numleafRadius->Text = leafrad.ToString("00.00000");
			 double leaflen = Convert::ToDouble( PlantGraphicsInformationTableAdapter->ScalarQueryLeafLength(sValue));
			 numleafLength->Text = leaflen.ToString("00.00000");	
			 	
		 }
private: System::Void Wheat_button_Click(System::Object^  sender, System::EventArgs^  e) {

			 if (wheat){ wheat=false;}
			 else{ wheat=true;}
			 if(wheat){
				 growon=true;
				 txtstemLstring->Text="{F[+P1]FR[&P2]F[+P3]F[&P4]F[+P5]RF%P6LS}";
				 txtpetioleLstring->Text="R[-V]";
				 txtveinLstring->Text="RA";
				 numstemLength->Text = "00000.10";
				}
			 else{
				 growon=false;
				 txtstemLstring->Text="{FBB[-/RFBP][+/RFBP]\\RFBP}";
				 txtpetioleLstring->Text="[+RFLUSV][-RFLUSV][^RFLUSV][&RFLUSV]";
				 txtveinLstring->Text="RA[-F+F]F[+F-F]F[-F+F]";
				 numstemLength->Text = "00001.00";
			 }

		 }
};

}