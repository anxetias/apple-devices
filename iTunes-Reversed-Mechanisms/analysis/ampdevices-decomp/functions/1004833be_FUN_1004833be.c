// name: FUN_1004833be
// address: 1004833be

void FUN_1004833be(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  uint uVar4;
  long local_38;
  long *local_30;
  ulong local_28;
  
  uVar3 = *(ulong *)(param_1 + 0x248);
  uVar4 = 0;
  local_28 = uVar3;
  if ((*(uint *)(param_1 + 0x240) >> 0xe & 1) != 0) {
    *(uint *)(param_1 + 0x240) = *(uint *)(param_1 + 0x240) & 0xffffbfff;
    FUN_1001c6987(param_1 + 200,0x6370636e,param_1,0,0);
    plVar2 = *(long **)(param_1 + 8);
    (**(code **)(*plVar2 + 0x10))(plVar2,0x74647063,plVar2,param_1,0);
    uVar3 = *(ulong *)(param_1 + 0x248);
    uVar4 = 0x40;
  }
  if (uVar3 != 0) {
    uVar4 = uVar4 | 0x10;
    *(undefined8 *)(param_1 + 0x248) = 0;
  }
  if ((short)*(uint *)(param_1 + 0x240) < 0) {
    uVar4 = uVar4 | 1;
    *(uint *)(param_1 + 0x240) = *(uint *)(param_1 + 0x240) & 0xffff7fff;
    FUN_1001c6987(param_1 + 200,0x63706c64,param_1,uVar4,&local_28);
  }
  else {
    FUN_1001c6987(param_1 + 200,0x63706c64,param_1,uVar4,&local_28);
    if (uVar4 == 0) goto LAB_1004834bc;
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),0x74647064,param_1,uVar4,&local_28);
LAB_1004834bc:
  if ((local_28 & 0x40000) != 0) {
    FUN_100483533(&local_38,param_1,0);
    if (local_38 != 0) {
      *(undefined1 *)(local_38 + 0x28) = 0;
      FUN_10020e39a(local_38 + 0x30,*(undefined8 *)(local_38 + 0x38));
      *(long *)(local_38 + 0x30) = local_38 + 0x38;
      *(undefined8 *)(local_38 + 0x38) = 0;
      *(undefined8 *)(local_38 + 0x40) = 0;
    }
    if (local_30 != (long *)0x0) {
      LOCK();
      plVar2 = local_30 + 1;
      lVar1 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  return;
}

