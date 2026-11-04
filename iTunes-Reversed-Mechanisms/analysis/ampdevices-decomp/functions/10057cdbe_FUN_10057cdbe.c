// name: FUN_10057cdbe
// address: 10057cdbe

void FUN_10057cdbe(int param_1,long param_2,undefined4 param_3,long *param_4)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  size_t sVar7;
  ulong uVar8;
  void *pvVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 local_25c [512];
  undefined4 local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 != 0 && param_1 == 0x46494c45) {
    cVar2 = FUN_10017cbd0(param_2);
    if (cVar2 != '\0') {
      iVar3 = FUN_10017d489(param_2,local_25c);
      if (iVar3 != -0x80) {
        if (iVar3 == 0) {
          pvVar9 = (void *)param_4[1];
          local_5c = param_3;
          if (pvVar9 < (void *)param_4[2]) {
            _memcpy(pvVar9,local_25c,0x204);
            lVar10 = (long)pvVar9 + 0x204;
          }
          else {
            lVar10 = (long)pvVar9 - *param_4 >> 2;
            uVar6 = lVar10 * -0x7f01fc07f01fc07f + 1;
            if (0x7f01fc07f01fc0 < uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_10057db00(param_4);
            }
            lVar5 = param_4[2] - *param_4 >> 2;
            uVar8 = lVar5 * 0x1fc07f01fc07f02;
            if (uVar6 < uVar8) {
              uVar6 = uVar8;
            }
            uVar8 = 0x7f01fc07f01fc0;
            if ((ulong)(lVar5 * -0x7f01fc07f01fc07f) < 0x3f80fe03f80fe0) {
              uVar8 = uVar6;
            }
            if (uVar8 == 0) {
              auVar11 = ZEXT816(0);
            }
            else {
              auVar11 = FUN_10057db10(param_4 + 2);
            }
            lVar5 = auVar11._0_8_;
            lVar10 = lVar10 * 4;
            pvVar9 = (void *)(lVar5 + lVar10);
            _memcpy(pvVar9,local_25c,0x204);
            lVar10 = lVar10 + lVar5 + 0x204;
            sVar7 = param_4[1] - *param_4;
            pvVar9 = (void *)((long)pvVar9 - sVar7);
            _memcpy(pvVar9,(void *)*param_4,sVar7);
            pvVar1 = (void *)*param_4;
            *param_4 = (long)pvVar9;
            param_4[1] = lVar10;
            param_4[2] = auVar11._8_8_ * 0x204 + lVar5;
            if (pvVar1 != (void *)0x0) {
              operator_delete(pvVar1);
            }
          }
          param_4[1] = lVar10;
        }
        else {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = iVar3;
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

