// name: FUN_10016a4ce
// address: 10016a4ce

int FUN_10016a4ce(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 *param_7)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10067812e(uVar3);
    }
LAB_10016a5d1:
    FUN_1001782e9(0,0);
    return -0x32;
  }
  uVar3 = FUN_100170651();
  lVar4 = FUN_10017270e(uVar3,param_1,param_6,0,param_7);
  if (lVar4 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006780b8(uVar3);
    }
    goto LAB_10016a5d1;
  }
  iVar2 = FUN_1001660b3(lVar4,param_2,param_3,param_4,param_5);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) goto LAB_10016a58b;
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10067804c(iVar2,uVar3);
    }
  }
  if (param_7 != (undefined8 *)0x0) {
    uVar3 = FUN_10017157f(DAT_1008c4d90,*(undefined8 *)PTR__kCFErrorDomainOSStatus_10082e080,
                          (long)iVar2,0);
    *param_7 = uVar3;
  }
LAB_10016a58b:
  FUN_10017060f(lVar4);
  return iVar2;
}

