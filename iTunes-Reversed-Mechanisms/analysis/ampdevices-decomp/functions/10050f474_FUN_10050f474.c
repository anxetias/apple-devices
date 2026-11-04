// name: FUN_10050f474
// address: 10050f474

int FUN_10050f474(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_470;
  undefined4 local_468;
  char *local_464;
  undefined2 local_45c;
  int local_45a;
  undefined1 local_448 [1056];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1001888ba(param_1,"ShowRegistration",local_448,0);
  if (iVar2 == 0) {
    iVar2 = FUN_10017cc65(local_448,0x64617461,1,&local_470);
    if (iVar2 != -0x80) {
      if (iVar2 != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_468 = 0x8220202;
          local_464 = "Assertion failure";
          local_45c = 0x400;
          local_45a = iVar2;
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_468,0x12);
        }
        if (iVar2 != 0) goto LAB_10050f525;
      }
      iVar2 = FUN_10017d186(local_470,param_2,1,0,&local_468);
      FUN_10017cdfb(local_470);
    }
  }
LAB_10050f525:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

