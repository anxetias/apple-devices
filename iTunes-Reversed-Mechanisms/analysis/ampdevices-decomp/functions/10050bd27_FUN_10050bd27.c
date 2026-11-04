// name: FUN_10050bd27
// address: 10050bd27

undefined8 FUN_10050bd27(long param_1,undefined1 *param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined1 local_58 [16];
  undefined8 local_48;
  long *plStack_40;
  undefined8 local_38;
  undefined4 local_30;
  short local_2a;
  
  local_30 = 0;
  local_38 = 0x101000000;
  local_48 = 0;
  plStack_40 = (long *)0x0;
  iVar3 = FUN_100256606(param_1,0,&local_38,&local_2a);
  if (plStack_40 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      std::__shared_weak_count::__release_weak();
    }
  }
  if ((iVar3 != 0) && (local_30._1_1_ == '\x01')) {
    FUN_1004fda52(local_58,*(undefined4 *)(param_1 + 0x28));
    FUN_100243ece((int)local_2a,0,iVar3,local_58);
    FUN_1001b7a50(local_58);
  }
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = local_38._6_1_;
  }
  return 0;
}

