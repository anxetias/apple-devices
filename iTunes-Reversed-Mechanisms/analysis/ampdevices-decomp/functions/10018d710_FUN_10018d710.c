// name: FUN_10018d710
// address: 10018d710

void FUN_10018d710(long param_1)

{
  char cVar1;
  undefined8 local_468;
  undefined8 *local_460;
  undefined8 local_458;
  code *local_450;
  code *local_448;
  undefined1 local_440 [1056];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_460 = &local_468;
  local_468 = 0;
  local_458 = 0x44802000000;
  local_450 = FUN_10018d82b;
  local_448 = FUN_10018d842;
  cVar1 = FUN_10018d54e(*(undefined8 *)(param_1 + 0x20),local_440);
  if (cVar1 == '\0') {
    FUN_10017060f(*(undefined8 *)(param_1 + 0x28));
    FUN_10017060f(*(undefined8 *)(param_1 + 0x30));
  }
  else {
    _dispatch_async(PTR___dispatch_main_q_10082cb60);
  }
  FUN_10017060f(*(undefined8 *)(param_1 + 0x20));
  __Block_object_dispose(&local_468,8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

