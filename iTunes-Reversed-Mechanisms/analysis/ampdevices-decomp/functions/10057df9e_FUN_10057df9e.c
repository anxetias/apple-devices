// name: FUN_10057df9e
// address: 10057df9e

void FUN_10057df9e(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong local_28;
  long *plStack_20;
  
  *(undefined1 *)(param_1 + 0x44) = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    local_28 = local_28 & 0xffffffff00000000;
    lVar2 = FUN_1002b7f7c(*(long *)(param_1 + 0x48) + 0x18);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x18) = 0;
    }
    local_28 = local_28 & 0xffffffff00000000;
    lVar2 = FUN_1002b7f7c(*(long *)(param_1 + 0x48) + 0x40);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x18) = 0;
    }
  }
  local_28 = 0;
  plStack_20 = (long *)0x0;
  FUN_100217418(param_1 + 0x58,&local_28);
  if (plStack_20 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_20 + 0x10))(plStack_20);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_100284286(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0xd8);
  FUN_100284286(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined2 *)(param_1 + 0x11c) = 0;
  *(undefined1 *)(param_1 + 0x120) = 0;
  return;
}

