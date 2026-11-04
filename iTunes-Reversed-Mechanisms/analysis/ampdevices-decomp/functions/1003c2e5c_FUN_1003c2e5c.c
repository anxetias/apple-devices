// name: FUN_1003c2e5c
// address: 1003c2e5c

undefined8 FUN_1003c2e5c(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  int local_4b4;
  int local_4b0;
  int local_4ac;
  int local_4a8;
  int local_4a4;
  undefined1 local_488 [1120];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_1 + 0x1c) == 0x44574e4c) {
    FUN_10031bd9c(param_2,&local_4b4);
    if (*(int *)(param_1 + 0x490) == 0) {
      FUN_1002b3b9a(param_2,param_1 + 0x20);
      cVar1 = FUN_1003b6f88(*(undefined4 *)(param_2 + 0x3c),local_488,
                            *(undefined4 *)(param_1 + 0x1c),param_1 + 0x20);
      if (cVar1 != '\0') {
LAB_1003c2f2d:
        *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x3c);
        FUN_1002b3b9a(param_2,param_1 + 0x20);
        uVar2 = 1;
        goto LAB_1003c2ee6;
      }
    }
    else if (local_4b0 == *(int *)(param_1 + 0x48c)) {
      uVar2 = 0;
      if ((local_4a4 != *(int *)(param_1 + 0x498)) || (local_4ac != *(int *)(param_1 + 0x490)))
      goto LAB_1003c2ee6;
      if ((local_4a8 == *(int *)(param_1 + 0x494)) && (local_4b4 == *(int *)(param_1 + 0x488)))
      goto LAB_1003c2f2d;
    }
  }
  uVar2 = 0;
LAB_1003c2ee6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

