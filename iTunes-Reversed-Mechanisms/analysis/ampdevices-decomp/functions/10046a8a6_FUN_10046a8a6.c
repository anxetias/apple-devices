// name: FUN_10046a8a6
// address: 10046a8a6

void FUN_10046a8a6(void)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined2 local_170;
  undefined1 local_16e;
  undefined2 local_168;
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  undefined2 local_140;
  undefined1 local_138 [16];
  undefined8 local_128;
  long *plStack_120;
  undefined8 local_118;
  long *plStack_110;
  undefined8 local_108;
  long *plStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [32];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined2 local_48;
  undefined1 local_46;
  undefined1 local_40 [16];
  
  FUN_1001b7a44(local_1e0);
  FUN_1001b7a44(local_1d0);
  FUN_1001b7a44(local_1c0);
  FUN_1001b7a44(local_1b0);
  FUN_1001b7a44(local_1a0);
  FUN_1001b7a44(local_190);
  FUN_1001b7a44(local_180);
  local_170 = 0;
  local_16e = 0;
  local_168 = 0;
  FUN_1001b7a44();
  FUN_1001b7a44(local_150);
  local_140 = 0;
  FUN_1001b7a44(local_138);
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  plStack_100 = (long *)0x0;
  local_118 = 0;
  plStack_110 = (long *)0x0;
  local_128 = 0;
  plStack_120 = (long *)0x0;
  FUN_100157480(local_e8);
  FUN_1001b7a44(local_c8);
  FUN_1001573a8(local_b8);
  FUN_1001c16ac(local_40);
  FUN_1001b80b2(local_b8,local_40);
  FUN_1001b7a50(local_40);
  FUN_1001c15c6(local_40);
  FUN_1001b80b2(local_78,local_40);
  FUN_1001b7a50(local_40);
  FUN_1001b82d4(local_a8,"1.5.6",5);
  local_48 = 0xc;
  uVar5 = FUN_1001b83ae(local_78);
  local_46 = FUN_1001ebe95(uVar5);
  FUN_1001b80b2(local_1e0);
  FUN_1001b80b2(local_1d0,local_a8);
  FUN_1001b80b2(local_1c0,local_98);
  FUN_1001b80b2(local_1b0,local_88);
  FUN_1001b80b2(local_1a0,local_78);
  FUN_1001b80b2(local_190,local_68);
  FUN_1001b80b2(local_180,local_58);
  local_16e = local_46;
  local_170 = local_48;
  FUN_1001b7a50(local_58);
  FUN_1001b7a50(local_68);
  FUN_1001b7a50(local_78);
  FUN_1001b7a50(local_88);
  FUN_1001b7a50(local_98);
  FUN_1001b7a50(local_a8);
  FUN_1001b7a50(local_b8);
  cVar4 = FUN_1001cd44e("iTunesStoreDemoMode",0,0);
  if (cVar4 != '\0') {
    local_168 = CONCAT11(local_168._1_1_,1);
    cVar4 = FUN_1001cd44e("iTunesStoreDemoModePreventBuys",0,0);
    local_168 = CONCAT11(cVar4 != '\0',(undefined1)local_168);
    FUN_1001cd96e(local_b8,"iTunesStoreDemoButtonName");
    FUN_1001b80b2(local_160,local_b8);
    FUN_1001b7a50(local_b8);
  }
  uVar5 = FUN_1001a6cc2();
  FUN_1001b81f2(local_150,uVar5);
  plVar3 = plStack_120;
  local_140 = 0;
  local_128 = 0;
  plStack_120 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar3 = plStack_100;
  local_108 = 0;
  plStack_100 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar3 = plStack_110;
  local_118 = 0;
  plStack_110 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_100132b66(local_1e0);
  FUN_1001332c4(local_1e0);
  return;
}

