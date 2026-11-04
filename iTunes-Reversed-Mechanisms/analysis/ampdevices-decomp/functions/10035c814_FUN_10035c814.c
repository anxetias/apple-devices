// name: FUN_10035c814
// address: 10035c814

void FUN_10035c814(long param_1,char *param_2,undefined8 param_3,undefined1 *param_4)

{
  char *pcVar1;
  size_t sVar2;
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 0x150) != '\0') {
    pcVar1 = _strstr(param_2,(char *)(param_1 + 0x150));
    if (pcVar1 == param_2 && pcVar1 != (char *)0x0) {
      if (param_4 != (undefined1 *)0x0) {
        *param_4 = 1;
      }
      sVar2 = _strlen((char *)(param_1 + 0x150));
      FUN_1001dfbb3(param_2 + sVar2,local_238,0x200);
      FUN_10036de38(param_1 + 0x1a8,local_238,param_3,0);
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
        return;
      }
      goto LAB_10035c90e;
    }
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    FUN_10018dd66(param_2,param_3,0);
    return;
  }
LAB_10035c90e:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

