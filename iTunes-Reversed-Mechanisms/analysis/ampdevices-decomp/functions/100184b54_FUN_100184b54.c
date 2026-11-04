// name: FUN_100184b54
// address: 100184b54

int FUN_100184b54(long param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 local_70 [3];
  char local_6d;
  
  if (param_1 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_10068b1a9(uVar5);
    }
    FUN_1001782e9(0,0);
    iVar4 = -0x32;
  }
  else {
    iVar2 = FUN_1001892ae(param_1,0);
    iVar4 = 0;
    if (((iVar2 != 0) && (iVar3 = FUN_10017d406(param_1,0,local_70,0), iVar4 = iVar2, iVar3 == 0))
       && (local_6d != '\0')) {
      FUN_100184bee(param_1);
      iVar4 = FUN_1001892ae(param_1,0);
    }
  }
  return iVar4;
}

