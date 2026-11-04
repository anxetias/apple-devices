// name: FUN_1005f6332
// address: 1005f6332

undefined8 FUN_1005f6332(int param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 local_449;
  undefined1 local_448 [1056];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = param_1 - 9;
  uVar2 = 0xffffffce;
  if ((uVar3 < 0x35) && ((0x1dbc700bffff6fU >> ((ulong)uVar3 & 0x3f) & 1) != 0)) {
    puVar1 = (&PTR_s_iTunes_Plug_ins_100870250)[uVar3];
    uVar2 = FUN_1003870d4(*(undefined4 *)(&DAT_10075e40c + (ulong)uVar3 * 4),param_2,local_448);
    if ((int)uVar2 == 0) {
      uVar2 = FUN_1005f63db(local_448,puVar1,param_2 & 0xffffffff,0,param_3,&local_449);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

