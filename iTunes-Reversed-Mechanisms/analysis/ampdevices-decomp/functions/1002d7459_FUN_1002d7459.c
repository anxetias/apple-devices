// name: FUN_1002d7459
// address: 1002d7459

void FUN_1002d7459(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  uint local_38;
  undefined4 local_34;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar1 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
  puVar4 = DAT_1008c5d80;
  if (cVar2 != '\0') {
    local_38 = local_38 & 0xffff0000;
    __os_log_impl(0x100000000,uVar1,1,"",&local_38,2);
    puVar4 = DAT_1008c5d80;
  }
  do {
    if (puVar4 == (undefined8 *)0x0) {
LAB_1002d7575:
      FUN_1002d5c7c();
      if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      return;
    }
    if ((puVar4[7] != 0) && (cVar2 = FUN_100170633(puVar4[7],param_1), cVar2 != '\0')) {
      if (param_2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = _DADissenterGetStatus(param_2);
      }
      *(undefined4 *)(puVar4 + 8) = uVar3;
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar1 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar2 != '\0') {
        local_34 = *(undefined4 *)(puVar4 + 8);
        local_38 = 0x4000100;
        __os_log_impl(0x100000000,uVar1,1,"result is %d",&local_38,8);
      }
      FUN_10017060f(puVar4[7]);
      puVar4[7] = 0;
      goto LAB_1002d7575;
    }
    puVar4 = (undefined8 *)*puVar4;
  } while( true );
}

