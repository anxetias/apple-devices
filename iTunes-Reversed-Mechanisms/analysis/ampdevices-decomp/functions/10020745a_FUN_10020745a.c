// name: FUN_10020745a
// address: 10020745a

undefined8 FUN_10020745a(long param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  char *pcVar3;
  undefined8 uVar4;
  char local_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  LOCK();
  puVar1 = (uint *)(param_1 + 0x1a8);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  uVar4 = 0;
  _snprintf(local_128,0x100,"/tmp/%d",(ulong)uVar2);
  pcVar3 = _strdup(local_128);
  *(char **)(param_2 + 0x10) = pcVar3;
  if (pcVar3 == (char *)0x0) {
    uVar4 = 7;
  }
  else {
    *(byte *)(param_2 + 0x20) = *(byte *)(param_2 + 0x20) | 0x10;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

