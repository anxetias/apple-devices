// name: FUN_100393670
// address: 100393670

void FUN_100393670(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_258;
  char *local_254;
  undefined2 local_24c;
  int local_24a;
  short local_238 [260];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_100498c30(param_2,local_238);
  if ((iVar2 != -0x80) && (iVar2 != 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_258 = 0x8220202;
      local_254 = "Assertion failure";
      local_24c = 0x400;
      local_24a = iVar2;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_258,0x12);
    }
  }
  if (local_238[0] != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    FUN_1001b8dfc(&local_258,local_238);
    cVar1 = FUN_10032f46e(uVar3,0,0,0,&local_258,5,0);
    FUN_1001b7a50(&local_258);
    if (cVar1 != '\0') {
      *(undefined1 *)(*(long *)(param_2 + 8) + 0xb1) = 1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

