// name: FUN_1001cc791
// address: 1001cc791

void FUN_1001cc791(void)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_28;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_1001eba08();
  uVar3 = FUN_1001cc35a();
  cVar2 = _os_log_type_enabled(uVar3,1);
  if (cVar2 != '\0') {
    local_24 = 0x59;
    if (cVar1 == '\0') {
      local_24 = 0x4e;
    }
    local_28 = 0x4000100;
    __os_log_impl(0x100000000,uVar3,1,"pm) power source is battery = %c",&local_28,8);
  }
  FUN_1001c6987(&DAT_1008c53d0,0x706d7363,cVar1,0,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

