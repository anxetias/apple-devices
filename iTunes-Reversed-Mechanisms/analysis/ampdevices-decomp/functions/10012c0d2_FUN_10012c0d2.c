// name: FUN_10012c0d2
// address: 10012c0d2

void FUN_10012c0d2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100838968;
  std::mutex::~mutex((mutex *)(param_1 + 6));
  FUN_10012c5c2();
  FUN_100205d70(param_1 + 1);
  FUN_100105c62(param_1);
  operator_delete(param_1);
  return;
}

