// name: FUN_100365770
// address: 100365770

void FUN_100365770(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined1 *puVar4;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [8];
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  long *local_40;
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  
  FUN_10012bbaa(local_48);
  FUN_1001a8c1c(local_30);
  FUN_10012bc3a(local_70,local_48,local_30);
  FUN_1001a7b90(local_38,local_60);
  FUN_10032f0f2(local_80);
  FUN_10032f0f2(local_58);
  cVar3 = FUN_1001a9164(local_70,local_38,local_58);
  puVar4 = local_80;
  if (cVar3 != '\0') {
    puVar4 = local_58;
  }
  FUN_1001a7a9e(param_1,puVar4);
  FUN_1001a8fac(local_58);
  FUN_1001a8fac(local_80);
  FUN_1001ab240(local_38);
  FUN_1001ab006(local_60);
  FUN_1001a8fac(local_70);
  FUN_1001ab006(local_30);
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_40 + 0x10))(local_40);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

