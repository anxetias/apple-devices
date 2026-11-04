// name: FUN_1005ae2e4
// address: 1005ae2e4

void FUN_1005ae2e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  char *pcVar2;
  undefined1 local_648 [512];
  undefined1 local_448 [1056];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar1 = FUN_1005a4efe();
  if (iVar1 != 0) goto LAB_1005ae373;
  FUN_1005a3d14(param_3,local_648);
  if (*(int *)(param_1 + 0x15ac) == 0x57415645) {
    pcVar2 = ".wav";
LAB_1005ae34f:
    FUN_1001e26e1(pcVar2,local_648);
  }
  else if (*(int *)(param_1 + 0x15ac) == 0x41494643) {
    pcVar2 = ".aifc";
    goto LAB_1005ae34f;
  }
  FUN_10017ecc9(local_448,local_648,param_4,0);
LAB_1005ae373:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

