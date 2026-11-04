// name: FUN_1004bfcd3
// address: 1004bfcd3

undefined8
FUN_1004bfcd3(void *param_1,char *param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  char cVar1;
  undefined1 local_228 [512];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_2 == '\0') {
    *(int *)(param_5 + 8) = *(int *)(param_5 + 8) + 1;
    FUN_1001e1c39(param_3,local_228);
    cVar1 = FUN_1001e3e43(local_228,0);
    if (cVar1 != '\0') {
      cVar1 = FUN_1001e4e7c("download",local_228,0);
      if (cVar1 != '\0') {
        *(undefined1 *)(param_5 + 0xc) = 1;
        _memcpy((void *)(param_5 + 0x10),param_1,0x420);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

