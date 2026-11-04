// name: FUN_100129c65
// address: 100129c65

ulong FUN_100129c65(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  char cVar4;
  long lVar5;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long *local_38;
  long *local_30;
  
  if (*(char *)(param_3 + 1) == '\x01') {
    FUN_1001b7b04(local_48,"dsid");
    if (*(char *)(param_3 + 1) == '\0') {
      FUN_10012a54c();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    FUN_1001bb832(&local_38,*param_3);
    FUN_1001bd018(param_1,local_48,&local_38);
    FUN_1001b7a50(&local_38);
    FUN_1001b7a50(local_48);
  }
  FUN_1001a8c1c(&local_38);
  FUN_1001b7a44(local_58);
  FUN_100129a4c(local_48,param_2,&local_38,local_58);
  FUN_1001b7a50(local_58);
  FUN_1001ab006(&local_38);
  plVar2 = (long *)*param_4;
  if (plVar2 != (long *)0x0) {
    cVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,param_1,local_48);
    param_4 = (long *)CONCAT71((int7)((ulong)param_4 >> 8),1);
    if (cVar4 != '\0') goto LAB_100129d96;
  }
  lVar5 = FUN_100156d72();
  local_38 = *(long **)(lVar5 + 0xd8);
  plVar2 = *(long **)(lVar5 + 0xe0);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar2[1] = plVar2[1] + 1;
    UNLOCK();
  }
  param_4 = (long *)CONCAT71((int7)((ulong)param_4 >> 8),local_38 != (long *)0x0);
  local_30 = plVar2;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x10))(local_38,param_1,local_48);
  }
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar5 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_100129d96:
  FUN_1001b7a50(local_48);
  return (ulong)param_4 & 0xffffffff;
}

