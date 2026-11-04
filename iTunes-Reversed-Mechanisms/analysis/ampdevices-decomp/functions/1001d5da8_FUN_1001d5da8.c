// name: FUN_1001d5da8
// address: 1001d5da8

int FUN_1001d5da8(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  undefined1 local_150 [16];
  undefined4 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_38;
  
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  iVar5 = FUN_1001d40d0();
  if (iVar5 == 0) {
    iVar5 = FUN_1001d6276(local_150);
    if (iVar5 != -0x80) {
      if (iVar5 == 0) {
        *(undefined1 *)(param_1 + 0x950) = 1;
        local_140 = 0x436c6f73;
        iVar5 = FUN_1001d62dc(param_1);
        if ((iVar5 != -0x80) && (iVar5 != 0)) {
          uVar7 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar7,0x10);
          if (cVar4 != '\0') {
            FUN_1006b3c3e(iVar5,uVar7);
          }
        }
        lVar1 = param_1 + 8;
        iVar5 = FUN_1001e9de0(lVar1);
        if ((iVar5 != -0x80) && (iVar5 != 0)) {
          uVar7 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar7,0x10);
          if (cVar4 != '\0') {
            FUN_1006b3caa(iVar5,uVar7);
          }
        }
        FUN_1001db3e5(param_1);
        FUN_1001e9eb9(lVar1);
        FUN_100105c62(param_1);
        lVar8 = FUN_1001ead5c(param_1 + 0x9b8);
        if (lVar8 != 0) {
          uVar7 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar7,0x10);
          if (cVar4 != '\0') {
            FUN_1006b3d16(uVar7);
          }
          FUN_1001782e9(0,0);
        }
        lVar8 = FUN_1001ead5c(param_1 + 0x998);
        if (lVar8 != 0) {
          uVar7 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar7,0x10);
          if (cVar4 != '\0') {
            FUN_1006b3d8c(uVar7);
          }
          FUN_1001782e9(0,0);
        }
        iVar5 = FUN_1001e9de0(lVar1);
        if ((iVar5 != -0x80) && (iVar5 != 0)) {
          local_38 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(local_38,0x10);
          if (cVar4 != '\0') {
            FUN_1006b3e02(iVar5,local_38);
          }
        }
        lVar8 = FUN_1001ead5c(param_1 + 0x998);
        if (lVar8 != 0) {
          uVar7 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar7,0x10);
          if (cVar4 != '\0') {
            FUN_1006b3e6e(uVar7);
          }
          FUN_1001782e9(0,0);
        }
        lVar8 = FUN_1001ead5c(param_1 + 0x9b8);
        if (lVar8 != 0) {
          uVar7 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar7,0x10);
          if (cVar4 != '\0') {
            FUN_1006b3ee4(uVar7);
          }
          FUN_1001782e9(0,0);
        }
        if (*(long *)(param_1 + 0x9b0) != 0) {
          uVar7 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar7,0x10);
          if (cVar4 != '\0') {
            FUN_1006b3f5a(uVar7);
          }
          FUN_1001782e9(0,0);
        }
        iVar5 = 0;
        puVar3 = *(undefined8 **)(param_1 + 0x980);
        while (puVar3 != (undefined8 *)0x0) {
          puVar2 = (undefined8 *)*puVar3;
          if (*(char *)(puVar3 + 0x27) == '\0') {
            iVar5 = iVar5 + 1;
            puVar3 = puVar2;
          }
          else {
            FUN_1001d41e3(param_1);
            puVar3 = puVar2;
          }
        }
        plVar11 = (long *)(param_1 + 0x988);
        iVar5 = iVar5 + -2;
        do {
          plVar11 = (long *)*plVar11;
          iVar5 = iVar5 + 1;
        } while (plVar11 != (long *)0x0);
        plVar11 = (long *)(param_1 + 0x990);
        plVar9 = plVar11;
        do {
          plVar9 = (long *)*plVar9;
          iVar5 = iVar5 + 1;
        } while (plVar9 != (long *)0x0);
        if (*(int *)(param_1 + 0x94c) + *(int *)(param_1 + 0x948) != iVar5) {
          uVar7 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar7,0x10);
          if (cVar4 != '\0') {
            FUN_1006b3fd0(uVar7);
          }
          FUN_1001782e9(0,0);
        }
        lVar8 = FUN_1001c26bc(plVar11);
        while (lVar8 != 0) {
          if (*(long *)(lVar8 + 0x140) != 0) {
            FUN_1001c64c1();
          }
          FUN_1001c64c1(lVar8);
          lVar8 = FUN_1001c26bc(plVar11);
        }
        if (*(long *)(param_1 + 0x960) == 0) {
          lVar8 = *(long *)(param_1 + 0x968);
          if (lVar8 != 0) {
            uVar6 = *(uint *)(param_1 + 0x94c);
            if (uVar6 != 0) {
              plVar11 = (long *)(lVar8 + 0x140);
              uVar10 = 0;
              do {
                if (*plVar11 != 0) {
                  FUN_1001c652e();
                  uVar6 = *(uint *)(param_1 + 0x94c);
                }
                uVar10 = uVar10 + 1;
                plVar11 = plVar11 + 0x29;
              } while (uVar10 < uVar6);
              lVar8 = *(long *)(param_1 + 0x968);
            }
            FUN_1001c64c1(lVar8);
          }
        }
        else {
          *(undefined8 *)(*(long *)(param_1 + 0x960) + 0x20) = 0;
        }
        iVar5 = FUN_1001e9eb9(lVar1);
        if ((iVar5 != -0x80) && (iVar5 != 0)) {
          uVar7 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar7,0x10);
          if (cVar4 != '\0') {
            FUN_1006b4046(iVar5,uVar7);
          }
        }
        FUN_1001e9d75(lVar1);
        FUN_1001e9d75(param_1 + 0x50);
        FUN_1001c62d9(param_1,0x9e0);
        FUN_1001c64c1(param_1);
      }
      else {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          FUN_1006b40b2(iVar5,uVar7);
        }
      }
    }
  }
  else {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      FUN_1006b3bd2(iVar5,uVar7);
    }
  }
  return iVar5;
}

