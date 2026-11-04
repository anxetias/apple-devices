// name: FUN_100251d1a
// address: 100251d1a

int FUN_100251d1a(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_60;
  undefined8 local_58;
  char local_50;
  int local_4c;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(&local_60,0x18);
  local_50 = '\x01';
  local_60 = param_1;
  local_58 = param_2;
  iVar2 = FUN_1001ee6ff(FUN_10025ae2f,&local_60,0,0,0,"");
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      iVar2 = local_4c;
      if (local_50 == '\x01') {
        uVar3 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118;
        do {
          FUN_1001727b4(DAT_100711ee8,uVar3,0);
          iVar2 = local_4c;
        } while (local_50 != '\0');
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = iVar2;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

