//---------------------------------------------------------------------------

#ifndef ASUT_Loco_BlockH
#define ASUT_Loco_BlockH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.DBXCommon.hpp>
#include <Data.DBXDataSnap.hpp>
#include <Data.SqlExpr.hpp>
#include <IPPeerClient.hpp>
#include <Datasnap.DBClient.hpp>
#include <Datasnap.Win.MConnect.hpp>
#include <Datasnap.Win.SConnect.hpp>
#include <Datasnap.Win.ObjBrkr.hpp>
#include <Datasnap.Provider.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TSocketConnection *ASUTConnection;
	TSimpleObjectBroker *ListOfServers;
	TClientDataSet *ASUTDataSet;
	TDataSetProvider *ASUTDataSetProvider;
	TDataSource *GetedData;
	TDBGrid *DBDataGrid;
	TButton *ConnectBtn;
	TButton *RefreshBtn;
	void __fastcall ConnectBtnClick(TObject *Sender);
	void __fastcall RefreshBtnClick(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
