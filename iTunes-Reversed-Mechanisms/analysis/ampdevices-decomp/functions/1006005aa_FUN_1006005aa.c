// name: FUN_1006005aa
// address: 1006005aa

void FUN_1006005aa(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_1006005aa(*param_1);
    FUN_1006005aa(param_1[1]);
    if (param_1[6] != 0) {
      std::__shared_weak_count::__release_weak();
    }
    operator_delete(param_1);
    return;
  }
  return;
}

