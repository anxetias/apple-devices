// name: FUN_100505888
// address: 100505888

undefined8
FUN_100505888(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  char cVar1;
  long lVar2;
  undefined1 local_48 [40];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_2 == '\0') {
    lVar2 = *(long *)(param_2 + 0x20) + (ulong)*(uint *)(param_5 + 0x428);
    *(ulong *)(param_5 + 0x438) =
         (*(long *)(param_5 + 0x438) - (lVar2 - 1U) % (ulong)*(uint *)(param_5 + 0x428)) + lVar2 +
         -1;
    FUN_1001e222d(param_3,local_48);
    cVar1 = FUN_1001e4e7c("thm",local_48,1);
    if (cVar1 == '\0') {
      cVar1 = FUN_1001e4e7c("dat",local_48,1);
      if (cVar1 == '\0') {
        *(int *)(param_5 + 0x430) = *(int *)(param_5 + 0x430) + 1;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

