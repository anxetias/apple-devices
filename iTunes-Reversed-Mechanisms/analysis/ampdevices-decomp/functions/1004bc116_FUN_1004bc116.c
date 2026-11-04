// name: FUN_1004bc116
// address: 1004bc116

void FUN_1004bc116(long param_1,char param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 local_460;
  undefined1 local_458 [1056];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_460 = 0;
  cVar1 = FUN_1004aa626();
  if ((((cVar1 == '\0') || (*(char *)(param_1 + 0x778) != '\0')) ||
      (*(int *)(param_1 + 0x140) != 0x66696c65)) ||
     ((*(int *)(param_1 + 0x1304) == 0x636f7079 || (-1 < *(int *)(param_1 + 0x7d8)))))
  goto LAB_1004bc2a8;
  FUN_1001e9de0(param_1 + 0x1288);
  *(undefined1 *)(param_1 + 0x642) = 0;
  if (*(long *)(param_1 + 0x1258) == 0) {
    bVar3 = true;
    if ((*(char *)(param_1 + 0x1250) == '\x01') && (*(char *)(param_1 + 0x640) != '\0')) {
      uVar2 = FUN_1001705fc(*(undefined8 *)(param_1 + 0x218));
      local_460 = uVar2;
      _memcpy(local_458,(void *)(param_1 + 0x220),0x420);
      cVar1 = FUN_1004bc2cf(param_1,uVar2,local_458);
      FUN_10017060f(uVar2);
      bVar3 = param_2 != '\0' || cVar1 != '\0';
    }
    else {
      cVar1 = '\0';
    }
    if (bVar3 && cVar1 == '\0') {
      cVar1 = FUN_1004bc991(param_1,&local_460,local_458);
      if (cVar1 != '\0') {
        cVar1 = FUN_1004bc2cf(param_1,local_460,local_458);
        FUN_10017060f(local_460);
        goto LAB_1004bc27e;
      }
    }
    else {
LAB_1004bc27e:
      if (cVar1 != '\0') {
        cVar1 = FUN_1004aa626(param_1);
        if (cVar1 != '\0') {
          *(undefined1 *)(param_1 + 0x210) = 1;
        }
        goto LAB_1004bc2a0;
      }
    }
    FUN_1004acdd7(param_1);
  }
  else if (param_3 != '\0') {
    *(undefined8 *)(param_1 + 7000) = *(undefined8 *)(param_1 + 0x1b78);
  }
LAB_1004bc2a0:
  FUN_1001e9eb9(param_1 + 0x1288);
LAB_1004bc2a8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

