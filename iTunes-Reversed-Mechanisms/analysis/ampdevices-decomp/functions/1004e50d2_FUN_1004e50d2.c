// name: FUN_1004e50d2
// address: 1004e50d2

void FUN_1004e50d2(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  undefined4 local_38;
  undefined8 local_34;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(undefined8 *)(param_1 + 0x153b0) = *(undefined8 *)(param_1 + 0x7180);
  uVar3 = FUN_1004e4e24();
  *(long *)(param_1 + 0x153b0) = *(long *)(param_1 + 0x153b0) + (ulong)uVar3;
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar1 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar2 != '\0') {
    local_34 = *(undefined8 *)(param_1 + 0x153b0);
    local_38 = 0x8000100;
    __os_log_impl(0x100000000,uVar1,1,"stats> reservedDiskBytes = %llu",&local_38,0xc);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_100321e5c();
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

