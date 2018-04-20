unit Unit1;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, FileUtil, Forms, Controls, Graphics, Dialogs, StdCtrls,
  ExtCtrls;

type

  { TForm1 }

  TForm1 = class(TForm)
    Button1: TButton;
    Button2: TButton;
    Button3: TButton;
    Edit1: TEdit;
    Image1: TImage;
    Label1: TLabel;
    Memo1: TMemo;
    procedure Button1Click(Sender: TObject);
    procedure Button2Click(Sender: TObject);
    procedure Button3Click(Sender: TObject);
    procedure Button4Click(Sender: TObject);
    procedure Edit1Change(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure Memo1Change(Sender: TObject);
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

procedure TForm1.Button1Click(Sender: TObject);
  const symbolRandom: array [1..161] of string = ('!','"','#','$','%','&','''','(', ')','*','+',',','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?',
                                        '@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']',
                                        '^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{',
                                        '|','}','~','ј','Ѕ','ѕ','ї','А','Б','В','Г','Д','Е','Ж','З','И','Й','К','Л','М','Н','О','П','Р','С','Т','У','Ф','Х','Ц',
                                        'Ч','Ш','Щ','Ъ','Ы','Ь','Э','Ю','Я','а','б','в','г','д','е','ж','з','и','й','к','л','м','н','о','п','р','с','т','у','ф',
                                        'х','ц','ч','ш','щ','ъ','ы','ь','э','ю','я');
  begin
  if (Edit1.Text = '')or(Edit1.Text = 'Помилка ! немає символу')
  then label1.Caption := 'Помилка ! немає символу'
  else
  begin
    randomize;
    label1.Caption := (symbolRandom[random(160)+1]);
  end;
end;

procedure TForm1.Button2Click(Sender: TObject);
  var d:TDateTime;
      h,m: string;
  begin
  if (Edit1.Text = '')or(Edit1.Text = 'Помилка ! немає символу')or(Edit1.Text = ' ')
  then label1.Caption := 'Помилка ! немає символу'
  else
  begin
    d := time;
    h := copy(TimeToStr(d), 1, 2);
    m := copy(TimeToStr(d), 4, 2);
    label1.Caption:= h + ' год. ' + m + ' хв. ';
  end;
end;

procedure TForm1.Button3Click(Sender: TObject);
  const
    s:string = 'коли навколо ні душі,коли моя не може спати,чомусь так хочеться'+
               'менідля тебе пісню заспівати... і най чекає цілий світ!не забере'+
               'мене від тебе ані їх колючий дріт,ні синє небо,ані чужий терновий цвіт...';
  var
      ch, ich:string;
      i, count: integer;
  begin
    if (Edit1.Text = '')or(Edit1.Text = 'Помилка ! немає символу')or(Edit1.Text = ' ')
  then label1.Caption := 'Помилка ! немає символу'
  else
  begin
    ch := LowerCase(Edit1.Text);
    count := 0;
    for i:= 1 to s.Length do
    begin
      ich := Copy(s, i, 2);
      if Pos(ch, ich) <> 0 then count := count + 1;
    end;
    label1.Caption:= IntToStr(count);
  end;
end;

procedure TForm1.Button4Click(Sender: TObject);
begin

end;

procedure TForm1.Edit1Change(Sender: TObject);
begin

end;

procedure TForm1.FormCreate(Sender: TObject);
begin

end;

procedure TForm1.Memo1Change(Sender: TObject);
begin

end;

end.

