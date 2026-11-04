// name: FUN_10057203e
// address: 10057203e

undefined8 * FUN_10057203e(undefined8 *param_1,long *param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  long local_98;
  long lStack_90;
  long local_88;
  undefined1 local_78 [40];
  undefined1 local_50 [8];
  long *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  local_a8 = (undefined4)param_2[4];
  uStack_a4 = *(undefined4 *)((long)param_2 + 0x24);
  uStack_a0 = (undefined4)param_2[5];
  uStack_9c = *(undefined4 *)((long)param_2 + 0x2c);
  local_98 = param_2[6];
  lStack_90 = param_2[7];
  local_88 = param_2[8];
  uVar5 = 0;
  local_38 = param_1;
  do {
    cVar3 = (**(code **)(*param_2 + 0xc0))(param_2,&local_a8,uVar5,local_78,&local_40);
    if (cVar3 == '\0') {
      return local_38;
    }
    iVar4 = (**(code **)(*param_2 + 0xd8))(param_2,local_78);
    uVar5 = local_40;
  } while (iVar4 != param_3);
  (**(code **)(*param_2 + 0xe8))(local_50,param_2,local_78);
  FUN_100217418(local_38,local_50);
  if (local_48 != (long *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_48 + 0x10))(local_48);
      std::__shared_weak_count::__release_weak();
    }
  }
  return local_38;
}

