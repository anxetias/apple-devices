// name: FUN_1002e9f72
// address: 1002e9f72

undefined8
FUN_1002e9f72(long param_1,int param_2,undefined4 param_3,undefined8 *param_4,undefined4 *param_5)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68 [48];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar1 = FUN_100170ea9(DAT_1008c4d90,0);
  *param_5 = 1;
  FUN_1001c62d9(&local_9c,0x34);
  local_98 = 0x5a4e4f524d;
  local_9c = param_3;
  FUN_1001710c1(uVar1,&local_9c,0xc);
  if (*(uint *)(param_1 + 0x2198) == 0) {
    dVar2 = 0.0;
  }
  else {
    dVar2 = (double)(*(float *)(param_1 + 0x2190) / (float)*(uint *)(param_1 + 0x2198));
  }
  local_90 = (undefined4)(long)(dVar2 / DAT_10070e4d8);
  local_88 = (undefined4)(long)((double)*(float *)(param_1 + 0x2180) / DAT_10070e4d8);
  local_80 = *(undefined4 *)(param_1 + 0x2188);
  local_78 = *(undefined4 *)(param_1 + 0x21a0);
  local_70 = *(undefined4 *)(param_1 + 0x21a8);
  if (param_2 == 2) {
    if (*(uint *)(param_1 + 0x219c) == 0) {
      dVar3 = 0.0;
    }
    else {
      dVar3 = (double)(*(float *)(param_1 + 0x2194) / (float)*(uint *)(param_1 + 0x219c));
    }
    local_8c = (undefined4)(long)(dVar3 / DAT_10070e4d8);
    local_84 = (undefined4)(long)((double)*(float *)(param_1 + 0x2184) / DAT_10070e4d8);
    local_7c = *(undefined4 *)(param_1 + 0x218c);
    local_74 = *(undefined4 *)(param_1 + 0x21a4);
    local_6c = *(undefined4 *)(param_1 + 0x21ac);
  }
  FUN_1001e0a25((long)(dVar2 / DAT_10070e4d8),local_68,0);
  local_68[0] = 0x20;
  FUN_1001710c1(uVar1,local_68,9);
  FUN_1001e0a25(local_8c,local_68,0);
  local_68[0] = 0x20;
  FUN_1001710c1(uVar1,local_68,9);
  FUN_1001e0a25(local_88,local_68,0);
  local_68[0] = 0x20;
  FUN_1001710c1(uVar1,local_68,9);
  FUN_1001e0a25(local_84,local_68,0);
  local_68[0] = 0x20;
  FUN_1001710c1(uVar1,local_68,9);
  FUN_1001e0a25(local_80,local_68,0);
  local_68[0] = 0x20;
  FUN_1001710c1(uVar1,local_68,9);
  FUN_1001e0a25(local_7c,local_68,0);
  local_68[0] = 0x20;
  FUN_1001710c1(uVar1,local_68,9);
  FUN_1001e0a25(local_78,local_68,0);
  local_68[0] = 0x20;
  FUN_1001710c1(uVar1,local_68,9);
  FUN_1001e0a25(local_74,local_68,0);
  local_68[0] = 0x20;
  FUN_1001710c1(uVar1,local_68,9);
  FUN_1001e0a25(local_70,local_68,0);
  local_68[0] = 0x20;
  FUN_1001710c1(uVar1,local_68,9);
  FUN_1001e0a25(local_6c,local_68,0);
  local_68[0] = 0x20;
  FUN_1001710c1(uVar1,local_68,9);
  *param_4 = uVar1;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

