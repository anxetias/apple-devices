// name: FUN_100245669
// address: 100245669

int FUN_100245669(void)

{
  int iVar1;
  undefined8 in_RCX;
  undefined8 in_R8;
  ulong in_R9;
  undefined8 *in_stack_00000008;
  ulong local_888;
  undefined8 local_880;
  undefined1 local_878 [1056];
  undefined1 local_458 [1056];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (in_stack_00000008 != (undefined8 *)0x0) {
    *in_stack_00000008 = 0;
  }
  iVar1 = FUN_1002441f8();
  if (iVar1 == 0) {
    iVar1 = FUN_1001887a6(local_458,in_RCX,local_878);
    if (iVar1 == 0) {
      iVar1 = FUN_10017cc65(local_878,0x64617461,1,&local_880);
      if (iVar1 == 0) {
        FUN_10017ce92(local_880,&local_888);
        if (in_R9 < local_888) {
          local_888 = in_R9;
        }
        iVar1 = FUN_10017d186(local_880,in_R8,local_888 & 0xffffffff,0,in_stack_00000008);
        FUN_10017cdfb(local_880);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

