// name: FUN_1001a14dd
// address: 1001a14dd

void FUN_1001a14dd(long *param_1,long param_2,uint param_3,long *param_4,int param_5,int param_6,
                  char param_7)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  sbyte sVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint *puVar15;
  int iVar16;
  uint local_44;
  undefined4 local_34;
  
  cVar2 = *(char *)(*param_1 + 0xd4);
  FUN_1001e9de0(&DAT_10089cae8);
  puVar4 = DAT_10089cb40;
  if ((param_2 == 0) && (*(char *)(*param_4 + 0xd4) == '\x01')) {
    iVar16 = 0;
    if (param_7 == '\0') {
      iVar16 = param_6;
    }
    for (; puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)*puVar4) {
      if ((((*(int *)(puVar4 + 2) == param_5) && (*(int *)(puVar4 + 3) == iVar16)) &&
          (*(char *)((long)puVar4 + 0x1c) == param_7)) && (*(char *)((long)puVar4 + 0x14) != '\0'))
      goto LAB_1001a19b4;
    }
    puVar4 = (undefined8 *)FUN_1001c63e1(0x1020);
    if (puVar4 == (undefined8 *)0x0) {
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        FUN_10069c321(uVar7);
      }
LAB_1001a1aac:
      FUN_1001782e9(0,0);
      FUN_1001e9eb9(&DAT_10089cae8);
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        FUN_10069c397(uVar7);
      }
      FUN_1001782e9(0,0);
      return;
    }
    *(int *)(puVar4 + 2) = param_5;
    *(undefined1 *)((long)puVar4 + 0x14) = 1;
    *(int *)(puVar4 + 3) = iVar16;
    *(char *)((long)puVar4 + 0x1c) = param_7;
    FUN_1001c2bbb(&DAT_10089cb40,puVar4);
    local_34 = 0x10000;
    if (param_7 == '\0') {
      local_34 = FUN_1001a2544(param_6);
    }
    puVar15 = (uint *)(puVar4 + 4);
    iVar16 = 0;
    do {
      uVar3 = FUN_1001b2b52(iVar16,local_34);
      uVar9 = uVar3 >> 8 & 0xff;
      if (0xffff < (int)uVar3) {
        uVar9 = 0xff;
      }
      if (param_5 < 0x42475241) {
        if (param_5 == 0x20) {
          uVar9 = uVar9 << 0x10;
          goto LAB_1001a1622;
        }
        if (param_5 == 0x41424752) goto LAB_1001a1622;
      }
      else {
        if (param_5 == 0x42475241) {
          uVar9 = uVar9 << 8;
        }
        else {
          if (param_5 != 0x52474241) goto LAB_1001a162a;
          uVar9 = uVar9 << 0x18;
        }
LAB_1001a1622:
        *puVar15 = uVar9;
        puVar15 = puVar15 + 1;
      }
LAB_1001a162a:
      iVar16 = iVar16 + 0x101;
    } while (iVar16 != 0x10100);
    piVar5 = (int *)(puVar4 + 0x84);
    iVar16 = 0;
    do {
      uVar3 = FUN_1001b2b52(iVar16,local_34);
      uVar9 = uVar3 >> 8 & 0xff;
      if (0xffff < (int)uVar3) {
        uVar9 = 0xff;
      }
      if (param_5 < 0x42475241) {
        sVar8 = 8;
        if ((param_5 == 0x20) || (param_5 == 0x41424752)) {
LAB_1001a1697:
          *piVar5 = uVar9 << sVar8;
          piVar5 = piVar5 + 1;
        }
      }
      else if ((param_5 == 0x52474241) || (param_5 == 0x42475241)) {
        sVar8 = 0x10;
        goto LAB_1001a1697;
      }
      iVar16 = iVar16 + 0x101;
    } while (iVar16 != 0x10100);
    puVar15 = (uint *)(puVar4 + 0x104);
    iVar16 = 0;
    do {
      uVar3 = FUN_1001b2b52(iVar16,local_34);
      uVar9 = uVar3 >> 8 & 0xff;
      if (0xffff < (int)uVar3) {
        uVar9 = 0xff;
      }
      if (param_5 < 0x42475241) {
        if (param_5 == 0x20) goto LAB_1001a170f;
        if (param_5 == 0x41424752) {
          uVar9 = uVar9 << 0x10;
          goto LAB_1001a170f;
        }
      }
      else {
        if (param_5 == 0x52474241) {
          uVar9 = uVar9 << 8;
        }
        else {
          if (param_5 != 0x42475241) goto LAB_1001a1717;
          uVar9 = uVar9 << 0x18;
        }
LAB_1001a170f:
        *puVar15 = uVar9;
        puVar15 = puVar15 + 1;
      }
LAB_1001a1717:
      iVar16 = iVar16 + 0x101;
    } while (iVar16 != 0x10100);
    piVar5 = (int *)(puVar4 + 0x184);
    iVar16 = 0;
    do {
      if (param_5 < 0x42475241) {
        if ((param_5 == 0x20) || (param_5 == 0x41424752)) {
          iVar10 = iVar16 << 0x18;
LAB_1001a1762:
          *piVar5 = iVar10;
          piVar5 = piVar5 + 1;
        }
      }
      else {
        iVar10 = iVar16;
        if ((param_5 == 0x52474241) || (param_5 == 0x42475241)) goto LAB_1001a1762;
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 != 0x100);
  }
  else {
    iVar16 = 0;
    if (param_7 == '\0') {
      iVar16 = param_6;
    }
    for (; puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)*puVar4) {
      if ((((*(int *)(puVar4 + 2) == param_5) && (*(int *)(puVar4 + 3) == iVar16)) &&
          (*(char *)((long)puVar4 + 0x1c) == param_7)) && (*(char *)((long)puVar4 + 0x14) == '\0'))
      goto LAB_1001a19b4;
    }
    puVar4 = (undefined8 *)FUN_1001c63e1(0x1020);
    if (puVar4 == (undefined8 *)0x0) {
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        FUN_10069c2ab(uVar7);
      }
      goto LAB_1001a1aac;
    }
    *(int *)(puVar4 + 2) = param_5;
    *(undefined1 *)((long)puVar4 + 0x14) = 0;
    *(int *)(puVar4 + 3) = iVar16;
    *(char *)((long)puVar4 + 0x1c) = param_7;
    FUN_1001c2bbb(&DAT_10089cb40,puVar4);
    local_34 = 0x10000;
    if (param_7 == '\0') {
      local_34 = FUN_1001a2544(param_6);
    }
    puVar15 = (uint *)(puVar4 + 4);
    iVar16 = 0;
    do {
      uVar3 = FUN_1001b2b52(iVar16,local_34);
      uVar9 = uVar3 >> 8 & 0xff;
      if (0xffff < (int)uVar3) {
        uVar9 = 0xff;
      }
      if (param_5 < 0x42475241) {
        if (param_5 == 0x20) {
          uVar9 = uVar9 << 8;
          goto LAB_1001a1864;
        }
        if (param_5 == 0x41424752) {
          uVar9 = uVar9 << 0x18;
          goto LAB_1001a1864;
        }
      }
      else {
        if (param_5 == 0x42475241) {
          uVar9 = uVar9 << 0x10;
        }
        else if (param_5 != 0x52474241) goto LAB_1001a186c;
LAB_1001a1864:
        *puVar15 = uVar9;
        puVar15 = puVar15 + 1;
      }
LAB_1001a186c:
      iVar16 = iVar16 + 0x101;
    } while (iVar16 != 0x10100);
    piVar5 = (int *)(puVar4 + 0x84);
    iVar16 = 0;
    do {
      uVar3 = FUN_1001b2b52(iVar16,local_34);
      uVar9 = uVar3 >> 8 & 0xff;
      if (0xffff < (int)uVar3) {
        uVar9 = 0xff;
      }
      if (param_5 < 0x42475241) {
        sVar8 = 0x10;
        if ((param_5 == 0x20) || (param_5 == 0x41424752)) {
LAB_1001a18d9:
          *piVar5 = uVar9 << sVar8;
          piVar5 = piVar5 + 1;
        }
      }
      else if ((param_5 == 0x52474241) || (param_5 == 0x42475241)) {
        sVar8 = 8;
        goto LAB_1001a18d9;
      }
      iVar16 = iVar16 + 0x101;
    } while (iVar16 != 0x10100);
    puVar15 = (uint *)(puVar4 + 0x104);
    iVar16 = 0;
    do {
      uVar3 = FUN_1001b2b52(iVar16,local_34);
      uVar9 = uVar3 >> 8 & 0xff;
      if (0xffff < (int)uVar3) {
        uVar9 = 0xff;
      }
      if (param_5 < 0x42475241) {
        if (param_5 == 0x20) {
          uVar9 = uVar9 << 0x18;
          goto LAB_1001a1951;
        }
        if (param_5 == 0x41424752) {
          uVar9 = uVar9 << 8;
          goto LAB_1001a1951;
        }
      }
      else {
        if (param_5 != 0x42475241) {
          if (param_5 != 0x52474241) goto LAB_1001a1959;
          uVar9 = uVar9 << 0x10;
        }
LAB_1001a1951:
        *puVar15 = uVar9;
        puVar15 = puVar15 + 1;
      }
LAB_1001a1959:
      iVar16 = iVar16 + 0x101;
    } while (iVar16 != 0x10100);
    piVar5 = (int *)(puVar4 + 0x184);
    iVar16 = 0;
    do {
      if (param_5 < 0x42475241) {
        iVar10 = iVar16;
        if ((param_5 == 0x20) || (param_5 == 0x41424752)) {
LAB_1001a19a4:
          *piVar5 = iVar10;
          piVar5 = piVar5 + 1;
        }
      }
      else if ((param_5 == 0x42475241) || (param_5 == 0x52474241)) {
        iVar10 = iVar16 << 0x18;
        goto LAB_1001a19a4;
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 != 0x100);
  }
LAB_1001a19b4:
  FUN_1001e9eb9(&DAT_10089cae8);
  lVar12 = *param_1;
  local_44 = param_3;
  if (param_2 == 0) {
    param_2 = *(long *)(*param_4 + 200);
    local_44 = *(uint *)(*param_4 + 0xb8);
  }
  lVar6 = (long)(short)*(undefined8 *)(lVar12 + 0xb0);
  if (0 < lVar6) {
    uVar9 = *(uint *)(lVar12 + 0xb8);
    lVar11 = *(long *)(lVar12 + 200);
    lVar12 = (long)(short)*(undefined8 *)(lVar12 + 0xa8);
    lVar13 = 0;
    do {
      if (0 < lVar12) {
        lVar14 = 0;
        do {
          uVar3 = *(uint *)(lVar11 + lVar14 * 4);
          uVar1 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
          if (cVar2 != '\0') {
            uVar1 = uVar3;
          }
          *(uint *)(param_2 + lVar14 * 4) =
               *(uint *)((long)puVar4 + (ulong)(uVar1 >> 0xe & 0x3fc) + 0x20) |
               *(uint *)((long)puVar4 + (ulong)(uVar1 >> 0x18) * 4 + 0xc20) |
               *(uint *)((long)puVar4 + (ulong)(uVar1 >> 8 & 0xff) * 4 + 0x420) |
               *(uint *)((long)puVar4 + (ulong)(uVar1 & 0xff) * 4 + 0x820);
          lVar14 = lVar14 + 1;
        } while (lVar12 != lVar14);
      }
      lVar13 = lVar13 + 1;
      param_2 = param_2 + (ulong)local_44;
      lVar11 = lVar11 + (ulong)uVar9;
    } while (lVar13 != lVar6);
  }
  return;
}

