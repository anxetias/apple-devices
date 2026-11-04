// name: FUN_10057d2b4
// address: 10057d2b4

void FUN_10057d2b4(undefined8 param_1,undefined4 param_2,long *param_3)

{
  void *pvVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  size_t sVar6;
  ulong uVar7;
  void *pvVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 local_25c [512];
  undefined4 local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_100169c4c(param_1,local_25c);
  if (cVar2 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "JRCFStringGetUString(appName, object.name)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    pvVar8 = (void *)param_3[1];
    local_5c = param_2;
    if (pvVar8 < (void *)param_3[2]) {
      _memcpy(pvVar8,local_25c,0x204);
      lVar9 = (long)pvVar8 + 0x204;
    }
    else {
      lVar9 = (long)pvVar8 - *param_3 >> 2;
      uVar5 = lVar9 * -0x7f01fc07f01fc07f + 1;
      if (0x7f01fc07f01fc0 < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_10057db00(param_3);
      }
      lVar4 = param_3[2] - *param_3 >> 2;
      uVar7 = lVar4 * 0x1fc07f01fc07f02;
      if (uVar5 < uVar7) {
        uVar5 = uVar7;
      }
      uVar7 = 0x7f01fc07f01fc0;
      if ((ulong)(lVar4 * -0x7f01fc07f01fc07f) < 0x3f80fe03f80fe0) {
        uVar7 = uVar5;
      }
      if (uVar7 == 0) {
        auVar10 = ZEXT816(0);
      }
      else {
        auVar10 = FUN_10057db10(param_3 + 2);
      }
      lVar4 = auVar10._0_8_;
      lVar9 = lVar9 * 4;
      pvVar8 = (void *)(lVar4 + lVar9);
      _memcpy(pvVar8,local_25c,0x204);
      lVar9 = lVar9 + lVar4 + 0x204;
      sVar6 = param_3[1] - *param_3;
      pvVar8 = (void *)((long)pvVar8 - sVar6);
      _memcpy(pvVar8,(void *)*param_3,sVar6);
      pvVar1 = (void *)*param_3;
      *param_3 = (long)pvVar8;
      param_3[1] = lVar9;
      param_3[2] = auVar10._8_8_ * 0x204 + lVar4;
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
      }
    }
    param_3[1] = lVar9;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

