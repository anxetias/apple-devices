// name: FUN_1002a1bf9
// address: 1002a1bf9

int FUN_1002a1bf9(undefined8 param_1,long param_2,uint param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == 0) {
    iVar7 = 0;
  }
  else {
    uVar6 = (ulong)param_3;
    iVar7 = 0;
    do {
      lVar4 = FUN_1004983e2(param_1,*(undefined4 *)(param_2 + 0xcb4));
      if (lVar4 == 0) {
        uVar5 = FUN_1001cc310();
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "imageInfo != nullptr";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar5);
        FUN_1001782e9(0,0);
      }
      else {
        iVar2 = FUN_1002a7da8(lVar4,param_2,param_4,param_5,param_6);
        if ((iVar2 != -0x80) && (iVar2 != 0)) {
          uVar5 = FUN_1001cc310();
          uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
          (*(code *)PTR__objc_release_10082c7b0)(uVar5);
        }
        iVar3 = iVar7;
        if (iVar7 == 0) {
          iVar3 = iVar2;
        }
        if (iVar2 != 0) {
          iVar7 = iVar3;
        }
      }
      param_2 = param_2 + 0xd38;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar7;
}

