// name: FUN_10016af5a
// address: 10016af5a

undefined1 FUN_10016af5a(undefined8 param_1,sockaddr *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 in_RAX;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (param_2 == (sockaddr *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    uVar6 = 0;
    if (cVar1 != '\0') {
      FUN_100678bce(uVar5);
      uVar6 = 0;
    }
  }
  else {
    lVar3 = FUN_1001731d8(param_1,*(undefined8 *)PTR__kCFStreamPropertySocketNativeHandle_10082e128)
    ;
    if (lVar3 == 0) {
      return 0;
    }
    piVar4 = (int *)FUN_100170f3b(lVar3);
    iVar2 = *piVar4;
    FUN_10017060f(lVar3);
    uStack_28 = CONCAT44(0x10,(undefined4)uStack_28);
    iVar2 = _getpeername(iVar2,param_2,(socklen_t *)((long)&uStack_28 + 4));
    if (iVar2 == 0) {
      return 1;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    uVar6 = 1;
    if (cVar1 != '\0') {
      FUN_100678b58(uVar5);
    }
  }
  FUN_1001782e9(uVar6,0);
  return 0;
}

