//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AddButtonClick(TObject *Sender)
{
			 String taskText=TaskEdit->Text;

               if(taskText!="")
			 {
			 TaskListBox->Items->Add(taskText);
			 TaskEdit->Text="";
             }

}
//---------------------------------------------------------------------------
void __fastcall TForm1::TaskListBoxItemClick(TCustomListBox * const Sender, TListBoxItem * const Item)

{
	   int index=Item->Index;
	   TaskListBox->Items->Delete(index);
}
//---------------------------------------------------------------------------
