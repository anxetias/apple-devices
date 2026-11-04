// name: FUN_1002bedfb
// address: 1002bedfb

long * FUN_1002bedfb(long param_1,byte param_2,char param_3,undefined1 param_4,undefined1 param_5,
                    undefined2 param_6,undefined1 param_7,char param_8,undefined8 param_9,
                    undefined8 param_10)

{
  long *plVar1;
  void *pvVar2;
  char cVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  size_t sVar11;
  code *pcVar12;
  void *pvVar13;
  ulong uVar14;
  long *plVar15;
  undefined1 auVar16 [16];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1002bf0bc:
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "TrackDataIsValid(trackData)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar4 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar4,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      if (cVar3 == '\0') goto LAB_1002bf0bc;
    }
    if (param_3 != '\0' && (byte)((param_2 & 0xf) - 3) < 2) {
      plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
      if (plVar5 != (long *)0x0) {
        *plVar5 = 0;
        plVar5[1] = 0;
        plVar5[2] = 0;
        lVar6 = FUN_1002f930c(param_1);
        if (lVar6 != 0) {
          do {
            uVar7 = FUN_1004744bf(lVar6,0);
            if ((((((uVar7 & 0x218004) == 0 && (uVar7 & 0x402) != 0) &&
                  (cVar3 = FUN_1002bd328(lVar6), cVar3 != '\0')) &&
                 (lVar8 = FUN_1002bd7f7(lVar6,param_4,param_5,param_6,param_7,0,0), lVar8 != 0)) &&
                ((*(char *)(lVar8 + 0x45) == '\0' &&
                 (((param_2 & 0xf) != 4 || (*(int *)(lVar6 + 0x144) == 0)))))) &&
               ((param_8 == '\0' || (cVar3 = FUN_1004746c0(lVar6), cVar3 == '\0')))) {
              plVar15 = (long *)plVar5[1];
              if (plVar15 < (long *)plVar5[2]) {
                *plVar15 = lVar6;
                plVar15 = plVar15 + 1;
              }
              else {
                lVar8 = (long)plVar15 - *plVar5 >> 3;
                uVar7 = lVar8 + 1;
                if (uVar7 >> 0x3d != 0) {
                  FUN_1002c2cdc(plVar5);
                    /* WARNING: Does not return */
                  pcVar12 = (code *)invalidInstructionException();
                  (*pcVar12)();
                }
                uVar9 = plVar5[2] - *plVar5;
                uVar14 = (long)uVar9 >> 2;
                if (uVar14 <= uVar7) {
                  uVar14 = uVar7;
                }
                if (0x7ffffffffffffff7 < uVar9) {
                  uVar14 = 0x1fffffffffffffff;
                }
                if (uVar14 == 0) {
                  auVar16 = ZEXT816(0);
                }
                else {
                  auVar16 = FUN_100249b6c(plVar5 + 2);
                }
                lVar10 = auVar16._0_8_;
                plVar1 = (long *)(lVar10 + lVar8 * 8);
                *plVar1 = lVar6;
                plVar15 = (long *)(lVar10 + lVar8 * 8 + 8);
                sVar11 = plVar5[1] - *plVar5;
                pvVar13 = (void *)((long)plVar1 - sVar11);
                _memcpy(pvVar13,(void *)*plVar5,sVar11);
                pvVar2 = (void *)*plVar5;
                *plVar5 = (long)pvVar13;
                plVar5[1] = (long)plVar15;
                plVar5[2] = lVar10 + auVar16._8_8_ * 8;
                if (pvVar2 != (void *)0x0) {
                  operator_delete(pvVar2);
                }
              }
              plVar5[1] = (long)plVar15;
            }
            lVar6 = FUN_1002f9451(lVar6);
          } while (lVar6 != 0);
        }
        pcVar12 = FUN_1002bf534;
        if (param_3 < '\0') {
          pcVar12 = FUN_1002bf527;
        }
        FUN_1002bf230(*(undefined4 *)(param_1 + 0x2d08),plVar5,pcVar12,(int)param_3,param_9,param_10
                     );
        goto LAB_1002bf0e1;
      }
      uVar4 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar4,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "recentMoviesList != nullptr";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  plVar5 = (long *)0x0;
LAB_1002bf0e1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return plVar5;
}

