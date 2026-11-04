// name: FUN_10019206f
// address: 10019206f

undefined8 FUN_10019206f(long param_1,undefined2 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long local_420;
  undefined1 local_418 [1016];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar1 = FUN_1001e73f2(param_2 + 1,*param_2,local_418,0x3f5,&local_420);
  if (iVar1 < -0x32) {
    if (iVar1 == -0x2251) {
      uVar2 = 0x3f;
      goto LAB_10019210d;
    }
    if (iVar1 == -0x6c) {
      uVar2 = 0xc;
      goto LAB_10019210d;
    }
  }
  else {
    if (iVar1 == 0) {
      local_418[local_420] = 0;
      uVar2 = FUN_10019212e(param_1 + 0x19,local_418,param_3);
      goto LAB_10019210d;
    }
    if (iVar1 == -0x32) {
      uVar2 = 0x16;
      goto LAB_10019210d;
    }
  }
  uVar2 = 0x5c;
LAB_10019210d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

