// name: FUN_1001d1aa6
// address: 1001d1aa6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1001d1aa6(long param_1,uint param_2,code *param_3,undefined8 param_4,undefined8 *param_5)

{
  long lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  bool bVar14;
  undefined1 auVar15 [16];
  undefined8 local_50;
  undefined8 local_48;
  ulong local_40;
  code *local_38;
  
  if (param_5 == (undefined8 *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      FUN_1006b1ca8(uVar6);
    }
LAB_1001d1d0b:
    FUN_1001782e9(0,0);
    return -0x32;
  }
  *param_5 = 0;
  if (param_1 == 0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      FUN_1006b1c32(uVar6);
    }
    goto LAB_1001d1d0b;
  }
  if (param_2 < 0x88) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      FUN_1006b1a5a(uVar6);
    }
    goto LAB_1001d1d0b;
  }
  uVar10 = (ulong)param_2;
  local_38 = param_3;
  puVar5 = (uint *)FUN_1001c63e1(uVar10);
  if (puVar5 == (uint *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      FUN_1006b1bbc(uVar6);
    }
    FUN_1001782e9(0,0);
    return -0x6c;
  }
  FUN_1001c631b(param_1,puVar5,uVar10);
  uVar4 = *puVar5;
  uVar9 = puVar5[2];
  *puVar5 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  auVar15 = pshufb(ZEXT416(puVar5[1]),_DAT_10070c140);
  puVar5[1] = auVar15._0_4_;
  puVar5[2] = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
  if (uVar4 == 0x74734c53) {
    if (auVar15._0_2_ < 2) {
      bVar14 = *(char *)((long)puVar5 + 0xf) != '\0';
      cVar2 = bVar14 + '\x02';
      if (*(char *)((long)puVar5 + 0xe) == '\0') {
        cVar2 = bVar14;
      }
      local_48 = param_4;
      local_40 = uVar10;
      iVar3 = FUN_1001cf0e8(cVar2,param_5);
      if (iVar3 == 0) {
        if (puVar5[2] == 0) {
          iVar3 = 0;
        }
        else {
          local_40 = local_40 + (long)puVar5;
          uVar4 = 0;
          puVar11 = puVar5 + 0x22;
          do {
            uVar9 = *puVar11;
            uVar8 = puVar11[1];
            uVar7 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
            *puVar11 = uVar7;
            uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
            puVar11[1] = uVar8;
            uVar9 = puVar11[0xd];
            uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
            puVar11[0xd] = uVar9;
            if ((char)puVar11[2] == '\0') {
              if (local_38 == (code *)0x0) {
LAB_1001d1c22:
                iVar3 = FUN_1001d027d(*param_5,0xffffffff,uVar8,uVar7,puVar11 + 0xe,uVar9);
                goto LAB_1001d1c36;
              }
              iVar3 = (*local_38)(uVar7,puVar11 + 0xe,uVar9,local_48);
              if (iVar3 == 0) {
                uVar7 = *puVar11;
                uVar8 = puVar11[1];
                uVar9 = puVar11[0xd];
                goto LAB_1001d1c22;
              }
LAB_1001d1dcd:
              FUN_1001cf5c9(*param_5);
              *param_5 = 0;
              break;
            }
            iVar3 = FUN_1001d1aa6(puVar11 + 0xe,uVar9,local_38,local_48,&local_50);
            if (iVar3 == 0) {
              iVar3 = FUN_1001d0525(*param_5,0xffffffff,puVar11[1],local_50);
              FUN_1001cf5c9(local_50);
            }
LAB_1001d1c36:
            if ((iVar3 != 0) ||
               ((*(char *)((long)puVar11 + 9) != '\0' &&
                (iVar3 = FUN_1001cf6dc(*param_5,uVar4,0), iVar3 != 0)))) goto LAB_1001d1dcd;
            lVar1 = (ulong)(puVar11[0xd] & 1) + (ulong)puVar11[0xd];
            puVar12 = (uint *)((long)puVar11 + lVar1 + 0x38);
            puVar13 = puVar12;
            if (((ulong)puVar12 & 2) != 0) {
              puVar13 = (uint *)((long)puVar11 + lVar1 + 0x36);
              FUN_1001c631b(puVar12,puVar13,local_40 - (long)puVar12);
            }
            uVar4 = uVar4 + 1;
            iVar3 = 0;
            puVar11 = puVar13;
          } while (uVar4 < puVar5[2]);
        }
      }
      goto LAB_1001d1da1;
    }
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      FUN_1006b1b46(uVar6);
    }
  }
  else {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      FUN_1006b1ad0(uVar6);
    }
  }
  FUN_1001782e9(0,0);
  iVar3 = -0x32;
LAB_1001d1da1:
  FUN_1001c64c1(puVar5);
  return iVar3;
}

