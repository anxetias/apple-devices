// name: FUN_1001192a0
// address: 1001192a0

undefined8 FUN_1001192a0(uint *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  uint *puVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 local_60;
  long local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  long local_38;
  
  puVar4 = auStack_68;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 8) == 0) {
    uVar3 = 0x21737474;
  }
  else {
    uStack_70 = 0x1001192e2;
    puVar5 = param_1;
    local_40 = auStack_68;
    auVar6 = FUN_100108310();
    local_60 = auVar6._8_8_;
    lVar2 = -(auVar6._0_8_ + 0xfU & 0xfffffffffffffff0);
    local_50 = auStack_68 + lVar2;
    local_58 = param_3 + (ulong)(*puVar5 >> 1) * 4;
    local_48 = auStack_68 + (ulong)(*puVar5 >> 1) * 4 + lVar2;
    uVar3 = *(undefined8 *)(puVar5 + 8);
    uVar1 = puVar5[10];
    *(undefined8 *)(auStack_68 + lVar2 + -8) = 0x10011932b;
    FUN_100119121(uVar1,param_2,uVar3,&local_60);
    *(undefined8 *)(auStack_68 + lVar2 + -8) = 0x10011933f;
    FUN_10011153a(param_1 + 2,&local_60,&local_50,1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar1 = *param_1;
    *(undefined8 *)(auStack_68 + lVar2 + -8) = 0x100119354;
    FUN_100119385(&local_50,uVar3,param_2,param_3,uVar1);
    uVar3 = 0;
    puVar4 = local_40;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar4 + -8) = FUN_100119385;
  ___stack_chk_fail();
}

