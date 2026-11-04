// name: FUN_1001ca99e
// address: 1001ca99e

int FUN_1001ca99e(long param_1,int param_2,undefined1 param_3,long param_4,int param_5,char param_6)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  uint *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long *local_38;
  
  local_38 = (long *)0x0;
  if (param_1 == 0) {
    uVar8 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      FUN_1006ad638(uVar8);
    }
LAB_1001cab5d:
    FUN_1001782e9(0,0);
    return -0x32;
  }
  if (param_4 == 0) {
    uVar8 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      FUN_1006ad5c2(uVar8);
    }
    goto LAB_1001cab5d;
  }
  if (param_5 == 0) {
    uVar8 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      FUN_1006ad54c(uVar8);
    }
    goto LAB_1001cab5d;
  }
  uVar3 = param_5 + 0x10;
  puVar7 = (uint *)FUN_1001c63e1((long)(int)uVar3);
  if (puVar7 == (uint *)0x0) {
    uVar8 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      FUN_1006ad4d6(uVar8);
    }
    FUN_1001782e9(0,0);
    iVar6 = -0x6c;
    plVar9 = local_38;
    if (local_38 == (long *)0x0) {
      return -0x6c;
    }
    goto LAB_1001cac1e;
  }
  *puVar7 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 * 0x1000000;
  puVar7[1] = 0x61746164;
  *(undefined2 *)(puVar7 + 2) = 0;
  *(undefined1 *)((long)puVar7 + 10) = 0;
  *(undefined1 *)((long)puVar7 + 0xb) = param_3;
  puVar7[3] = 0;
  FUN_1001c631b(param_4,puVar7 + 4,(long)param_5);
  plVar9 = *(long **)(param_1 + 0x10);
  if (plVar9 == (long *)0x0) {
LAB_1001cab7e:
    iVar6 = FUN_10015d46a(param_1,puVar7,2);
    if (iVar6 != -0x80) {
      if (iVar6 == 0) {
        return 0;
      }
      uVar8 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar8,0x10);
      if (cVar5 != '\0') {
        FUN_1006ad46a(iVar6,uVar8);
      }
      if (iVar6 == 0) {
        return 0;
      }
    }
  }
  else {
    plVar1 = (long *)(param_1 + 0x10);
    iVar6 = 0;
    do {
      plVar2 = plVar9 + 4;
      plVar9 = (long *)*plVar9;
      iVar6 = iVar6 + (uint)(*(int *)(*plVar2 + 4) == 0x61746164);
    } while (plVar9 != (long *)0x0);
    if ((param_6 != '\0') || (iVar6 == 0)) goto LAB_1001cab7e;
    iVar6 = FUN_10015cb08(puVar7,&local_38,2);
    if (iVar6 != -0x80) {
      if (iVar6 == 0) {
        plVar9 = (long *)*plVar1;
        if (plVar9 != (long *)0x0) {
          iVar6 = 1;
          do {
            if (*(int *)(plVar9[4] + 4) == 0x61746164) {
              if (iVar6 == param_2) {
                local_38[1] = param_1;
                FUN_1001c261d(plVar1,local_38,plVar9);
                FUN_1001c2502(plVar1,plVar9);
                uVar3 = *(uint *)local_38[4];
                uVar4 = *(uint *)plVar9[4];
                FUN_10015d440(local_38,(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 |
                                        (uVar3 & 0xff00) << 8 | uVar3 << 0x18) -
                                       (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 |
                                        (uVar4 & 0xff00) << 8 | uVar4 << 0x18));
                iVar6 = 0;
                goto LAB_1001cac1e;
              }
              iVar6 = iVar6 + 1;
            }
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
        }
        uVar8 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar8,0x10);
        if (cVar5 != '\0') {
          FUN_1006ad388(uVar8);
        }
        FUN_1001782e9(0,0);
        iVar6 = -0xd0;
      }
      else {
        uVar8 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar8,0x10);
        if (cVar5 != '\0') {
          FUN_1006ad3fe(iVar6,uVar8);
        }
      }
    }
  }
  plVar9 = local_38;
  if (local_38 == (long *)0x0) {
    FUN_1001c64c1(puVar7);
    return iVar6;
  }
LAB_1001cac1e:
  FUN_10015ccc4(plVar9,0);
  return iVar6;
}

