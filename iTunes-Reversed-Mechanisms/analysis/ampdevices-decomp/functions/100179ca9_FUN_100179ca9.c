// name: FUN_100179ca9
// address: 100179ca9

undefined8 FUN_100179ca9(uint *param_1,long *param_2,undefined4 *param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  uint *puVar10;
  undefined8 uVar11;
  
  if (param_2 == (long *)0x0) {
    uVar11 = FUN_1001cc310();
    cVar9 = _os_log_type_enabled(uVar11,0x10);
    if (cVar9 != '\0') {
      FUN_100683fc8(uVar11);
    }
  }
  else if (param_3 == (undefined4 *)0x0) {
    uVar11 = FUN_1001cc310();
    cVar9 = _os_log_type_enabled(uVar11,0x10);
    if (cVar9 != '\0') {
      FUN_100683f52(uVar11);
    }
  }
  else {
    if ((char)param_1[1] == '\x03') {
      puVar10 = (uint *)FUN_1001c6429(0xa0);
      if (puVar10 != (uint *)0x0) {
        uVar1 = *param_1;
        *puVar10 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
        puVar10[1] = param_1[1] << 0x18;
        uVar2 = *(ulong *)(param_1 + 8);
        *(ulong *)(puVar10 + 2) =
             uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
             (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
             (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
        uVar11 = *(undefined8 *)(param_1 + 0xc);
        *(undefined8 *)(puVar10 + 4) = *(undefined8 *)(param_1 + 10);
        *(undefined8 *)(puVar10 + 6) = uVar11;
        uVar11 = *(undefined8 *)(param_1 + 0x10);
        uVar3 = *(undefined8 *)(param_1 + 0x12);
        uVar4 = *(undefined8 *)(param_1 + 0x14);
        uVar5 = *(undefined8 *)(param_1 + 0x16);
        uVar6 = *(undefined8 *)(param_1 + 0x18);
        uVar7 = *(undefined8 *)(param_1 + 0x1a);
        uVar8 = *(undefined8 *)(param_1 + 0x1c);
        *(undefined8 *)(puVar10 + 8) = *(undefined8 *)(param_1 + 0xe);
        *(undefined8 *)(puVar10 + 10) = uVar11;
        *(undefined8 *)(puVar10 + 0xc) = uVar3;
        *(undefined8 *)(puVar10 + 0xe) = uVar4;
        *(undefined8 *)(puVar10 + 0x10) = uVar5;
        *(undefined8 *)(puVar10 + 0x12) = uVar6;
        *(undefined8 *)(puVar10 + 0x14) = uVar7;
        *(undefined8 *)(puVar10 + 0x16) = uVar8;
        uVar11 = *(undefined8 *)(param_1 + 0x10);
        uVar3 = *(undefined8 *)(param_1 + 0x12);
        uVar4 = *(undefined8 *)(param_1 + 0x14);
        uVar5 = *(undefined8 *)(param_1 + 0x16);
        uVar6 = *(undefined8 *)(param_1 + 0x18);
        uVar7 = *(undefined8 *)(param_1 + 0x1a);
        uVar8 = *(undefined8 *)(param_1 + 0x1c);
        *(undefined8 *)(puVar10 + 0x18) = *(undefined8 *)(param_1 + 0xe);
        *(undefined8 *)(puVar10 + 0x1a) = uVar11;
        *(undefined8 *)(puVar10 + 0x1c) = uVar3;
        *(undefined8 *)(puVar10 + 0x1e) = uVar4;
        *(undefined8 *)(puVar10 + 0x20) = uVar5;
        *(undefined8 *)(puVar10 + 0x22) = uVar6;
        *(undefined8 *)(puVar10 + 0x24) = uVar7;
        *(undefined8 *)(puVar10 + 0x26) = uVar8;
        *param_2 = (long)puVar10;
        *param_3 = 0xa0;
        return 0;
      }
      uVar11 = FUN_1001cc310();
      cVar9 = _os_log_type_enabled(uVar11,0x10);
      if (cVar9 != '\0') {
        FUN_100683edc(uVar11);
      }
      FUN_1001782e9(0,0);
      FUN_1001c64c1(0);
      *param_2 = 0;
      *param_3 = 0;
      return 0xffffff94;
    }
    uVar11 = FUN_1001cc310();
    cVar9 = _os_log_type_enabled(uVar11,0x10);
    if (cVar9 != '\0') {
      FUN_100683e66(uVar11);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

