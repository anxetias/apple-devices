// name: FUN_10015d46a
// address: 10015d46a

/* WARNING: Removing unreachable block (ram,0x00010015d4f2) */

int FUN_10015d46a(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_10015cb08(param_2);
  if (iVar2 == 0) {
    iVar2 = FUN_10015d357(param_1,0,param_3);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_10066d349(iVar2,uVar3);
      }
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10066d2dd(iVar2,uVar3);
    }
  }
  return iVar2;
}

