// name: FUN_100469d4a
// address: 100469d4a

void FUN_100469d4a(undefined8 *param_1)

{
  char cVar1;
  
  *param_1 = &PTR_FUN_10085c110;
  FUN_10046a0b6(param_1,"service cleanup");
  cVar1 = FUN_1001e9c23(param_1 + 3);
  if (cVar1 != '\0') {
    FUN_1001e9d75(param_1 + 3);
  }
  FUN_100205d70(param_1 + 0xc);
  if (param_1[2] != 0) {
    std::__shared_weak_count::__release_weak();
    return;
  }
  return;
}

