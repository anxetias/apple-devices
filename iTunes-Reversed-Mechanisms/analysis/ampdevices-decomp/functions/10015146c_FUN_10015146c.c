// name: FUN_10015146c
// address: 10015146c

undefined8 * FUN_10015146c(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 local_38;
  long *plStack_30;
  
  puVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 0;
    *(undefined1 *)(puVar4 + 1) = 0;
    puVar4[2] = 0;
  }
  FUN_100153596(&local_38,puVar4);
  cVar3 = FUN_10015071c(local_38,param_2,0);
  if (cVar3 == '\0') {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    if (plStack_30 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  else {
    *param_1 = local_38;
    param_1[1] = plStack_30;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return param_1;
}

