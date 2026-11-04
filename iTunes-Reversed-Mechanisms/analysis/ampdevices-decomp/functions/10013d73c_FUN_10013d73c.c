// name: FUN_10013d73c
// address: 10013d73c

void FUN_10013d73c(undefined8 param_1,void *param_2)

{
  if (param_2 != (void *)0x0) {
    std::mutex::~mutex((mutex *)((long)param_2 + 0x38));
    FUN_10012c5c2();
    FUN_100205d70((long)param_2 + 0x10);
    if (*(long *)((long)param_2 + 8) != 0) {
      std::__shared_weak_count::__release_weak();
    }
    operator_delete(param_2);
  }
  return;
}

