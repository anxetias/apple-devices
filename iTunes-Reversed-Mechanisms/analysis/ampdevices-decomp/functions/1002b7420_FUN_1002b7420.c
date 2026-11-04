// name: FUN_1002b7420
// address: 1002b7420

bool FUN_1002b7420(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined4 local_248;
  char *local_244;
  undefined2 local_23c;
  int local_23a;
  undefined1 local_228 [520];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  bVar4 = false;
  iVar2 = FUN_10030666b(param_1,local_228,0);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      cVar1 = FUN_1001e4e7c("lrpub",local_228,0);
      bVar4 = true;
      if (cVar1 == '\0') {
        cVar1 = FUN_1001e4e7c("lrpluspub",local_228,0);
        bVar4 = cVar1 != '\0';
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_248 = 0x8220202;
        local_244 = "Assertion failure";
        local_23c = 0x400;
        local_23a = iVar2;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_248,0x12);
      }
      bVar4 = false;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

