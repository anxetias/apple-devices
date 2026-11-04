// name: FUN_1004a090e
// address: 1004a090e

int FUN_1004a090e(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **local_78;
  undefined8 local_70;
  undefined ***local_58;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1003c59c2();
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      local_78 = &PTR_FUN_10085cd38;
      local_70 = param_1;
      local_58 = &local_78;
      FUN_100321737(&local_78);
      if (local_58 == &local_78) {
        lVar3 = 0x20;
      }
      else {
        lVar3 = 0x28;
        if (local_58 == (undefined ***)0x0) goto LAB_1004a09db;
      }
      (**(code **)((long)*local_58 + lVar3))();
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = iVar2;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
    }
  }
LAB_1004a09db:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

