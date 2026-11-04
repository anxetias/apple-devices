// name: FUN_100625072
// address: 100625072

undefined8 FUN_100625072(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long local_28;
  long *local_20;
  
  puVar3 = operator_new(0x70,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_100871130;
    *(undefined1 *)(puVar3 + 3) = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    *(undefined4 *)(puVar3 + 8) = 0x3f800000;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    *(undefined4 *)(puVar3 + 0xd) = 0x3f800000;
  }
  FUN_100626872(&local_28,puVar3);
  if (local_28 == 0) {
    uVar4 = 0xffffff94;
  }
  else {
    FUN_100203686(param_1,&local_28);
    uVar4 = 0;
  }
  if (local_20 != (long *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_20 + 0x10))(local_20);
      std::__shared_weak_count::__release_weak();
    }
  }
  return uVar4;
}

