// name: FUN_100451790
// address: 100451790

int FUN_100451790(uint param_1,char param_2,long *param_3)

{
  char cVar1;
  int iVar2;
  ID IVar3;
  undefined8 uVar4;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  IVar3 = MediaLibraryObserver::getInstance(0x10088e400,PTR_s_getInstance_10088d2d0);
  local_60 = 0;
  iVar2 = FUN_1004531bb(IVar3,0);
  if (iVar2 != 0) goto LAB_1004518c1;
  if ((param_1 & 0x400) == 0) {
    if (param_2 != '\0') {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "forceUpdate == false";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    FUN_100453b95(IVar3,0,0x400,param_2,&local_60);
    (*(code *)PTR__objc_release_10082c7b0)(local_60);
  }
  else {
    iVar2 = FUN_100453b95(IVar3,0,param_1 & 0x400,param_2,&local_60);
    if (((iVar2 != -0x80) && (iVar2 != 0)) && (iVar2 != 0x6b8)) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    if (local_60 == 0) {
      if (iVar2 == 0x6b8) {
        iVar2 = 0x6bb;
      }
      goto LAB_1004518c1;
    }
    if (iVar2 != 0) goto LAB_1004518c1;
    if (param_3 == (long *)0x0) {
      (*(code *)PTR__objc_release_10082c7b0)();
    }
    else {
      *param_3 = local_60;
    }
    local_60 = 0;
  }
  iVar2 = 0;
LAB_1004518c1:
  (*(code *)PTR__objc_release_10082c7b0)(0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

