// name: FUN_10057d7f6
// address: 10057d7f6

void FUN_10057d7f6(long param_1,undefined4 param_2,long *param_3)

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
  undefined4 local_268;
  char *local_264;
  undefined2 local_25c;
  int local_25a;
  undefined4 local_248;
  char *local_244;
  undefined2 local_23c;
  char *local_23a;
  undefined4 local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_248 = 0x8220202;
      local_244 = "Assertion failure";
      local_23c = 0x822;
      local_23a = "fileSpec != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_248,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    iVar3 = FUN_10017d489(param_1,&local_248);
    if (iVar3 != -0x80) {
      if (iVar3 == 0) {
        pvVar9 = (void *)param_3[1];
        local_48 = param_2;
        if (pvVar9 < (void *)param_3[2]) {
          _memcpy(pvVar9,&local_248,0x204);
          lVar10 = (long)pvVar9 + 0x204;
        }
        else {
          lVar10 = (long)pvVar9 - *param_3 >> 2;
          uVar6 = lVar10 * -0x7f01fc07f01fc07f + 1;
          if (0x7f01fc07f01fc0 < uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_10057db00(param_3);
          }
          lVar5 = param_3[2] - *param_3 >> 2;
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
            auVar11 = FUN_10057db10(param_3 + 2);
          }
          lVar5 = auVar11._0_8_;
          lVar10 = lVar10 * 4;
          pvVar9 = (void *)(lVar5 + lVar10);
          _memcpy(pvVar9,&local_248,0x204);
          lVar10 = lVar10 + lVar5 + 0x204;
          sVar7 = param_3[1] - *param_3;
          pvVar9 = (void *)((long)pvVar9 - sVar7);
          _memcpy(pvVar9,(void *)*param_3,sVar7);
          pvVar1 = (void *)*param_3;
          *param_3 = (long)pvVar9;
          param_3[1] = lVar10;
          param_3[2] = auVar11._8_8_ * 0x204 + lVar5;
          if (pvVar1 != (void *)0x0) {
            operator_delete(pvVar1);
          }
        }
        param_3[1] = lVar10;
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_268 = 0x8220202;
          local_264 = "Assertion failure";
          local_25c = 0x400;
          local_25a = iVar3;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_268,0x12);
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

