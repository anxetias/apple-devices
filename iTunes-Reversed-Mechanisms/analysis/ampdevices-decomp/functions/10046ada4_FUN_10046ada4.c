// name: FUN_10046ada4
// address: 10046ada4

int FUN_10046ada4(void)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  int local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar3 = (undefined8 *)FUN_10039a28c();
  iVar2 = (**(code **)*puVar3)(puVar3);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      cVar1 = FUN_1001cd44e("log-mlmedialibrary",0,0);
      if (cVar1 != '\0') {
        FUN_1001ee6ff(FUN_1004536e4,0,0,0,0,"");
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x400;
        local_2a = iVar2;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_38,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

