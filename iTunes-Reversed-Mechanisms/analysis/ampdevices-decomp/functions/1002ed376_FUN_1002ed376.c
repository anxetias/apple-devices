// name: FUN_1002ed376
// address: 1002ed376

long * FUN_1002ed376(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  byte bVar3;
  long *plVar4;
  void *pvVar5;
  char cVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  void *pvVar13;
  undefined8 uVar14;
  undefined1 uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 != 0) {
    lVar7 = FUN_1002edcde();
    if (lVar7 != 0) {
      plVar8 = operator_new(0xc0,(nothrow_t *)PTR_nothrow_10082c970);
      if (plVar8 != (long *)0x0) {
        bVar3 = *(byte *)(param_1 + 0x60);
        puVar10 = *(undefined8 **)(param_1 + 0x38);
        plVar8[0x15] = 0;
        plVar8[0x13] = 0;
        plVar8[0x14] = 0;
        plVar8[8] = 0;
        plVar8[9] = 0;
        plVar8[10] = 0;
        plVar8[0xb] = 0;
        plVar8[0xc] = 0;
        plVar8[0xd] = 0;
        plVar8[0xe] = 0;
        plVar8[0xf] = 0;
        plVar8[0x10] = 0;
        *plVar8 = param_1;
        plVar8[1] = lVar7;
        plVar8[2] = 0;
        plVar8[3] = 0;
        plVar8[4] = 0;
        plVar8[5] = 0;
        plVar8[6] = 0;
        puVar9 = operator_new(0x28,(nothrow_t *)PTR_nothrow_10082c970);
        if (puVar9 == (undefined8 *)0x0) {
          plVar8[0x11] = 0;
          uVar14 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar14,0x10);
          if (cVar6 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "_visited_tracks != __null";
            __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else {
          puVar9[2] = 0;
          puVar9[3] = 0;
          *puVar9 = 0;
          puVar9[1] = 0;
          *(undefined4 *)(puVar9 + 4) = 0x3f800000;
          plVar8[0x11] = (long)puVar9;
        }
        if (puVar10 == (undefined8 *)0x0) {
          puVar10 = operator_new(0x28,(nothrow_t *)PTR_nothrow_10082c970);
          if (puVar10 != (undefined8 *)0x0) {
            puVar10[2] = 0;
            puVar10[3] = 0;
            *puVar10 = 0;
            puVar10[1] = 0;
            *(undefined4 *)(puVar10 + 4) = 0x3f800000;
            uVar15 = 1;
            goto LAB_1002ed524;
          }
          plVar8[0x12] = 0;
          uVar14 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar14,0x10);
          if (cVar6 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "_fetched_tracks_cache != __null";
            __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          uVar15 = 1;
          FUN_1001782e9(0,0);
        }
        else {
          uVar15 = 0;
LAB_1002ed524:
          plVar8[0x12] = (long)puVar10;
        }
        *(undefined1 *)((long)plVar8 + 0xb9) = uVar15;
        plVar8[7] = 0x7fffffff;
        *(byte *)(plVar8 + 0x17) = bVar3 ^ 1;
        *(undefined2 *)((long)plVar8 + 0xba) = 0;
        lVar7 = *(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40);
        if (lVar7 != 0) {
          lVar7 = lVar7 >> 3;
          lVar16 = 0;
          do {
            plVar4 = *(long **)(*(long *)(param_1 + 0x40) + lVar16 * 8);
            lVar11 = (**(code **)(*plVar4 + 0x18))(plVar4,plVar8);
            if (lVar11 == 0) {
              uVar14 = FUN_1001cc310();
              cVar6 = _os_log_type_enabled(uVar14,0x10);
              if (cVar6 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "state != __null";
                __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_58,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              goto LAB_1002ed489;
            }
            plVar4 = (long *)plVar8[0x14];
            if (plVar4 < (long *)plVar8[0x15]) {
              *plVar4 = lVar11;
              plVar19 = plVar4 + 1;
            }
            else {
              pvVar5 = (void *)plVar8[0x13];
              lVar17 = (long)plVar4 - (long)pvVar5 >> 3;
              uVar2 = lVar17 + 1;
              if (0x1fffffffffffffff < uVar2) {
                FUN_1002f0e94();
                goto LAB_1002ed85a;
              }
              uVar12 = plVar8[0x15] - (long)pvVar5;
              uVar18 = (long)uVar12 >> 2;
              if (uVar18 <= uVar2) {
                uVar18 = uVar2;
              }
              if (0x7ffffffffffffff7 < uVar12) {
                uVar18 = 0x1fffffffffffffff;
              }
              if (uVar18 == 0) {
                pvVar13 = (void *)0x0;
              }
              else {
                if (0x1fffffffffffffff < uVar18) {
                    /* WARNING: Subroutine does not return */
                  FUN_1001082d0();
                }
                pvVar13 = operator_new(uVar18 * 8);
              }
              plVar1 = (long *)((long)pvVar13 + lVar17 * 8);
              plVar19 = plVar1 + 1;
              *plVar1 = lVar11;
              _memcpy(pvVar13,pvVar5,(long)plVar4 - (long)pvVar5);
              plVar8[0x13] = (long)pvVar13;
              plVar8[0x14] = (long)plVar19;
              plVar8[0x15] = (long)((long)pvVar13 + uVar18 * 8);
              if (pvVar5 != (void *)0x0) {
                operator_delete(pvVar5);
              }
            }
            plVar8[0x14] = (long)plVar19;
            lVar16 = lVar16 + 1;
          } while (lVar7 + (ulong)(lVar7 == 0) != lVar16);
          plVar8[0x16] = lVar7 + -1;
        }
        goto LAB_1002ed489;
      }
      uVar14 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar14,0x10);
      if (cVar6 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "playlist != __null";
        __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  plVar8 = (long *)0x0;
LAB_1002ed489:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return plVar8;
  }
LAB_1002ed85a:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

