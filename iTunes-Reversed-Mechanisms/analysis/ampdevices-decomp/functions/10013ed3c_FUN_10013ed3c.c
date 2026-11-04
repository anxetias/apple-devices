// name: FUN_10013ed3c
// address: 10013ed3c

void FUN_10013ed3c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_10083a590;
  FUN_1001b7a50(param_1 + 0x32);
  FUN_1001b7a50(param_1 + 0x2f);
  FUN_1001b7a50(param_1 + 0x2d);
  FUN_100144042(param_1 + 0x2c,0);
  std::mutex::~mutex((mutex *)(param_1 + 0x22));
  FUN_1001444c2(param_1 + 0x20,0);
  plVar1 = (long *)param_1[0x1e];
  if (plVar1 == param_1 + 0x1a) {
    lVar2 = 0x20;
LAB_10013edbf:
    (**(code **)(*plVar1 + lVar2))();
  }
  else {
    lVar2 = 0x28;
    if (plVar1 != (long *)0x0) goto LAB_10013edbf;
  }
  plVar1 = (long *)param_1[0x16];
  if (plVar1 == param_1 + 0x12) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (plVar1 == (long *)0x0) goto LAB_10013edef;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_10013edef:
  FUN_1001b7a50(param_1 + 0xf);
  FUN_100205d70(param_1 + 0xd);
  FUN_1001b7a50(param_1 + 10);
  FUN_1001a8fac(param_1 + 8);
  FUN_1001b7a50(param_1 + 4);
  if (param_1[2] == 0) {
    return;
  }
  std::__shared_weak_count::__release_weak();
  return;
}

