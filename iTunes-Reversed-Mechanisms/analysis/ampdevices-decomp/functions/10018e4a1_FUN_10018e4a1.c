// name: FUN_10018e4a1
// address: 10018e4a1

undefined8 FUN_10018e4a1(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_10017cbd0();
  if (cVar1 != '\0') {
    uVar2 = _FSPathMakeRef(param_1 + 0x19,param_2,0);
    return uVar2;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_100692dea(uVar2);
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

