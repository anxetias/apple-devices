// name: FUN_1002a09bb
// address: 1002a09bb

int FUN_1002a09bb(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong uVar6;
  void *pvVar7;
  undefined4 local_298;
  char *local_294;
  undefined2 local_28c;
  int local_28a;
  undefined1 local_278 [64];
  int local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_2 = 0;
  pvVar4 = operator_new__(0xd260,(nothrow_t *)PTR_nothrow_10082c970);
  if (pvVar4 == (void *)0x0) {
    uVar5 = FUN_1001cc310();
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      local_22a = "imageFolderSpecArray != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    FUN_1001782e9(0,0);
    iVar3 = -0x6c;
  }
  else {
    uVar6 = 0;
    pvVar7 = pvVar4;
    do {
      FUN_1001e04f5("F",&local_238);
      if (uVar6 < 10) {
        uVar2 = local_238 + 1;
        local_238 = CONCAT22(local_238._2_2_,(short)uVar2);
        *(undefined2 *)((long)&local_238 + (ulong)(uVar2 & 0xffff) * 2) = 0x30;
      }
      FUN_1001e1b6d(uVar6,local_278);
      FUN_1001e1890(local_278,&local_238);
      iVar3 = FUN_10017ecc9(param_1,&local_238,pvVar7,0);
      if (iVar3 != 0) {
        iVar3 = FUN_100181256(param_1,&local_238,pvVar7);
        if (iVar3 != 0) {
          if (iVar3 != -0x80) {
            uVar5 = FUN_1001cc310();
            uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
            cVar1 = _os_log_type_enabled(uVar5,0x10);
            if (cVar1 != '\0') {
              local_298 = 0x8220202;
              local_294 = "Assertion failure";
              local_28c = 0x400;
              local_28a = iVar3;
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_298,0x12);
            }
            (*(code *)PTR__objc_release_10082c7b0)(uVar5);
          }
          operator_delete__(pvVar4);
          goto LAB_1002a0b3b;
        }
      }
      uVar6 = uVar6 + 1;
      pvVar7 = (void *)((long)pvVar7 + 0x420);
    } while (uVar6 != 0x33);
    *param_2 = pvVar4;
    iVar3 = 0;
  }
LAB_1002a0b3b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

