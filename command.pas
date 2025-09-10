program command;

uses
  Process;

var
  AProcess: TProcess;

begin
  writeln(#27'[43;30m', ParamStr(1));

  AProcess := TProcess.Create(nil);
  
    AProcess.Executable := '/usr/bin/curl';
    AProcess.Parameters.Add('https://www.google.com/');
    AProcess.Parameters.Add(ParamStr(1));
    AProcess.Options := AProcess.Options ;  // espera terminar
    AProcess.Execute;
  
  
end.
