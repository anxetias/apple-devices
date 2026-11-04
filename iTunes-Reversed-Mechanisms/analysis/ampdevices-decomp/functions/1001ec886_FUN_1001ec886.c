// name: FUN_1001ec886
// address: 1001ec886

int FUN_1001ec886(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if (param_1[2] == 0) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      FUN_1006c435b(uVar6);
    }
LAB_1001eca1c:
    FUN_1001782e9(0,0);
    return -0x32;
  }
  if ((uint)param_1[2] < (uint)param_1[1]) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      FUN_1006c42e5(uVar6);
    }
    goto LAB_1001eca1c;
  }
  if (param_2 == (undefined8 *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      FUN_1006c426f(uVar6);
    }
    goto LAB_1001eca1c;
  }
  puVar7 = (undefined4 *)FUN_1001c6429(0x228);
  if (puVar7 == (undefined4 *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      FUN_1006c41f9(uVar6);
    }
    FUN_1001782e9(0,0);
    return -0x6c;
  }
  *puVar7 = 0x776b7470;
  puVar7[1] = param_1[6];
  puVar7[0x26] = *param_1;
  uVar6 = *(undefined8 *)(param_1 + 1);
  *(undefined8 *)(puVar7 + 0x3b) = uVar6;
  puVar7[0x3d] = (int)((ulong)uVar6 >> 0x20);
  iVar5 = 0x7fffffff;
  if (param_1[3] != 0) {
    iVar5 = param_1[3];
  }
  puVar7[0x3e] = iVar5;
  uVar6 = *(undefined8 *)(param_1 + 10);
  *(undefined8 *)(puVar7 + 0x40) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(puVar7 + 0x42) = uVar6;
  uVar1 = param_1[0xd];
  uVar2 = param_1[0xe];
  uVar3 = param_1[0xf];
  puVar7[0x44] = param_1[0xc];
  puVar7[0x45] = uVar1;
  puVar7[0x46] = uVar2;
  puVar7[0x47] = uVar3;
  if (*(long *)(param_1 + 4) != 0) {
    FUN_1001dfbb3(*(long *)(param_1 + 4),(long)puVar7 + 0x126,0x100);
  }
  puVar8 = puVar7 + 2;
  iVar5 = FUN_1001e82fe(puVar8,0,0x7fffffff);
  if (iVar5 != -0x80) {
    if (iVar5 == 0) goto LAB_1001ec9fe;
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      FUN_1006c418d(iVar5,uVar6);
    }
  }
  cVar4 = FUN_1001e82da(puVar8);
  if (cVar4 != '\0') {
    FUN_1001e8470(puVar8);
  }
  *puVar7 = 0xdeadbeef;
  FUN_1001c64c1(puVar7);
  puVar7 = (undefined4 *)0x0;
LAB_1001ec9fe:
  *param_2 = puVar7;
  return iVar5;
}

