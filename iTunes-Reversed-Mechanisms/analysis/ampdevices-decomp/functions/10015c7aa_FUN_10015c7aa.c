// name: FUN_10015c7aa
// address: 10015c7aa

int FUN_10015c7aa(long param_1,uint param_2,code *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  undefined8 local_38;
  
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_10066c53b(uVar4);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x32;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x20);
    uVar2 = *puVar5;
    puVar7 = (uint *)((long)(int)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                                 uVar2 << 0x18) + (long)puVar5);
    puVar6 = puVar5 + 2;
    if ((param_2 == 0) || (puVar6 = (uint *)((long)(puVar5 + 2) + (ulong)param_2), puVar6 <= puVar7)
       ) {
      do {
        do {
          if (puVar7 <= puVar6) {
            return 0;
          }
          if (puVar7 < puVar6 + 1) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              FUN_10066c4c5(uVar4);
            }
            goto LAB_10015c807;
          }
          uVar2 = *puVar6;
          if ((uVar2 == 0) && ((long)puVar7 - (long)puVar6 == 4)) {
            return 0;
          }
          if (puVar7 < puVar6 + 2) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              FUN_10066c44f(uVar4);
            }
            goto LAB_10015c807;
          }
          if (uVar2 == 0) {
            uVar2 = (uint)((long)puVar7 - (long)puVar6);
            *puVar6 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                      uVar2 << 0x18;
          }
          else {
            uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
          }
          puVar5 = (uint *)((ulong)uVar2 + (long)puVar6);
          if (puVar7 < puVar5) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              FUN_10066c3d9(uVar4);
            }
            goto LAB_10015c807;
          }
          iVar3 = FUN_10015cb08(puVar6,&local_38,0);
          if (iVar3 != 0) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 == '\0') {
              return iVar3;
            }
            FUN_10066c295(iVar3,uVar4);
            return iVar3;
          }
          iVar3 = FUN_10015d357(param_1,local_38,4);
          if (iVar3 != 0) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 == '\0') {
              return iVar3;
            }
            FUN_10066c301(iVar3,uVar4);
            return iVar3;
          }
          puVar6 = puVar5;
        } while (param_3 == (code *)0x0);
        iVar3 = (*param_3)(local_38,param_4);
        if (0 < iVar3) {
          iVar3 = FUN_10015ca57(local_38,param_4);
        }
      } while (iVar3 == 0);
      if (iVar3 != -0x80) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          FUN_10066c36d(iVar3,uVar4);
        }
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_10066c21f(uVar4);
      }
LAB_10015c807:
      FUN_1001782e9(0,0);
      iVar3 = -0xd0;
    }
  }
  return iVar3;
}

