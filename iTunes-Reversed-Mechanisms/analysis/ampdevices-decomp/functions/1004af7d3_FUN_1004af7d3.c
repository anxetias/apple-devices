// name: FUN_1004af7d3
// address: 1004af7d3

void FUN_1004af7d3(long param_1,char param_2,undefined1 param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  undefined8 local_460;
  undefined1 local_458 [1056];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((*(char *)(param_1 + 0x778) != '\0') ||
     (((*(int *)(param_1 + 0x140) == 0x66696c65 && (*(int *)(param_1 + 0x1304) != 0x636f7079)) &&
      (*(int *)(param_1 + 0x7d8) < 0)))) {
    cVar1 = FUN_1004aa626(param_1);
    if ((cVar1 == '\0') || (*(char *)(param_1 + 0x778) == '\0')) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
        FUN_1004bc116(param_1,param_2,param_3);
        return;
      }
      goto LAB_1004af9e9;
    }
    local_460 = 0;
    cVar1 = FUN_1004aa626(param_1);
    if ((cVar1 == '\0') || (*(char *)(param_1 + 0x778) == '\0')) goto LAB_1004af9c7;
    *(undefined1 *)(param_1 + 0x642) = 0;
    if (*(char *)(param_1 + 0x640) == '\0') {
      bVar4 = true;
      cVar1 = '\0';
    }
    else {
      uVar2 = FUN_1001705fc(*(undefined8 *)(param_1 + 0x218));
      local_460 = uVar2;
      _memcpy(local_458,(void *)(param_1 + 0x220),0x420);
      cVar1 = FUN_1004bc2cf(param_1,uVar2,local_458);
      FUN_10017060f(uVar2);
      bVar4 = cVar1 != '\0' || param_2 != '\0';
    }
    if (bVar4 && cVar1 == '\0') {
      cVar1 = FUN_1004bc991(param_1,&local_460,local_458);
      if (cVar1 != '\0') {
        cVar1 = FUN_1004bc2cf(param_1,local_460,local_458);
        FUN_10017060f(local_460);
        goto LAB_1004af970;
      }
LAB_1004af98b:
      FUN_1004acdd7(param_1);
    }
    else {
LAB_1004af970:
      if (cVar1 == '\0') goto LAB_1004af98b;
      cVar1 = FUN_1004aa626(param_1);
      if (cVar1 != '\0') {
        *(undefined1 *)(param_1 + 0x210) = 1;
      }
    }
    for (lVar3 = FUN_1004aa784(param_1); lVar3 != 0; lVar3 = FUN_1004ab52d(lVar3)) {
      FUN_1004af7d3(lVar3,param_2,param_3);
    }
  }
LAB_1004af9c7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
LAB_1004af9e9:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

