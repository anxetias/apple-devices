// name: FUN_100027620
// address: 100027620

undefined8 FUN_100027620(long param_1,ulong param_2,undefined8 *param_3,uint *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  long local_78;
  long local_70;
  undefined8 *local_68;
  ulong local_60;
  ulong local_58;
  uint *local_50;
  undefined8 *local_48;
  uint *local_40;
  uint local_34;
  
  if (param_1 == 0) {
    return 0xffff5bd9;
  }
  if (param_3 == (undefined8 *)0x0) {
    return 0xffff5bd9;
  }
  if (param_4 == (uint *)0x0) {
    return 0xffff5bd9;
  }
  *param_3 = 0;
  *param_4 = 0;
  local_78 = 0;
  local_70 = 0;
  uVar2 = FUN_100070b70(param_1,param_2,0xb,&local_78);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  uVar7 = (uint)param_2;
  uVar2 = FUN_100070b70(param_1,param_2 & 0xffffffff,0x2b,&local_70);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (local_78 != 1) {
    return 0xffff5bd9;
  }
  if (local_70 != 0) {
    return 0xffff5bd9;
  }
  local_34 = uVar7;
  puVar3 = _malloc(param_2 & 0xffffffff);
  if (puVar3 == (uint *)0x0) {
    return 0xffff5bd4;
  }
  *(char *)puVar3 = (char)(param_2 >> 0x18);
  *(char *)((long)puVar3 + 1) = (char)(param_2 >> 0x10);
  *(char *)((long)puVar3 + 2) = (char)(param_2 >> 8);
  *(char *)((long)puVar3 + 3) = (char)param_2;
  puVar3[1] = 0x666e6970;
  if (uVar7 < 9) {
    uVar8 = 8;
    iVar12 = 0;
    puVar4 = puVar3;
  }
  else {
    uVar8 = 8;
    iVar12 = 0;
    uVar11 = 8;
    local_50 = param_4;
    local_48 = param_3;
    local_40 = puVar3;
    do {
      iVar10 = (int)uVar11;
      uVar9 = (ulong)*(byte *)(param_1 + (ulong)(iVar10 + 3)) |
              (ulong)*(byte *)(param_1 + (ulong)(iVar10 + 2)) << 8 |
              (ulong)*(byte *)(param_1 + 1 + uVar11) << 0x10 |
              (ulong)*(byte *)(param_1 + uVar11) << 0x18;
      uVar1 = (uint)uVar9;
      if (uVar7 - iVar10 < uVar1) {
        uVar2 = 0xffff5bdf;
        goto LAB_100027a19;
      }
      puVar6 = (undefined8 *)(uVar11 + param_1);
      if (((uint)*(byte *)(param_1 + (ulong)(iVar10 + 7)) |
          (uint)*(byte *)(param_1 + (ulong)(iVar10 + 6)) << 8 |
          (uint)*(byte *)(param_1 + (ulong)(iVar10 + 4)) << 0x18 |
          (uint)*(byte *)(param_1 + (ulong)(iVar10 + 5)) << 0x10) == 0x73636869) {
        *(undefined8 *)(uVar8 + (long)puVar3) = *puVar6;
        uVar5 = (int)uVar8 + 8;
        uVar2 = 0;
        if (8 < uVar1) {
          uVar7 = 8;
          local_68 = puVar6;
          local_60 = uVar9;
          local_58 = uVar8;
          do {
            uVar1 = uVar7 + iVar10;
            uVar8 = (ulong)*(byte *)(param_1 + (ulong)(uVar7 + iVar10 + 2)) << 8 |
                    (ulong)*(byte *)(param_1 + (ulong)(uVar7 + iVar10 + 1)) << 0x10 |
                    (ulong)*(byte *)(param_1 + (ulong)uVar1) << 0x18;
            uVar11 = (ulong)*(byte *)(param_1 + (ulong)(uVar7 + iVar10 + 3));
            uVar14 = uVar11 | uVar8;
            uVar13 = (uint)uVar14;
            if (local_34 - uVar1 < uVar13) {
              uVar2 = 0xffff5bdf;
              uVar8 = local_58;
              uVar7 = local_34;
              goto LAB_100027906;
            }
            uVar1 = (uint)*(byte *)(param_1 + (ulong)(uVar1 + 7)) |
                    (uint)*(byte *)(param_1 + (ulong)(uVar1 + 6)) << 8 |
                    (uint)*(byte *)(param_1 + (ulong)(uVar1 + 4)) << 0x18 |
                    (uint)*(byte *)(param_1 + (ulong)(uVar1 + 5)) << 0x10;
            if ((uVar1 != 0x69766976) && (uVar1 != 0x70726976)) {
              if (uVar1 == 0x6b657920) {
                _memcpy((undefined1 *)((ulong)uVar5 + (long)puVar3),
                        (void *)((ulong)uVar7 + (long)puVar6),uVar14);
                *(undefined1 *)((long)local_40 + (ulong)(uVar5 + 4)) = 99;
                *(undefined1 *)((long)local_40 + (ulong)(uVar5 + 5)) = 0x65;
                *(undefined1 *)((long)local_40 + (ulong)(uVar5 + 6)) = 0x72;
                *(undefined1 *)((long)local_40 + (ulong)(uVar5 + 7)) = 0x74;
              }
              else {
                _memcpy((undefined1 *)((ulong)uVar5 + (long)puVar3),
                        (void *)((ulong)uVar7 + (long)puVar6),uVar11 | uVar8);
              }
              uVar5 = uVar5 + uVar13;
              puVar3 = local_40;
              puVar6 = local_68;
              uVar9 = local_60;
            }
            uVar7 = uVar7 + uVar13;
          } while (uVar7 < (uint)uVar9);
          uVar2 = 0;
          uVar8 = local_58;
          uVar7 = local_34;
        }
LAB_100027906:
        iVar12 = uVar5 - (int)uVar8;
      }
      else {
        _memcpy((undefined8 *)(uVar8 + (long)puVar3),puVar6,uVar9);
        uVar5 = (int)uVar8 + uVar1;
        uVar2 = 0;
        puVar3 = local_40;
        uVar7 = local_34;
      }
      uVar8 = (ulong)uVar5;
    } while (((int)uVar2 == 0) &&
            (uVar1 = iVar10 + (int)uVar9, uVar11 = (ulong)uVar1, uVar1 < uVar7));
    puVar4 = puVar3;
    param_3 = local_48;
    param_4 = local_50;
    if ((int)uVar2 != 0) goto LAB_100027a19;
  }
  uVar7 = (uint)uVar8;
  puVar3 = _realloc(puVar4,uVar8);
  if (puVar3 == (uint *)0x0) {
    _free(puVar4);
    return 0xffff5bd4;
  }
  *puVar3 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
  if (8 < uVar7) {
    uVar1 = 8;
    do {
      while( true ) {
        uVar8 = (ulong)uVar1;
        if (((uint)*(byte *)((long)puVar3 + (ulong)(uVar1 + 7)) |
            (uint)*(byte *)((long)puVar3 + (ulong)(uVar1 + 6)) << 8 |
            (uint)*(byte *)((long)puVar3 + (ulong)(uVar1 + 5)) << 0x10 |
            (uint)*(byte *)((long)puVar3 + (ulong)(uVar1 + 4)) << 0x18) == 0x73636869) break;
        uVar1 = uVar1 + ((uint)*(byte *)((long)puVar3 + (ulong)(uVar1 + 3)) |
                        (uint)*(byte *)((long)puVar3 + (ulong)(uVar1 + 2)) << 8 |
                        (uint)*(byte *)((long)puVar3 + uVar8 + 1) << 0x10 |
                        (uint)*(byte *)((long)puVar3 + uVar8) << 0x18);
        if (uVar7 <= uVar1) goto LAB_100027a02;
      }
      *(char *)((long)puVar3 + uVar8) = (char)((uint)iVar12 >> 0x18);
      *(char *)((long)puVar3 + uVar8 + 1) = (char)((uint)iVar12 >> 0x10);
      *(char *)((long)puVar3 + (ulong)(uVar1 + 2)) = (char)((uint)iVar12 >> 8);
      *(char *)((long)puVar3 + (ulong)(uVar1 + 3)) = (char)iVar12;
      uVar1 = uVar1 + iVar12;
    } while (uVar1 < uVar7);
  }
LAB_100027a02:
  uVar2 = 0;
  local_48 = param_3;
  local_50 = param_4;
LAB_100027a19:
  *local_48 = puVar3;
  *local_50 = uVar7;
  return uVar2;
}

