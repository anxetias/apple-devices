// name: FUN_10015b6c3
// address: 10015b6c3

undefined8 FUN_10015b6c3(long param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  undefined8 uVar7;
  uint uVar8;
  short sVar9;
  ushort uVar10;
  
  if (param_1 == 0) {
    uVar7 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar7,0x10);
    if (cVar1 != '\0') {
      FUN_10066bee7(uVar7);
    }
  }
  else {
    lVar5 = FUN_1001c627e();
    iVar2 = 0xc;
    if (param_2 != 0) {
      iVar2 = param_2;
    }
    uVar10 = *(ushort *)(lVar5 + 0xe + (long)iVar2);
    uVar10 = uVar10 << 8 | uVar10 >> 8;
    if ((short)uVar10 < 1) {
      return 1;
    }
    iVar2 = FUN_1001c5d9c(param_1);
    lVar5 = FUN_1001c627e(param_1);
    puVar6 = (uint *)FUN_10015b989(param_1,param_2);
    if (puVar6 == (uint *)0x0) {
      uVar7 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar7,0x10);
      if (cVar1 != '\0') {
        FUN_10066be71(uVar7);
      }
    }
    else {
      sVar9 = 1;
      while( true ) {
        uVar4 = *puVar6;
        uVar8 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
        if ((int)uVar8 < 0x14) {
          uVar7 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar7,0x10);
          if (cVar1 != '\0') {
            FUN_10066bd0f(uVar7);
          }
          goto LAB_10015b855;
        }
        if ((uint *)(lVar5 + iVar2) < (uint *)((ulong)uVar8 + (long)puVar6)) break;
        if (param_3 != 0) {
          iVar3 = FUN_1001c627e(param_1);
          cVar1 = FUN_10015b6c3(param_1,(int)puVar6 - iVar3,0);
          if (cVar1 == '\0') {
            return 0;
          }
          uVar4 = *puVar6;
        }
        puVar6 = (uint *)((long)puVar6 +
                         (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                                uVar4 << 0x18));
        if ((uint *)(lVar5 + iVar2) < puVar6) {
          uVar7 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar7,0x10);
          if (cVar1 != '\0') {
            FUN_10066bd85(uVar7);
          }
          goto LAB_10015b855;
        }
        sVar9 = sVar9 + 1;
        if ((short)uVar10 < sVar9) {
          return 1;
        }
      }
      uVar7 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar7,0x10);
      if (cVar1 != '\0') {
        FUN_10066bdfb(uVar7);
      }
    }
  }
LAB_10015b855:
  FUN_1001782e9(0,0);
  return 0;
}

