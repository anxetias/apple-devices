// name: FUN_10012324a
// address: 10012324a

void FUN_10012324a(long param_1)

{
  undefined4 local_470;
  undefined4 uStack_46c;
  undefined4 local_468;
  undefined1 local_464 [1092];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  ___bzero(&local_470,0x44c);
  FUN_100117ae8(&local_468,0,1);
  *(ulong *)(param_1 + 0x48) = CONCAT44(uStack_46c,local_470);
  *(undefined4 *)(param_1 + 0x50) = local_468;
  _memcpy((void *)(param_1 + 0x54),local_464,0x440);
  *(undefined4 *)(param_1 + 0x4c) = 1;
  FUN_100117ae8(&local_470,0xac44,1);
  *(undefined4 *)(param_1 + 0x50) = local_470;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

