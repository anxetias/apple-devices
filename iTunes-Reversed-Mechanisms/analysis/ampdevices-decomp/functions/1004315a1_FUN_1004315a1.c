// name: FUN_1004315a1
// address: 1004315a1

void FUN_1004315a1(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  undefined8 local_34;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(undefined1 *)(param_1 + 0x6ac1) = 1;
  uVar2 = FUN_1004f00ba(*(undefined1 *)(param_1 + 0x14d05),*(undefined8 *)(param_1 + 0x151a0),
                        param_2);
  *(undefined8 *)(param_1 + 0x14d08) = uVar2;
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar2 = DAT_1008c75b8;
  cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar1 != '\0') {
    local_34 = *(undefined8 *)(param_1 + 0x14d08);
    local_38 = 0x8000100;
    __os_log_impl(0x100000000,uVar2,1,"sync> setting home photo library to 0x%016llX",&local_38,0xc)
    ;
  }
  FUN_100430e89(param_1 + 0x14f90,param_1 + 0x14fd0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

