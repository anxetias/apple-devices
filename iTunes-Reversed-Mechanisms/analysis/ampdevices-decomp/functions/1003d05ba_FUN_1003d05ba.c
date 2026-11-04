// name: FUN_1003d05ba
// address: 1003d05ba

long * FUN_1003d05ba(long *param_1,long param_2,uint param_3,uint param_4,uint param_5)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  size_t sVar10;
  ulong uVar11;
  long *plVar12;
  size_t sVar13;
  long lVar14;
  void *pvVar15;
  undefined1 auVar16 [16];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((int)param_3 < 8) {
    if (param_4 <= param_5) {
      param_2 = param_2 + (ulong)param_3 * 0x28;
      do {
        uVar11 = (ulong)param_4;
        uVar7 = *(ulong *)(param_2 + 0x20);
        if (uVar7 != 0) {
          uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
          uVar8 = (uVar8 >> 2 & 0x3333333333333333) + (uVar8 & 0x3333333333333333);
          uVar8 = ((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar8 >> 0x38 < 2) {
            uVar9 = (ulong)(param_4 & (int)uVar7 - 1U);
          }
          else {
            uVar9 = uVar11;
            if (uVar7 <= uVar11) {
              uVar9 = uVar11 % (uVar7 & 0xffffffff);
            }
          }
          plVar12 = *(long **)(*(long *)(param_2 + 0x18) + uVar9 * 8);
          if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
            do {
              uVar6 = plVar12[1];
              if (uVar6 == uVar11) {
                if (*(uint *)(plVar12 + 2) == param_4) {
                  pvVar1 = (void *)plVar12[3];
                  sVar13 = plVar12[4] - (long)pvVar1;
                  if (0 < (long)sVar13 >> 3) {
                    pvVar2 = (void *)param_1[1];
                    lVar3 = param_1[2];
                    if (lVar3 - (long)pvVar2 < (long)sVar13) {
                      lVar14 = (long)pvVar2 - *param_1 >> 3;
                      uVar7 = ((long)sVar13 >> 3) + lVar14;
                      if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_100283ee2(param_1);
                      }
                      uVar8 = lVar3 - *param_1;
                      uVar11 = (long)uVar8 >> 2;
                      if (uVar11 <= uVar7) {
                        uVar11 = uVar7;
                      }
                      if (0x7ffffffffffffff7 < uVar8) {
                        uVar11 = 0x1fffffffffffffff;
                      }
                      if (uVar11 == 0) {
                        auVar16 = ZEXT816(0);
                      }
                      else {
                        auVar16 = FUN_100249b6c(param_1 + 2);
                      }
                      lVar3 = auVar16._0_8_ + lVar14 * 8;
                      sVar10 = 0;
                      do {
                        *(undefined8 *)(lVar3 + sVar10) = *(undefined8 *)((long)pvVar1 + sVar10);
                        sVar10 = sVar10 + 8;
                      } while (sVar13 != sVar10);
                      _memcpy((void *)(sVar13 + lVar3),pvVar2,param_1[1] - (long)pvVar2);
                      lVar14 = param_1[1];
                      param_1[1] = (long)pvVar2;
                      sVar10 = (long)pvVar2 - *param_1;
                      pvVar15 = (void *)(lVar3 - sVar10);
                      _memcpy(pvVar15,(void *)*param_1,sVar10);
                      pvVar1 = (void *)*param_1;
                      *param_1 = (long)pvVar15;
                      param_1[1] = (lVar14 - (long)pvVar2) + (long)(sVar13 + lVar3);
                      param_1[2] = auVar16._0_8_ + auVar16._8_8_ * 8;
                      if (pvVar1 != (void *)0x0) {
                        operator_delete(pvVar1);
                      }
                    }
                    else {
                      if (pvVar1 != (void *)plVar12[4]) {
                        _memmove(pvVar2,pvVar1,sVar13);
                      }
                      param_1[1] = (long)pvVar2 + sVar13;
                    }
                  }
                  break;
                }
              }
              else {
                if ((byte)(uVar8 >> 0x38) < 2) {
                  uVar6 = uVar6 & uVar7 - 1;
                }
                else if (uVar7 <= uVar6) {
                  uVar6 = uVar6 % uVar7;
                }
                if (uVar6 != uVar9) break;
              }
              plVar12 = (long *)*plVar12;
            } while (plVar12 != (long *)0x0);
          }
        }
        param_4 = param_4 + 1;
      } while (param_4 <= param_5);
      goto LAB_1003d0666;
    }
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      local_4a = "inStartRevision <= inEndRevision";
      goto LAB_1003d090a;
    }
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      local_4a = "inObjectKind < kObjecTKind_NumObjectKinds";
LAB_1003d090a:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  FUN_1001782e9(0,0);
LAB_1003d0666:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

