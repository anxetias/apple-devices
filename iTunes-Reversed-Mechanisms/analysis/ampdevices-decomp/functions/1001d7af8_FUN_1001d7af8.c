// name: FUN_1001d7af8
// address: 1001d7af8

undefined8 FUN_1001d7af8(undefined8 *param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006b5a7c(uVar5);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0xffffffce;
  }
  else {
    *param_1 = 0;
    puVar2 = (undefined4 *)FUN_1001c6429(0x28);
    if (puVar2 == (undefined4 *)0x0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        FUN_1006b5a06(uVar5);
      }
      FUN_1001782e9(0,0);
    }
    else {
      *puVar2 = 0x73726169;
      puVar2[4] = param_2;
      *(undefined8 *)(puVar2 + 6) = param_3;
      lVar7 = (ulong)param_2 * 0x148;
      lVar3 = FUN_1001c6429(lVar7);
      *(long *)(puVar2 + 2) = lVar3;
      if (lVar3 != 0) {
        if (param_2 != 0) {
          lVar6 = 0;
          do {
            lVar4 = FUN_1001c64e6(param_3);
            *(long *)(lVar3 + 0x140 + lVar6) = lVar4;
            if (lVar4 == 0) {
              uVar5 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar5,0x10);
              if (cVar1 != '\0') {
                FUN_1006b591a(uVar5);
              }
              goto LAB_1001d7c4b;
            }
            lVar6 = lVar6 + 0x148;
          } while (lVar7 - lVar6 != 0);
        }
        *param_1 = puVar2;
        return 0;
      }
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        FUN_1006b5990(uVar5);
      }
LAB_1001d7c4b:
      FUN_1001782e9(0,0);
      lVar3 = *(long *)(puVar2 + 2);
      if (lVar3 != 0) {
        if (param_2 != 0) {
          lVar6 = 0;
          do {
            if (*(long *)(lVar3 + 0x140 + lVar6) != 0) {
              FUN_1001c652e();
            }
            lVar6 = lVar6 + 0x148;
          } while (lVar7 - lVar6 != 0);
          lVar3 = *(long *)(puVar2 + 2);
        }
        FUN_1001c64c1(lVar3);
      }
      FUN_1001c64c1(puVar2);
    }
    uVar5 = 0xffffff94;
  }
  return uVar5;
}

