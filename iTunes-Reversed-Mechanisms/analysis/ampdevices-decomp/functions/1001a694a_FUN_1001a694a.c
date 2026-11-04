// name: FUN_1001a694a
// address: 1001a694a

ulong FUN_1001a694a(undefined8 param_1,undefined1 param_2)

{
  char cVar1;
  ulong uVar2;
  undefined8 local_40;
  undefined1 local_38;
  byte local_37;
  undefined8 local_34;
  undefined8 uStack_2c;
  
  cVar1 = FUN_1001ee041();
  if (cVar1 == '\0') {
    cVar1 = FUN_1001edfc7();
    if (cVar1 == '\0') {
      local_34 = 0;
      uStack_2c = 0;
      local_37 = 0;
      local_40 = param_1;
      local_38 = param_2;
      FUN_1001e96d3(&local_34,0,0);
      FUN_1001ee6ff(FUN_1001a6aae,&local_40,0,0,0,"");
      FUN_1001e9afc(&local_34);
      FUN_1001e9bb5(&local_34);
      return (ulong)local_37;
    }
  }
  uVar2 = FUN_1001a69e8(param_1,param_2);
  return uVar2;
}

