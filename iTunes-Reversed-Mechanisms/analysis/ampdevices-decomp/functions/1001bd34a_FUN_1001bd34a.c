// name: FUN_1001bd34a
// address: 1001bd34a

long FUN_1001bd34a(long *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long local_38;
  long local_30;
  
  lVar2 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a2828(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  else {
    plVar4 = (long *)*param_1;
    if (plVar4 != (long *)param_1[1]) {
      do {
        local_38 = *plVar4;
        local_30 = plVar4[1];
        if (local_38 != 0) {
          LOCK();
          *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
          UNLOCK();
        }
        if (local_30 != 0) {
          LOCK();
          *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
          UNLOCK();
        }
        FUN_100165883(lVar2,&local_38);
        FUN_1001b811c(&local_38);
        plVar4 = plVar4 + 2;
      } while (plVar4 != (long *)param_1[1]);
    }
  }
  return lVar2;
}

