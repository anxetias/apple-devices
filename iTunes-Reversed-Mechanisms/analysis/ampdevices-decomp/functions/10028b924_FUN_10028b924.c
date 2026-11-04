// name: FUN_10028b924
// address: 10028b924

int FUN_10028b924(void)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined4 local_28;
  int local_24;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar3 = FUN_10000b9d0(0xffffffffffffffff);
  if (iVar3 != 0) {
    if (DAT_1008b5bb0 != -1) {
      _dispatch_once(&DAT_1008b5bb0,&PTR___NSConcreteGlobalBlock_100845020);
    }
    uVar1 = DAT_1008b5ba8;
    cVar2 = _os_log_type_enabled(DAT_1008b5ba8,0x10);
    if (cVar2 != '\0') {
      local_28 = 0x4000100;
      local_24 = iVar3;
      __os_log_impl(0x100000000,uVar1,0x10,"ADIProvisioningErase failed with error %d.",&local_28,8)
      ;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

