// name: FUN_100196700
// address: 100196700

int FUN_100196700(long param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_2 == (char *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_100695a4c(uVar5);
    }
  }
  else {
    if (param_1 != 0) {
      if (param_2[1] == '\x01') {
        lVar4 = _CGImageSourceCopyMetadataAtIndex(param_1,0,0);
        if (lVar4 == 0) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            FUN_100695888(uVar5);
          }
          cVar1 = FUN_1001782e9(0,0);
          if (cVar1 == '\0') goto LAB_1001967d6;
        }
        iVar2 = FUN_100196642(param_2,lVar4);
        FUN_10017060f(lVar4);
        if (iVar2 != 0) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 == '\0') {
            return iVar2;
          }
          FUN_1006958fe(iVar2,uVar5);
          return iVar2;
        }
      }
LAB_1001967d6:
      if (*param_2 != '\x01') {
        return 0;
      }
      lVar4 = _CGImageSourceCopyPropertiesAtIndex(param_1,0,0);
      if (lVar4 == 0) {
        uVar3 = _CGImageSourceGetStatus(param_1);
        iVar2 = FUN_1001968a0(uVar3);
        if (iVar2 == 0) {
          return 0x2345;
        }
        return iVar2;
      }
      iVar2 = FUN_100196580(param_2,lVar4);
      FUN_10017060f(lVar4);
      if (iVar2 == 0) {
        return 0;
      }
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 == '\0') {
        return iVar2;
      }
      FUN_10069596a(iVar2,uVar5);
      return iVar2;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006959d6(uVar5);
    }
  }
  FUN_1001782e9(0,0);
  return -0x32;
}

