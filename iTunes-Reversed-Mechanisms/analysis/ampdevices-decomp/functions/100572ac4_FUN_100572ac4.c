// name: FUN_100572ac4
// address: 100572ac4

ulong FUN_100572ac4(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  char cVar4;
  byte bVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  ulong uVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *local_90;
  uint *local_78;
  uint *local_68;
  uint *local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar4 = (**(code **)(*param_1 + 0xe0))();
  if (cVar4 != '\0') {
    if ((ushort)(uRam0000000000000010 << 8 | uRam0000000000000010 >> 8) < 2) {
      puVar15 = (uint *)((ulong)(uRam0000000000000010 == 0x100) << 4 | 0x24);
    }
    else {
      puVar15 = (uint *)(ulong)(uRam0000000000000024 >> 0x18 |
                                (uRam0000000000000024 & 0xff0000) >> 8 |
                                (uRam0000000000000024 & 0xff00) << 8 | uRam0000000000000024 << 0x18)
      ;
    }
    puVar16 = (uint *)(ulong)(uRam0000000000000000 >> 0x18 | (uRam0000000000000000 & 0xff0000) >> 8
                              | (uRam0000000000000000 & 0xff00) << 8 | uRam0000000000000000 << 0x18)
    ;
    if (puVar16 < puVar15 + 2) {
      uVar6 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 != '\0') {
        local_4a = "atomSize >= (offsetToExtensions + sizeof(AtomHeader))";
        goto LAB_100572e1e;
      }
      goto LAB_100572e43;
    }
    local_68 = (uint *)0x0;
    local_78 = (uint *)0x0;
    local_60 = (uint *)0x0;
    local_90 = (uint *)0x0;
    puVar9 = (uint *)0x0;
    puVar11 = (uint *)0x0;
    do {
      if ((ulong)((long)puVar16 - (long)puVar15) < 8) goto LAB_100572de1;
      uVar14 = *puVar15;
      if ((uVar14 == 0) ||
         (uVar7 = (ulong)(uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                         uVar14 << 0x18), (long)puVar16 - (long)puVar15 < (long)uVar7))
      goto LAB_100572d9e;
      uVar14 = puVar15[1];
      puVar10 = puVar9;
      puVar12 = puVar11;
      puVar1 = local_90;
      puVar2 = local_78;
      puVar3 = local_60;
      if ((int)uVar14 < 0x666e6973) {
        if (uVar14 == 0x44495555) {
          cVar4 = FUN_1001c5630(puVar15 + 2,&DAT_1007403f0,0x10);
          puVar10 = puVar15;
          if (cVar4 == '\0') {
            uVar14 = puVar15[1];
            goto LAB_100572c92;
          }
        }
        else {
          puVar12 = puVar15;
          if (uVar14 != 0x65766177) {
LAB_100572c92:
            puVar10 = puVar9;
            puVar12 = puVar11;
            puVar1 = local_90;
            puVar2 = puVar15;
            puVar3 = local_60;
            if ((uVar14 != 0x666e6970) && (puVar2 = local_78, uVar14 == 0x65657266)) {
              local_68 = puVar15;
            }
          }
        }
      }
      else {
        puVar3 = puVar15;
        if ((uVar14 != 0x666e6973) && (puVar1 = puVar15, puVar3 = local_60, uVar14 != 0x73647365))
        goto LAB_100572c92;
      }
      local_60 = puVar3;
      local_78 = puVar2;
      local_90 = puVar1;
      puVar15 = (uint *)((long)puVar15 + uVar7);
      puVar9 = puVar10;
      puVar11 = puVar12;
    } while (puVar15 < puVar16);
    if (puVar12 != (uint *)0x0 && local_90 == (uint *)0x0) {
      uVar14 = *puVar12;
      uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
      if (8 < uVar14) {
        puVar16 = (uint *)((ulong)uVar14 + (long)puVar12);
        puVar12 = puVar12 + 2;
        puVar15 = puVar10;
        do {
          uVar7 = (long)puVar16 - (long)puVar12;
          if (uVar7 < 8) goto LAB_100572de1;
          uVar14 = *puVar12;
          if ((uVar14 == 0) ||
             (uVar13 = (ulong)(uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                              uVar14 << 0x18), (long)uVar7 < (long)uVar13)) goto LAB_100572d9e;
          uVar14 = puVar12[1];
          puVar10 = puVar15;
          puVar9 = local_78;
          puVar11 = local_68;
          puVar1 = local_60;
          if (uVar14 == 0x44495555) {
            cVar4 = FUN_1001c5630(puVar12 + 2,&DAT_1007403f0,0x10);
            puVar10 = puVar12;
            if (cVar4 == '\0') {
              uVar14 = puVar12[1];
              goto LAB_100572d6c;
            }
          }
          else if ((uVar14 != 0x73647365) && (puVar1 = puVar12, uVar14 != 0x666e6973)) {
LAB_100572d6c:
            puVar10 = puVar15;
            puVar11 = puVar12;
            puVar1 = local_60;
            if ((uVar14 != 0x65657266) &&
               ((puVar9 = puVar12, puVar11 = local_68, uVar14 != 0x666e6970 &&
                (puVar9 = local_78, uVar14 == 0)))) break;
          }
          local_60 = puVar1;
          local_68 = puVar11;
          local_78 = puVar9;
          puVar12 = (uint *)((long)puVar12 + uVar13);
          puVar15 = puVar10;
        } while (puVar12 < puVar16);
      }
    }
    if (local_60 != (uint *)0x0) {
      local_78 = local_60;
    }
    if (puVar10 != (uint *)0x0 || local_78 != (uint *)0x0) {
      lVar8 = (**(code **)(*param_1 + 0x70))(param_1,*param_2);
      if (local_78 == (uint *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar14 = FUN_100570eff(local_78,(long)local_78 + (*param_2 - lVar8),param_2[1],param_3);
        uVar7 = (ulong)uVar14;
      }
      if (puVar10 != (uint *)0x0) {
        bVar5 = FUN_100570eff(puVar10,(long)puVar10 + (*param_2 - lVar8),param_2[1],param_4);
        uVar7 = CONCAT71((int7)(uVar7 >> 8),(byte)uVar7 | bVar5);
      }
      if ((param_5 != 0) && (local_68 != (uint *)0x0)) {
        FUN_100570eff(local_68,(long)local_68 + (*param_2 - lVar8),param_2[1],param_5);
      }
      goto LAB_100572eac;
    }
  }
  uVar7 = 0;
  goto LAB_100572eac;
LAB_100572de1:
  uVar6 = FUN_1001cc310();
  cVar4 = _os_log_type_enabled(uVar6,0x10);
  if (cVar4 != '\0') {
    local_4a = "(end - beg) >= sizeof(AtomHeader)";
    goto LAB_100572e1e;
  }
  goto LAB_100572e43;
LAB_100572d9e:
  uVar6 = FUN_1001cc310();
  cVar4 = _os_log_type_enabled(uVar6,0x10);
  if (cVar4 != '\0') {
    local_4a = "atomSize != 0 && (atomSize <= (end - beg))";
LAB_100572e1e:
    local_4c = 0x822;
    local_54 = "Assertion failure";
    local_58 = 0x8220202;
    __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
  }
LAB_100572e43:
  uVar7 = 0;
  FUN_1001782e9(0,0);
LAB_100572eac:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

