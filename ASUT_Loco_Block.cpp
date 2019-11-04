//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ASUT_Loco_Block.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ConnectBtnClick(TObject *Sender)
{

	if (ASUTConnection -> Connected ) {
		ASUTDataSet -> Refresh();
	} else {
	ASUTConnection -> Connected = 1;
	ASUTDataSet -> Close();
	ASUTDataSet -> Params -> Clear();
	ASUTDataSet -> CommandText = "DISLOC_QUERY.SELECT_DISLOC_QUERY";
	ASUTDataSet -> Params -> CreateParam(ftString, "SQL_TEXT", ptInput) -> AsString = "select *  from v_loc_disl_sai  where   LastStancSovOp in (32415)";
	ASUTDataSet -> Params -> CreateParam(ftCursor, "CURSOR_", ptInputOutput);
	ASUTDataSet -> Open();
	DBDataGrid -> Visible = 1;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::RefreshBtnClick(TObject *Sender)
{
	if (ASUTConnection -> Connected ) {
		ASUTDataSet -> Refresh();
	} else {

	}
}
//---------------------------------------------------------------------------
