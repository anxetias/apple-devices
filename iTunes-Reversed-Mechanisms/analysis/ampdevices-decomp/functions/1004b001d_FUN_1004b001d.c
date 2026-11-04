// name: FUN_1004b001d
// address: 1004b001d

undefined4 FUN_1004b001d(undefined8 param_1,uint param_2,undefined2 *param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 local_1a8;
  char *local_1a4;
  undefined2 local_19c;
  char *local_19a;
  long local_148;
  int local_140;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_3 = 0;
  lVar2 = FUN_1001dfadb();
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_1a8 = 0x8220202;
      local_1a4 = "Assertion failure";
      local_19c = 0x822;
      local_19a = "urlCString != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_1a8,0x16);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0xffffff94;
  }
  else {
    FUN_1001a3e13(lVar2,&local_1a8);
    uVar4 = 0;
    if (local_140 - 1U < param_2 && local_148 != 0) {
      FUN_1001e5811(local_148,local_140,param_3);
      uVar4 = 0;
    }
  }
  FUN_1001c64c1(lVar2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

