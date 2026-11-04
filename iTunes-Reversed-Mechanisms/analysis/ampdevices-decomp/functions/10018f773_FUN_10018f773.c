// name: FUN_10018f773
// address: 10018f773

undefined8 FUN_10018f773(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_10017cbd0();
  if (cVar1 != '\0') {
    uVar2 = FUN_10019206f(param_1,param_2,param_3);
    uVar3 = FUN_1001eb020(uVar2);
    return uVar3;
  }
  uVar3 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar3,0x10);
  if (cVar1 != '\0') {
    FUN_1006937fa(uVar3);
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

