// name: FUN_1001d223d
// address: 1001d223d

undefined8 FUN_1001d223d(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  undefined8 uVar9;
  
  if (param_1 == 0) {
    uVar9 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar9,0x10);
    if (cVar8 != '\0') {
      FUN_1006b2824(uVar9);
    }
  }
  else if (param_2 == (undefined8 *)0x0) {
    uVar9 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar9,0x10);
    if (cVar8 != '\0') {
      FUN_1006b27ae(uVar9);
    }
  }
  else if (*(char *)(param_1 + 8) == '\0') {
    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (puVar1 == (undefined8 *)0x0) {
      uVar9 = FUN_1001cc310();
      cVar8 = _os_log_type_enabled(uVar9,0x10);
      if (cVar8 != '\0') {
        FUN_1006b2738(uVar9);
      }
    }
    else {
      if (*(int *)(param_1 + 0x20) == 0x44) {
        *(undefined4 *)(param_2 + 8) = *(undefined4 *)(puVar1 + 8);
        uVar9 = *puVar1;
        uVar2 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        uVar5 = puVar1[4];
        uVar6 = puVar1[5];
        uVar7 = puVar1[7];
        param_2[6] = puVar1[6];
        param_2[7] = uVar7;
        param_2[4] = uVar5;
        param_2[5] = uVar6;
        param_2[2] = uVar3;
        param_2[3] = uVar4;
        *param_2 = uVar9;
        param_2[1] = uVar2;
        return 0;
      }
      uVar9 = FUN_1001cc310();
      cVar8 = _os_log_type_enabled(uVar9,0x10);
      if (cVar8 != '\0') {
        FUN_1006b26c2(uVar9);
      }
    }
  }
  else {
    uVar9 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar9,0x10);
    if (cVar8 != '\0') {
      FUN_1006b264c(uVar9);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

