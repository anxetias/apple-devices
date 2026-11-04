// name: FUN_100164378
// address: 100164378

undefined1
FUN_100164378(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (DAT_10088ff98 == 0) {
    uVar3 = FUN_1001cc310(0,param_1,param_2,param_3,param_4);
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_100671c61(uVar3);
    }
    uVar1 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    uVar1 = FUN_1001636ba();
  }
  return uVar1;
}

