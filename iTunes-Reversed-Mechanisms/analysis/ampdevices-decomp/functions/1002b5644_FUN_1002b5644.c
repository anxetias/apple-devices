// name: FUN_1002b5644
// address: 1002b5644

undefined8 FUN_1002b5644(long param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 local_3ae8;
  undefined8 uStack_3ae0;
  short local_3a20 [256];
  short local_3820 [256];
  short local_3620 [256];
  short local_3420 [6084];
  undefined1 local_498 [1112];
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x1002b565c;
  auVar5 = FUN_100108310();
  lVar2 = -auVar5._0_8_;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_3ae8 = 0;
  uStack_3ae0 = 0;
  *(undefined8 *)((long)&local_38 + lVar2) = 0x1002b5691;
  iVar3 = FUN_1002b0559();
  if (iVar3 == 0) {
    *(undefined8 *)((long)&local_38 + lVar2) = 0x1002b56cf;
    iVar3 = FUN_1002b1325(param_1);
    uVar4 = 0;
    if ((iVar3 == 0x41412020) || (iVar3 == 0x41415820)) goto LAB_1002b5697;
    *(undefined8 *)((long)&local_38 + lVar2) = 0x1002b56ee;
    iVar3 = FUN_1002b3b9a(param_1,local_498);
    if (iVar3 == 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x3c);
      uVar4 = 0;
      *(undefined8 *)((long)&local_38 + lVar2) = 0x1002b5713;
      iVar3 = FUN_1003b7a40(uVar1,local_498,0,&local_3ae8,0,0);
      if (iVar3 == 0) {
        uVar4 = 0;
        if ((param_2 != 0) && (local_3a20[0] != 0)) {
          *(undefined8 *)((long)&local_38 + lVar2) = 0x1002b5737;
          FUN_1001e1c39(local_3a20,param_2);
          uVar4 = 1;
        }
        if ((auVar5._8_8_ != 0) && (local_3820[0] != 0)) {
          *(undefined8 *)((long)&local_38 + lVar2) = 0x1002b5757;
          FUN_1001e1c39(local_3820,auVar5._8_8_);
          uVar4 = 1;
        }
        if ((param_4 != 0) && (local_3620[0] != 0)) {
          *(undefined8 *)((long)&local_38 + lVar2) = 0x1002b5777;
          FUN_1001e1c39(local_3620,param_4);
          uVar4 = 1;
        }
        if ((param_5 != 0) && (local_3420[0] != 0)) {
          *(undefined8 *)((long)&local_38 + lVar2) = 0x1002b57a8;
          FUN_1001e1c39(local_3420,param_5);
          uVar4 = 1;
        }
      }
      goto LAB_1002b5697;
    }
  }
  uVar4 = 0;
LAB_1002b5697:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)((long)&local_38 + lVar2) = FUN_1002b57b4;
  ___stack_chk_fail();
}

