// name: FUN_100117911
// address: 100117911

void FUN_100117911(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [12];
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined1 *local_50;
  undefined1 *local_48;
  undefined4 local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_3c = 0x40000000;
  puStack_60 = (undefined *)0x10011794d;
  auVar3 = FUN_100108310();
  lVar1 = -(auVar3._0_8_ + 0xfU & 0xfffffffffffffff0);
  local_50 = auStack_58 + lVar1;
  uVar2 = (ulong)auVar3._8_4_;
  local_48 = auStack_58 + uVar2 * 4 + lVar1;
  *(undefined8 *)(auStack_58 + lVar1 + -8) = 0x100117983;
  _vDSP_vsmul();
  *(undefined8 *)(auStack_58 + lVar1 + -8) = 0x100117993;
  ___bzero(auStack_58 + uVar2 * 4 + lVar1,uVar2 * 4);
  *(undefined8 *)(auStack_58 + lVar1 + -8) = 0x1001179ab;
  _vDSP_ztoc(&local_50,1,param_2,2,uVar2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  puStack_60 = &UNK_1001179d2;
  ___stack_chk_fail();
}

