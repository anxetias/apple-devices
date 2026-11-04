// name: FUN_10041672c
// address: 10041672c

bool FUN_10041672c(ulong param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  bool bVar5;
  long local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50 = 0;
  bVar5 = true;
  if (1 < param_1) {
    bVar5 = false;
    iVar2 = FUN_10041503c(0,&local_50);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        uVar3 = FUN_10041576c(local_50);
        iVar2 = FUN_1000e0dc0(uVar3,param_1,0);
        bVar5 = iVar2 == 0;
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
        bVar5 = false;
      }
    }
    if (local_50 != 0) {
      FUN_1004152d5(&local_50,0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

