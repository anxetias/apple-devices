// name: FUN_100174a21
// address: 100174a21

undefined8 FUN_100174a21(undefined8 param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    uVar2 = _CFURLCreateCopyAppendingPathComponent();
    return uVar2;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_100680abc(uVar2);
  }
  FUN_1001782e9(0,0);
  return 0;
}

