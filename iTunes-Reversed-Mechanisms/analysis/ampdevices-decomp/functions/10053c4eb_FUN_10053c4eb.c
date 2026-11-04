// name: FUN_10053c4eb
// address: 10053c4eb

void FUN_10053c4eb(void)

{
  undefined8 uVar1;
  undefined1 local_78 [16];
  undefined4 local_68 [4];
  undefined4 local_58 [4];
  undefined8 local_48;
  undefined1 local_40 [4];
  undefined4 local_3c;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_40[0] = 0;
  local_3c = 0;
  FUN_1001b7a44(local_78);
  FUN_100179732(4,&local_48);
  local_58[0] = 0x1660;
  FUN_10017983e(local_48,local_58,4);
  local_58[0] = 0x3648;
  FUN_10017983e(local_48,local_58,4);
  uVar1 = local_48;
  local_58[0] = 0x14;
  local_68[0] = 3;
  FUN_10017983e(local_48,local_58,4);
  FUN_10017983e(uVar1,local_68,4);
  local_58[0] = 0x86;
  FUN_10017983e(local_48,local_58,4);
  local_58[0] = 0x28;
  FUN_10017983e(local_48,local_58,4);
  local_58[0] = 0x1a;
  FUN_10017983e(local_48,local_58,4);
  local_58[0] = 0x17c;
  FUN_10017983e(local_48,local_58,4);
  FUN_10053c8ef(local_48,0x70,1,0x58);
  local_58[0] = 0x68;
  FUN_10017983e(local_48,local_58,4);
  uVar1 = local_48;
  local_58[0] = 0x38;
  local_68[0] = 2;
  FUN_10017983e(local_48,local_58,4);
  FUN_10017983e(uVar1,local_68,4);
  uVar1 = local_48;
  local_58[0] = 0x42;
  local_68[0] = 2;
  FUN_10017983e(local_48,local_58,4);
  FUN_10017983e(uVar1,local_68,4);
  uVar1 = local_48;
  local_58[0] = 0x1e;
  local_68[0] = 1;
  FUN_10017983e(local_48,local_58,4);
  FUN_10017983e(uVar1,local_68,4);
  local_58[0] = 0xc0;
  FUN_10017983e(local_48,local_58,4);
  FUN_10053c8ef(local_48,0xb6,0x15,2);
  FUN_10053c8ef(local_48,3,4,8);
  uVar1 = local_48;
  local_58[0] = 0xc;
  local_68[0] = 3;
  FUN_10017983e(local_48,local_58,4);
  FUN_10017983e(uVar1,local_68,4);
  uVar1 = local_48;
  local_58[0] = 4;
  local_68[0] = 8;
  FUN_10017983e(local_48,local_58,4);
  FUN_10017983e(uVar1,local_68,4);
  FUN_10053c8ef(local_48,500,0x421,0x7e1);
  uVar1 = local_48;
  local_58[0] = 0xbbf;
  local_68[0] = 0xfa9;
  FUN_10017983e(local_48,local_58,4);
  FUN_10017983e(uVar1,local_68,4);
  uVar1 = local_48;
  local_58[0] = 0x19;
  local_68[0] = 0;
  FUN_10017983e(local_48,local_58,4);
  FUN_10017983e(uVar1,local_68,4);
  FUN_1001799f1(local_48,local_40);
  FUN_100179a7b(local_48);
  FUN_100179b9e(local_68,local_40,1,0x10);
  uVar1 = FUN_1001b8336(local_68);
  FUN_1001bb78a(local_58,"%d-%d.%d-%d-%S",1,1,5,10,uVar1);
  FUN_1001b80b2(local_78,local_58);
  FUN_1001b7a50(local_58);
  FUN_1001b7a50(local_68);
  FUN_1001aaf14(local_58,local_78);
  FUN_1001aaadc(&DAT_1008c7858,local_58);
  FUN_1001ab006(local_58);
  FUN_1001b7a50(local_78);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

