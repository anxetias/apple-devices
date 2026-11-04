// name: FUN_100190e7d
// address: 100190e7d

int FUN_100190e7d(long param_1,undefined1 *param_2,undefined1 *param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 local_4b8 [80];
  undefined8 local_468;
  undefined8 local_460;
  int local_454;
  undefined1 local_450 [1056];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_468 = 0;
  local_460 = 0;
  local_454 = 0;
  lVar2 = _CFURLEnumeratorGetNextURL(*(undefined8 *)(param_1 + 0x430));
  if (lVar2 == 2) {
    iVar1 = -0x589;
  }
  else if (lVar2 == 3) {
    iVar1 = FUN_10016925a(local_460);
    FUN_10017060f(local_460);
  }
  else {
    puVar4 = local_450;
    if (param_2 != (undefined1 *)0x0) {
      puVar4 = param_2;
    }
    FUN_10016ffd2(local_468,puVar4,&local_454);
    iVar1 = local_454;
    if (local_454 == 0) {
      puVar3 = local_4b8;
      if (param_3 != (undefined1 *)0x0) {
        puVar3 = param_3;
      }
      iVar1 = FUN_10017d406(puVar4,1,puVar3,param_4);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

