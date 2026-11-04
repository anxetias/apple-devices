// name: FUN_100635c29
// address: 100635c29

int FUN_100635c29(undefined8 param_1,ushort *param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined4 local_38;
  uint local_34;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar3 = FUN_10063534d(param_1,4,param_2,2);
  if (iVar3 == 0) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar1 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 != '\0') {
      local_38 = 0x4000100;
      local_34 = (uint)*param_2;
      __os_log_impl(0x100000000,uVar1,1,"currentLimit = %u",&local_38,8);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

