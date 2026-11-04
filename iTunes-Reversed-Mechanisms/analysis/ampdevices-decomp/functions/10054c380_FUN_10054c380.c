// name: FUN_10054c380
// address: 10054c380

undefined1 * FUN_10054c380(uint *param_1,uint *param_2,long *param_3,undefined8 *param_4)

{
  ushort uVar1;
  uint *puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  ulong uVar18;
  uint *puVar19;
  uint *puVar20;
  uint *local_80;
  uint *local_70;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 != (uint *)0x0) {
    param_2[0] = 0;
    param_2[1] = 0;
  }
  if (param_3 != (long *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
  }
  uVar1 = (ushort)param_1[4];
  if ((ushort)(uVar1 << 8 | uVar1 >> 8) < 2) {
    uVar4 = (uint)(uVar1 == 0x100) << 4 | 0x24;
  }
  else {
    uVar4 = param_1[9];
    uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  }
  uVar5 = *param_1;
  uVar8 = (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18);
  if ((ulong)uVar4 + 8 <= uVar8) {
    puVar17 = (uint *)(uVar8 + (long)param_1);
    param_1 = (uint *)((ulong)uVar4 + (long)param_1);
    local_70 = (uint *)0x0;
    local_80 = (uint *)0x0;
    puVar16 = (uint *)0x0;
    puVar10 = (uint *)0x0;
    puVar12 = (uint *)0x0;
    puVar14 = (uint *)0x0;
    puVar19 = (uint *)0x0;
    do {
      uVar8 = (long)puVar17 - (long)param_1;
      if (uVar8 < 8) goto LAB_10054c704;
      uVar4 = *param_1;
      uVar5 = param_1[1];
      puVar9 = puVar16;
      puVar11 = puVar10;
      puVar13 = puVar12;
      puVar15 = puVar14;
      puVar20 = puVar19;
      if (uVar5 == 0 && uVar4 == 0) break;
      if ((uVar4 == 0) ||
         (uVar18 = (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                          uVar4 << 0x18), (long)uVar8 < (long)uVar18)) goto LAB_10054c6c1;
      puVar2 = local_80;
      if ((int)uVar5 < 0x65766177) {
        if (uVar5 == 0x44495555) {
          cVar3 = FUN_1001c5630(param_1 + 2,&DAT_1007403f0,0x10);
          puVar11 = param_1;
          if (cVar3 == '\0') {
            uVar5 = param_1[1];
            goto LAB_10054c54f;
          }
        }
        else {
          puVar20 = param_1;
          if (uVar5 != 0x63616c61) {
LAB_10054c54f:
            puVar9 = puVar16;
            puVar11 = puVar10;
            puVar13 = puVar12;
            puVar15 = puVar14;
            puVar20 = puVar19;
            puVar2 = param_1;
            if ((uVar5 != 0x666e6970) && (puVar2 = local_80, uVar5 == 0x6d726461)) {
              local_70 = param_1;
            }
          }
        }
      }
      else {
        puVar9 = param_1;
        if (((uVar5 != 0x65766177) && (puVar9 = puVar16, puVar13 = param_1, uVar5 != 0x666e6973)) &&
           (puVar13 = puVar12, puVar15 = param_1, uVar5 != 0x73647365)) goto LAB_10054c54f;
      }
      local_80 = puVar2;
      param_1 = (uint *)((long)param_1 + uVar18);
      puVar16 = puVar9;
      puVar10 = puVar11;
      puVar12 = puVar13;
      puVar14 = puVar15;
      puVar19 = puVar20;
    } while (param_1 < puVar17);
    if ((puVar15 == (uint *)0x0 && puVar20 == (uint *)0x0) && puVar9 != (uint *)0x0) {
      uVar4 = *puVar9;
      uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      if (8 < uVar4) {
        puVar16 = (uint *)((ulong)uVar4 + (long)puVar9);
        puVar9 = puVar9 + 2;
        puVar15 = (uint *)0x0;
        puVar20 = (uint *)0x0;
        do {
          uVar8 = (long)puVar16 - (long)puVar9;
          if (uVar8 < 8) goto LAB_10054c704;
          uVar4 = *puVar9;
          if ((uVar4 == 0) ||
             (uVar18 = (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                              uVar4 << 0x18), (long)uVar8 < (long)uVar18)) goto LAB_10054c6c1;
          uVar4 = puVar9[1];
          puVar10 = puVar11;
          puVar12 = puVar13;
          puVar14 = puVar15;
          puVar19 = puVar20;
          puVar17 = local_80;
          if ((int)uVar4 < 0x666e6973) {
            if (uVar4 == 0x44495555) {
              cVar3 = FUN_1001c5630(puVar9 + 2,&DAT_1007403f0,0x10);
              puVar10 = puVar9;
              if (cVar3 == '\0') {
                uVar4 = puVar9[1];
                goto LAB_10054c645;
              }
            }
            else {
              puVar19 = puVar9;
              if (uVar4 != 0x63616c61) {
LAB_10054c645:
                puVar10 = puVar11;
                puVar12 = puVar13;
                puVar14 = puVar15;
                puVar19 = puVar20;
                puVar17 = puVar9;
                if ((uVar4 != 0x666e6970) && (puVar17 = local_80, uVar4 == 0)) break;
              }
            }
          }
          else {
            puVar12 = puVar9;
            if ((uVar4 != 0x666e6973) && (puVar12 = puVar13, puVar14 = puVar9, uVar4 != 0x73647365))
            goto LAB_10054c645;
          }
          local_80 = puVar17;
          puVar9 = (uint *)((long)puVar9 + uVar18);
          puVar11 = puVar10;
          puVar13 = puVar12;
          puVar15 = puVar14;
          puVar20 = puVar19;
        } while (puVar9 < puVar16);
        goto LAB_10054c662;
      }
      puVar20 = (uint *)0x0;
    }
    else {
LAB_10054c662:
      if ((puVar15 != (uint *)0x0) && (puVar20 != (uint *)0x0)) {
        uVar6 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 != '\0') {
          local_4a = "!( (esdsAtom != nullptr) && (alacAtom != nullptr) )";
          goto LAB_10054c741;
        }
        goto LAB_10054c766;
      }
      puVar16 = param_2;
      if (((puVar15 != (uint *)0x0) ||
          (puVar15 = puVar20, puVar16 = puVar20, param_2 != (uint *)0x0)) &&
         (puVar20 = puVar15, puVar16 != (uint *)0x0)) {
        *(uint **)param_2 = puVar20;
        puVar20 = (uint *)0x0;
      }
    }
    if (param_3 != (long *)0x0) {
      if (local_70 == (uint *)0x0) {
        if (puVar13 == (uint *)0x0) {
          *param_3 = (long)local_80;
        }
        else {
          *param_3 = (long)puVar13;
          if (param_4 != (undefined8 *)0x0) {
            *param_4 = puVar11;
          }
        }
      }
      else {
        if (*param_3 != 0) {
          uVar6 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar6,0x10);
          if (cVar3 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "*outInfoAtom1 == nullptr";
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        *param_3 = (long)local_70;
      }
    }
    if (param_2 != (uint *)0x0) {
      puVar20 = *(uint **)param_2;
    }
    puVar7 = &DAT_ffffff30;
    if (puVar20 != (uint *)0x0) {
      puVar7 = (undefined1 *)0x0;
    }
    goto LAB_10054c774;
  }
  uVar6 = FUN_1001cc310();
  cVar3 = _os_log_type_enabled(uVar6,0x10);
  if (cVar3 != '\0') {
    local_4a = "atomSize >= (offsetToExtensions + sizeof(AtomHeader))";
    goto LAB_10054c741;
  }
LAB_10054c766:
  FUN_1001782e9(0,0);
  puVar7 = &DAT_ffffff30;
LAB_10054c774:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return puVar7;
LAB_10054c704:
  uVar6 = FUN_1001cc310();
  cVar3 = _os_log_type_enabled(uVar6,0x10);
  if (cVar3 != '\0') {
    local_4a = "(end - beg) >= sizeof(AtomHeader)";
    goto LAB_10054c741;
  }
  goto LAB_10054c766;
LAB_10054c6c1:
  uVar6 = FUN_1001cc310();
  cVar3 = _os_log_type_enabled(uVar6,0x10);
  if (cVar3 != '\0') {
    local_4a = "atomSize != 0 && (atomSize <= (end - beg))";
LAB_10054c741:
    local_4c = 0x822;
    local_54 = "Assertion failure";
    local_58 = 0x8220202;
    __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
  }
  goto LAB_10054c766;
}

