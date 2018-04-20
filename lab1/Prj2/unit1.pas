unit Unit1;

interface

uses
  Classes, SysUtils, FileUtil, Forms, Controls, Graphics, Dialogs, ExtCtrls,
  StdCtrls, math;

type

  { TForm1 }

  TForm1 = class(TForm)
    Button1: TButton;
    EditX: TEdit;
    EditY: TEdit;
    EditZ: TEdit;
    Image1: TImage;
    LabelResult: TLabel;
    Label2: TLabel;
    Label3: TLabel;
    Label4: TLabel;
    Memo1: TMemo;
    procedure Button1Click(Sender: TObject);
  private
    { private declarations }
  public
    { public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.lfm}

{ TForm1 }

function IsNumber(const s: String): boolean;
var i, len: Integer;
  begin
    len := Length(s);
    if len > 0 then
      begin
      Result := True;
      for i := 1 to len do
        if not (s[i] in ['0'..'9']) then begin
          Result := False;
          break;
        end;
      end
      else
        Result := False;
  end;

procedure TForm1.Button1Click(Sender: TObject);
var
  x, y, z, result: float;
  codeX, codeY, codeZ:integer;
begin
  Val(EditX.Text, x, codeX);
  Val(EditY.Text, y, codeY);
  Val(EditZ.Text, z, codeZ);
  if codeX <> 0 then LabelResult.Caption:= 'Помилка у змінній Х '
  else
      if abs(x)>140 then LabelResult.Caption := 'Дуже велике число'
      else
  if codeY <> 0 then LabelResult.Caption:= 'Помилка у змінній Y '
  else
       if abs(y)>140 then LabelResult.Caption := 'Дуже велике число'
      else
  if codeZ <> 0 then LabelResult.Caption:= 'Помилка у змінній Z '
  else
        if abs(z)>140 then LabelResult.Caption := 'Дуже велике число'
      else
  begin
  result := sqrt(abs(y + 0.5*z)) + y + Pi * cos(Power(y, abs(x)));
  LabelResult.Caption:= 'Q= ' + FloatToStr(result);
  end;
end;

end.

