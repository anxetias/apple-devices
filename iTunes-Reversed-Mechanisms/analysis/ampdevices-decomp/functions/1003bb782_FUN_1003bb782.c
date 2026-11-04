// name: FUN_1003bb782
// address: 1003bb782

void FUN_1003bb782(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  while (param_1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*param_1;
    if (param_1[4] != 0) {
      std::__shared_weak_count::__release_weak();
    }
    operator_delete(param_1);
    param_1 = puVar1;
  }
  return;
}

