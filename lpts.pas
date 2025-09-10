program command;
{$mode objfpc}{$H+}{$J-}
uses
  Process;

var
  
  textFile: System.TextFile;

begin
  writeln(#27'[43;30m', ParamStr(1));

  AssignFile(textFile, 'lpt');
  ReWrite(textFile);
  WriteLn(textFile,ParamStr(1));
  CloseFile(textFile);
  
    
  
end.
