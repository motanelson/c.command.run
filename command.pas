uses sysutils;

begin
    writeln(chr(27)+'[43;30m]'+ParamStr(1));
    executeprocess('/bin/curl',['www.google.com/', ParamStr(1)]);
end.