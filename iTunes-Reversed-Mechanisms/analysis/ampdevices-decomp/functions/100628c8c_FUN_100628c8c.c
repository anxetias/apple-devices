// name: FUN_100628c8c
// address: 100628c8c

undefined8 FUN_100628c8c(long param_1,long param_2,long param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  char cVar16;
  uint uVar17;
  ulong uVar18;
  void *pvVar19;
  char *pcVar20;
  ulong uVar21;
  undefined1 *puVar22;
  undefined8 uVar23;
  char *pcVar24;
  long lVar25;
  long lVar26;
  long *plVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  uint *puVar31;
  ulong uVar32;
  bool bVar33;
  char local_b8 [4];
  char *local_b4;
  undefined2 local_ac;
  char *local_aa;
  char local_58 [4];
  char *local_54;
  undefined2 local_4c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == 0 || param_2 == 0) {
    uVar23 = FUN_1001cc310();
    cVar16 = _os_log_type_enabled(uVar23,0x10);
    if (cVar16 != '\0') {
      builtin_strncpy(local_b8,"\x02\x02\"\b",4);
      local_b4 = "Assertion failure";
      local_ac = 0x822;
      local_aa = "schemaDefinitions != nullptr && numDefinitions != 0";
      __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: (%{public}s)",local_b8,0x16);
    }
    FUN_1001782e9(0,0);
    uVar23 = 0xffffffce;
  }
  else {
    uVar18 = *(ulong *)(param_1 + 0x28);
    plVar27 = (long *)(param_2 + 0x18);
    lVar25 = -1;
    lVar29 = 0;
    do {
      uVar18 = uVar18 + *plVar27;
      *(ulong *)(param_1 + 0x28) = uVar18;
      if ((plVar27[-1] != 0) && (bVar33 = lVar25 != -1, lVar25 = lVar29, bVar33)) {
        uVar23 = FUN_1001cc310();
        cVar16 = _os_log_type_enabled(uVar23,0x10);
        if (cVar16 != '\0') {
          builtin_strncpy(local_b8,"\x02\x02\"\b",4);
          local_b4 = "Assertion failure";
          local_ac = 0x822;
          local_aa = "primaryIndex == ~0";
          __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: (%{public}s)",local_b8,0x16);
        }
        FUN_1001782e9(0,0);
        uVar23 = 0xffffff32;
        goto LAB_100629152;
      }
      lVar29 = lVar29 + 1;
      plVar27 = plVar27 + 5;
    } while (param_3 != lVar29);
    lVar29 = 0;
    if (lVar25 != -1) {
      lVar29 = lVar25;
    }
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + lVar29 * 0x28);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x10 + lVar29 * 0x28);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar18;
    uVar18 = 0xffffffffffffffff;
    if (SUB168(auVar6 * ZEXT816(0x28),8) == 0) {
      uVar18 = SUB168(auVar6 * ZEXT816(0x28),0);
    }
    pvVar19 = operator_new__(uVar18,(nothrow_t *)PTR_nothrow_10082c970);
    *(void **)(param_1 + 0x30) = pvVar19;
    if (pvVar19 == (void *)0x0) {
      uVar23 = FUN_1001cc310();
      cVar16 = _os_log_type_enabled(uVar23,0x10);
      if (cVar16 != '\0') {
        pcVar20 = local_b8;
        builtin_strncpy(local_b8,"\x02\x02\"\b",4);
        local_b4 = "Assertion failure";
        local_ac = 0x822;
        pcVar24 = "mSchema.tables != nullptr";
LAB_10062928b:
        *(char **)(pcVar20 + 0xe) = pcVar24;
        __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: (%{public}s)",pcVar20,0x16);
      }
LAB_100629144:
      FUN_1001782e9(0,0);
      uVar23 = 0xffffff94;
    }
    else {
      lVar25 = lVar29 * 0x28 + param_2;
      if (*(long *)(lVar25 + 0x18) == 0) {
        uVar18 = 0;
      }
      else {
        lVar26 = 0;
        uVar18 = 0;
        do {
          lVar30 = *(long *)(param_1 + 0x30);
          lVar5 = *(long *)(lVar25 + 0x20);
          *(undefined8 *)(lVar30 + 0x20 + lVar26) = *(undefined8 *)(lVar5 + 0x20 + lVar26);
          uVar23 = *(undefined8 *)(lVar5 + lVar26);
          uVar14 = ((undefined8 *)(lVar5 + lVar26))[1];
          puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar26);
          uVar15 = puVar2[1];
          puVar3 = (undefined8 *)(lVar30 + 0x10 + lVar26);
          *puVar3 = *puVar2;
          puVar3[1] = uVar15;
          *(undefined8 *)(lVar30 + lVar26) = uVar23;
          ((undefined8 *)(lVar30 + lVar26))[1] = uVar14;
          uVar18 = uVar18 + 1;
          lVar26 = lVar26 + 0x28;
        } while (uVar18 < *(ulong *)(lVar25 + 0x18));
      }
      lVar25 = 0;
      do {
        if ((lVar25 != lVar29) && (*(long *)(param_2 + 0x18 + lVar25 * 0x28) != 0)) {
          lVar26 = param_2 + lVar25 * 0x28;
          lVar30 = 0;
          uVar32 = 0;
          do {
            lVar28 = *(long *)(param_1 + 0x30) + uVar18 * 0x28;
            lVar5 = *(long *)(lVar26 + 0x20);
            *(undefined8 *)(lVar30 + 0x20 + lVar28) = *(undefined8 *)(lVar5 + 0x20 + lVar30);
            puVar1 = (undefined4 *)(lVar5 + lVar30);
            uVar7 = *puVar1;
            uVar8 = puVar1[1];
            uVar9 = puVar1[2];
            uVar10 = puVar1[3];
            puVar1 = (undefined4 *)(lVar5 + 0x10 + lVar30);
            uVar11 = puVar1[1];
            uVar12 = puVar1[2];
            uVar13 = puVar1[3];
            puVar4 = (undefined4 *)(lVar30 + 0x10 + lVar28);
            *puVar4 = *puVar1;
            puVar4[1] = uVar11;
            puVar4[2] = uVar12;
            puVar4[3] = uVar13;
            puVar1 = (undefined4 *)(lVar30 + lVar28);
            *puVar1 = uVar7;
            puVar1[1] = uVar8;
            puVar1[2] = uVar9;
            puVar1[3] = uVar10;
            _snprintf(local_b8,0x60,"%s.%s",*(undefined8 *)(lVar26 + 8),
                      *(undefined8 *)(*(long *)(lVar26 + 0x20) + lVar30));
            pcVar20 = _strdup(local_b8);
            *(char **)(lVar30 + lVar28) = pcVar20;
            if (pcVar20 == (char *)0x0) {
              uVar23 = FUN_1001cc310();
              cVar16 = _os_log_type_enabled(uVar23,0x10);
              if (cVar16 == '\0') goto LAB_100629144;
              pcVar20 = local_58;
              builtin_strncpy(local_58,"\x02\x02\"\b",4);
              local_54 = "Assertion failure";
              local_4c = 0x822;
              pcVar24 = "table->name != nullptr";
              goto LAB_10062928b;
            }
            uVar32 = uVar32 + 1;
            lVar30 = lVar30 + 0x28;
          } while (uVar32 < *(ulong *)(lVar26 + 0x18));
          uVar18 = uVar18 + uVar32;
        }
        lVar25 = lVar25 + 1;
      } while (lVar25 != param_3);
      uVar18 = *(ulong *)(param_1 + 0x28);
      if (uVar18 == 0) {
        uVar23 = 0;
      }
      else {
        lVar25 = param_1 + 0x90;
        uVar17 = 0;
        uVar32 = 0;
        do {
          if (*(long *)(*(long *)(param_1 + 0x30) + 0x10 + uVar32 * 0x28) != 0) {
            lVar29 = *(long *)(param_1 + 0x30) + uVar32 * 0x28;
            uVar18 = 0;
            do {
              lVar26 = *(long *)(lVar29 + 0x18);
              if (*(int *)(lVar26 + 8 + uVar18 * 0x18) != 0) {
                puVar31 = (uint *)(lVar26 + uVar18 * 0x18 + 8);
                FUN_1005389ba(param_1 + 0x70);
                uVar21 = (ulong)*puVar31;
                if (*puVar31 == uVar17) {
                  puVar22 = (undefined1 *)FUN_1001c63e1(0x10);
                  if (puVar22 == (undefined1 *)0x0) {
                    uVar23 = FUN_1001cc310();
                    cVar16 = _os_log_type_enabled(uVar23,0x10);
                    if (cVar16 == '\0') goto LAB_100629144;
                    pcVar20 = local_b8;
                    builtin_strncpy(local_b8,"\x02\x02\"\b",4);
                    local_b4 = "Assertion failure";
                    local_ac = 0x822;
                    pcVar24 = "newMap != nullptr";
                    goto LAB_10062928b;
                  }
                  *puVar22 = (char)uVar32;
                  puVar22[1] = (char)uVar18 + '\x01';
                  *(undefined8 *)(puVar22 + 8) = 0;
                  lVar26 = (ulong)*puVar31 * 0x10 + lVar25;
                  do {
                    lVar30 = lVar26;
                    lVar26 = *(long *)(lVar30 + 8);
                  } while (lVar26 != 0);
                  *(undefined1 **)(lVar30 + 8) = puVar22;
                }
                else {
                  if ((*(char *)(lVar25 + uVar21 * 0x10) != '\0') ||
                     (*(char *)(uVar21 * 0x10 + lVar25 + 1) != '\0')) {
                    uVar23 = FUN_1001cc310();
                    cVar16 = _os_log_type_enabled(uVar23,0x10);
                    if (cVar16 != '\0') {
                      builtin_strncpy(local_b8,"\x02\x02\"\b",4);
                      local_b4 = "Assertion failure";
                      local_ac = 0x822;
                      local_aa = 
                      "mTrackFieldMap[columnDef->trackField].tableIndex == 0 and mTrackFieldMap[columnDef->trackField].columnIndex == 0"
                      ;
                      __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: (%{public}s)",
                                          local_b8,0x16);
                    }
                    FUN_1001782e9(0,0);
                    uVar21 = (ulong)*puVar31;
                  }
                  *(char *)(lVar25 + uVar21 * 0x10) = (char)uVar32;
                  *(char *)(param_1 + 0x91 + uVar21 * 0x10) = (char)uVar18 + '\x01';
                  uVar17 = (uint)uVar21;
                }
              }
              uVar18 = uVar18 + 1;
            } while (uVar18 < *(ulong *)(lVar29 + 0x10));
            uVar18 = *(ulong *)(param_1 + 0x28);
          }
          uVar32 = uVar32 + 1;
          uVar23 = 0;
        } while (uVar32 < uVar18);
      }
    }
  }
LAB_100629152:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar23;
}

