// name: FUN_1002252e1
// address: 1002252e1

undefined4 FUN_1002252e1(undefined4 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar4 = FUN_1001b1a0f();
  iVar5 = FUN_1001b19b0();
  if (iVar4 == iVar5) {
    FUN_1001727b4((int)DAT_10070e568,*(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118,0);
  }
  else {
    FUN_1001b0d8d((int)DAT_10070e568);
  }
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  if (*(long *)(param_1 + 2) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 2) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  uVar6 = FUN_1001cebc4(&local_28,0xffffffffffffffff,0xffffffffffffffff,0);
  plVar1 = (long *)CONCAT44(uStack_1c,uStack_20);
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__shared_weak_count::__release_weak();
    }
  }
  return uVar6;
}

