// name: FUN_1001ccf60
// address: 1001ccf60

void FUN_1001ccf60(undefined8 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined4 local_38;
  undefined4 local_34;
  undefined2 local_30;
  int local_2e;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = FUN_1001cc35a();
  cVar1 = _os_log_type_enabled(uVar2,1);
  if (param_3 == -0x1ffffe00) {
    if (cVar1 == '\0') goto LAB_1001cd0c3;
    local_38 = 0x4000100;
    pcVar3 = "pm) disp-can-sleep?  %u";
    uVar4 = 8;
  }
  else {
    if (param_3 == -0x1ffffdd0) {
      if (cVar1 != '\0') {
        local_38 = 0x4000100;
        local_34 = param_2;
        __os_log_impl(0x100000000,uVar2,1,"pm) disp-on          %u",&local_38,8);
      }
      FUN_1001cc707();
      DAT_1008a2328 = 0;
      goto LAB_1001cd0c3;
    }
    if (param_3 == -0x1ffffdf0) {
      if (cVar1 != '\0') {
        local_38 = 0x4000200;
        local_30 = 0x400;
        local_2e = DAT_1008a2328;
        local_34 = param_2;
        __os_log_impl(0x100000000,uVar2,1,"%{public}s: (%{public}s)",&local_38,0xe);
      }
      FUN_1001cc6e3();
      DAT_1008a2328 = DAT_1008a2328 + 1;
      goto LAB_1001cd0c3;
    }
    if (cVar1 == '\0') goto LAB_1001cd0c3;
    local_38 = 0x4000200;
    local_30 = 0x400;
    pcVar3 = "pm) ???              %u  0x%x";
    uVar4 = 0xe;
    local_2e = param_3;
  }
  local_34 = param_2;
  __os_log_impl(0x100000000,uVar2,1,pcVar3,&local_38,uVar4);
LAB_1001cd0c3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

